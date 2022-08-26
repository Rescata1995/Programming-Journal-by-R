
"
1. Importance of saving your work

Saving your work so that you can access it later is so important. 
It lets you continue to work on it yourself or share it with others. 
Being able to reproduce and share your work is a key part of your future analyst role because it lets you collaborate with teammates. 
They can double-check your work and offer feedback to help you improve it.

"


"
Getting started

We'll load the ggplot2 package and the penguins dataset. 
To start, let's write some code and create the plot that shows the relationship between body mass 
& flipper length in three penguin species.

"

# Loading ggplot2 & palmerpenguins packages
library(ggplot2)
library(palmerpenguins)

ggplot(data=penguins)+
  geom_point(mapping=aes(x=flipper_length_mm, y=body_mass_g, color=species))


"
2.1 Using the Export option to save your work: 1st method

You'll use the Export option in the plots tab of RStudio. From there, we can save it as an image file or a PDF file. 

Let's try saving it as an image. There are six different options for image format, including PNG and JPEG. 
Let's try PNG. Next, we name our file and click Save.

Now, if we click on the files tab, we'll find our file in the list. Let's open it up.  

"


"
2.2 Using the 'ggsave' function to save your work: 2nd method

You'll use the ggsave function provided by the ggplot2 package. Ggsave is a useful function for saving a plot. 
It defaults to saving the last plot that you displayed and uses the size of the current graphics device.

Let's try saving our plot as a PNG file using ggsave. 
Ggsave will automatically save the plot that shows the relationship between body mass and flipper length because this is the 
last plot that we displayed. We have to give the file a name and say what kind of file we want to save it as. Let's write the code. 

Within the parentheses of the function we start off with a quotation mark, followed by the name of the file. 
Let's name it 'Three Penguin Species'. We put a period after the file name, then the type of file we want, then a closing quotation mark. 
Let's run it.

"

ggsave("Three Penguin Species.png")


"
Now, if we click on the files tab, we'll find our new file in the list. Let's open it up.

"
