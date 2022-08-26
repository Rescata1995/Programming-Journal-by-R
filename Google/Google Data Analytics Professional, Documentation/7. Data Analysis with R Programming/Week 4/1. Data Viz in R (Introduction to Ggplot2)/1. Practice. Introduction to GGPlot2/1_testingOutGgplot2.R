# We need to install & load the tidyverse package
install.packages("tidyverse")
library(tidyverse)

# Loading ggplot2 & palmerpenguins packages
library(ggplot2)
library(palmerpenguins)


"
Let's check out the plot that shows the relationship between body mass 
& flipper length in the three penguin species.

"

ggplot(data=penguins) + geom_point(mapping=aes(x=flipper_length_mm, y=body_mass_g))


"
The plot shows a positive relationship between the two variables. In other words, 
the larger the penguin, the longer the flipper. Now let's check out the code. 

The code uses functions from ggplot2 to plot the relationship between body mass and flipper length. 
As a quick refresher, in R a function's a name followed by a set of parentheses. 
Lots of functions require special information to do their jobs. 
You write this information called the function's argument inside the parentheses. 
The three functions in the code are the ggplot function, the geom_point function, and the aes function. 

Every ggplot2 plot starts with the ggplot function. 
The argument of the ggplot function tells R what data to use for your plot. 
So the first thing to do is choose a data frame to work with. 

You can set up the code like this. 
Inside the parentheses of the function write the word data, then an equal sign, then penguins. 
This code initializes or starts the plot. 
If we stop right now and run the code, the result will be an empty plot. 

Let's try to break down this! Creating a plot step by step!

"


"
1. Usage of plus (+) sign 

You use the plus sign to add layers to your plot. In ggplot2 plots are built through combinations of layers. 

"


"
2. Adding a Geom function

First, we start with our data. Then we add a layer to our plot by choosing a geom to represent our data. 
The function geom_point tells R to use points to represent our data. 
Keep in mind that the plus sign must be placed at the end of each line to add a layer.

Adding a geom function is the second step in creating a plot. 
As a reminder, a geom is a geometric object used to represent your data. 
Geoms include points, bars, lines, and more. In our code, the function geom_point tells R to use points and create a scatter plot. 
We'll learn more about geoms later on.

"


"
3. Adding the Aesthetic

Next, we need to choose specific variables from our dataset and tell R how we want these variables to look in our plot. 
In ggplot2, the way a variable looks is called its aesthetic. 
As a quick reminder, an aesthetic is a visual property of an object in your plot, like its position, color, shape, or size, even a new one: linetype 
(Marks in Tableau). 


3.1 the particular 'linetype' aesthetic

The 'linetype' aesthetic is used to plot different kinds of lines for geom_functions that have to do with, certainly, lines. 
We cannot use the visual property 'linetype' inside geom_functions that haven't to do with lines, keep it in mind. 
It's an aesthetic, that's correct, but we cannot use it in all geom_functions.
We are going to put this in practice later on.


3.2 About Mapping, what is this?

The mapping equals aes part of the code tells R what aesthetics to use for the plot. 
You use the aes function to define the mapping between your data and your plot. 

Mapping means matching up a specific variable in your dataset with a specific aesthetic. 
For example, you can assign a variable to the x- axis of your plot, or you can assign a variable to the y-axis of your plot. 
In a scatter plot, you can also assign a variable to the color, size, and shape of your data points. We'll learn more about aesthetic soon. 

Mapping aesthetics to variables is the third step in creating a plot. 
In our code, we map the variable flipper length to the x-axis and the variable body mass to the y-axis. 
Inside the parentheses of the aes function, we write the name of the aesthetic then the equal sign, then the name of the variable. 
We write the code and R takes care of the rest.


3.3 A New aesthetic: 'Alpha'

We can also map species to the alpha aesthetic, which controls the transparency of the points. 
Our first plot showed the relationship between body mass and flipper length in black and white.

If we want to keep our graph in black and white, we can map the alpha aesthetic to species. 
This will make some points more transparent or see-through than others. 
This gives us another way to represent each penguin species. Let's try it. 

Alpha is a good option when you've got a dense plot with lots of data points.

"
ggplot(data=penguins) + geom_point(mapping=aes(x=flipper_length_mm, y=body_mass_g, alpha=species))


"
EXTRA. Right steps for making plots in GGPlot2 (Grammar of graphics)

Our code follows the common sequence for creating plots in ggplot2. 
Earlier, we talked about the grammar of graphics, a set of steps for making all kinds of different plots. 
You can also think of this sequence as the basic grammar for making plots in ggplot2. 

To create a plot, follow these three steps: start with the ggplot function and choose a dataset to work with, 
add a geom_function to display your data, 
map the variables you want to plot in the argument of the aes function. 

"


"
EXTRA. A reusable template for creating plots in ggplot2

We can also turn our code into a reusable template for creating plots in ggplot2. Let's test out the next one:

"

ggplot(data=<DATA>)+
  <GEOM_FUNCTION>(mapping=aes(<AESTHETIC MAPPINGS>))


"
We can make all kinds of different plots using this template. 
For example, instead of plotting the relationship between body mass and flipper length, 
we could use two different variables in the penguins dataset. 
Let's try bill length and bill depth. We can put bill length on the x-axis and bill depth on the y-axis. 

"

ggplot(data=penguins) + geom_point(mapping=aes(x=bill_length_mm, y=bill_depth_mm))

# Let's run the code and check out this new scatter plot.


"
EXTRA. Pay attention to details, Watch out!

1. R is case-sensitive, if you accidentally capitalize the first letter in a certain function, it might affect your code. 

2. Make sure every opening parenthesis in your function matches with a closing parenthesis. 

3. One common problem when working with ggplot2 is remembering to put the plus sign in the right place when adding a layer to your plot. 
Always put the plus sign at the end of a line of code. It's easy to forget and put it at the beginning of the line (Wrong place).

"


"
4. About Setting, what is this?

You can also set the aesthetic apart from a specific variable. Let's say we want to change the color of all the points to purple. 
Here we don't want to map color to a specific variable like species. We just want every point in our scatter plot to be purple. 
So we need to set our new piece of code outside of the aes function and use quotation marks for our color value. 
This is because all the code inside of the aes function tells R how to map aesthetics to variables. 
For example, mapping the aesthetic color to the variable species.

If we want to change the appearance of our overall plot without regard to specific variables, we write code outside of the aes function. 
Let's write the code and run it.

"

ggplot(data=penguins) + geom_point(mapping=aes(x=flipper_length_mm, y=body_mass_g), color="purple")
