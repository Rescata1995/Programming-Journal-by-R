#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
  string name;
  string phonenumber;
  string address;
  int age;
  string password;
  string keyword;
}
person_date;

int main(void)
{
  int num_person;

  do
  {
    num_person = get_int("How many people do you want to register in our database?: ");
  }
  while (num_person < 1);

  person_date person_info[num_person];

  printf("Now, we want to check in the personal information for each preferential customer. Let's start.\n\n");

  for (int i = 0; i < num_person; i++)
  {
    person_info[i].name = get_string("Welcome Sir. What's your full name?: ");
    person_info[i].phonenumber = get_string("Now, what's your phonenumber?: ");
    person_info[i].address = get_string("Then, what's your address?: ");
    person_info[i].age = get_int("How old are you? (just insert the number): ");
    person_info[i].password = get_string("Finally, what password do you want to register to look for your personal information in the future: ");

    do
    {
      person_info[i].keyword = get_string("In case you don't remember your password, you can remember it with a keyword. Create it: ");
    }
    while (strcmp(person_info[i].keyword, person_info[i].password) == 0);

    printf("\n");
    printf("Preferred customer number %i has been successfully registered. \n\n", i + 1);
  }
  printf("You have been finished with the people register. Now you can review their personal data every time you write down their personal password.\n");
  printf("Let's start!\n");

  string password_verification = get_string("Enter your password to verify the authenticity of your person as a preferred customer of our database and to be able to collaborate with your personal data: ");
  printf("\n");

  for (int i = 0; i < num_person; i++)
  {
    if (strcmp(password_verification, person_info[i].password) == 0)
    {
      printf("It's perfect. We could prove that you have one of our favorite customer! Go ahead. Here you personal information:\n");
      printf("Your full name: %s. \nYour phonenumber: %s. \nYour address: %s. \nAnd your age: %i. \n", person_info[i].name, person_info[i].phonenumber, person_info[i].address, person_info[i].age);
      printf("You're welcome. See you soon.\n\n");

      return 0;
    }
  }

  string keyword_user;
  string answer = get_string("Sorry but your password is not registered in our database. Did you forget it? Answer only 'yes' if you forgot it. If you say 'no', you want to say that you do not have a preferred account with us yet: ");

  if (strcmp(answer, "yes") == 0)
  {
    keyword_user = get_string("What is your keyword to be able to remember your password: ");

    for (int i = 0; i < num_person; i++)
    {
      if (strcmp(keyword_user, person_info[i].keyword) == 0)
      {
        printf("That's it! Your password is: %s. So, go ahead and introduce it again to review your personal data.\n\n", person_info[i].password);

        do
        {
          password_verification = get_string("Enter your password again: ");
          printf("\n");
        }
        while (strcmp(password_verification, person_info[i].password) != 0);

        for (int j = 0; j < num_person; j++)
        {
          if (strcmp(password_verification, person_info[i].password) == 0)
          {
            printf("It's perfect. We could prove that you have one of our favorite customer! Go ahead. Here you personal information:\n");
            printf("Your full name: %s. \nYour phonenumber: %s. \nYour address: %s. \nAnd your age: %i. \n", person_info[i].name, person_info[i].phonenumber, person_info[i].address, person_info[i].age);
            printf("You're welcome. See you soon.\n\n");

            return 0;
          }
        }
      }

      else
      {
        printf("\n");
        printf("Keyword wrong. Sorry, but if you don't remember your keyword either... We cannot help you. We really sorry again!\n\n");

        return 1;
      }
    }
  }

  else if (strcmp(answer, "no") == 0)
  {
    printf("\n");
    printf("First, you have to register as a preferred costumer in here. Go ahead, see you.\n\n");

    return 1;
  }

  else
  {
    printf("\n");
    printf("Bad answer, repeat the process again.\n\n");

    return 1;
  }
}

// Se ha dado cuenta que, para hacer comparaciones de igualdad o diferencia entre cadenas de texto, debe siempre llamar a la función "strcmp"? Importante!
