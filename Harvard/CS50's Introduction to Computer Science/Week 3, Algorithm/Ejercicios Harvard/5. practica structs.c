#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
  string name;
  string phonenumber;
}
person_date;

int NUM_PEOPLE; /* La declaramos por fuera y como si fuera una constante; pero, sin ser una constante realmente.
                   Variables definidas por tecla no pueden ser consideradas como variables constantes */
int main(void)
{

  do
  {
    NUM_PEOPLE = get_int("How many people do you want to register in our database?: ");
  }
  while (NUM_PEOPLE < 1);

  person_date person_check[NUM_PEOPLE];

  for (int i = 0; i < NUM_PEOPLE; i++)
  {
    person_check[i].name = get_string("Welcome Sir. What is your name to check you in our hotel?: ");
    person_check[i].phonenumber = get_string("Now, what is your phonenumber?: ");
    printf("\nThanks! Now, every time you wanna check your phonenumber, you are gonna see it every time you ask for it. See you.\n\n");
  }

  printf("The quantity of persons registered in our database: %i people. These guests are the only ones who can check their phonenumbers. Let's start!\n\n", NUM_PEOPLE);

  string names = get_string("You wanna see your data; but, first, we wanna check that you belong to our favorite customers' list. So, what is your name?: ");

  for (int i = 0; i < NUM_PEOPLE; i++)
  {
    if (strcmp(names, person_check[i].name) == 0)
    {
      printf("Yes sir. You belong to us. Here your phonenumber: %s. You're welcome.\n", person_check[i].phonenumber);

      return 0;
    }
  }

  printf("Sorry Sir, you do not belong to us. First, you need to be registered in our database. See you soon!\n");

  return 1;
}
