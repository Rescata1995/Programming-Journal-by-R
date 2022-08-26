# We need to install & load the tidyverse package
install.packages("tidyverse")
library(tidyverse)

# Loading ggplot2 & palmerpenguins packages
library(ggplot2)
library(palmerpenguins)

#Facet functions (facet_wrap Vs facet_grid)

"
1. About a facet function in general

Facet functions let you display smaller groups or subsets of your data. 
A facet is a side or section of an object, like the sides of a gemstone. 
Facets show different sides of your data by placing each subset on its own plot. 
Faceting can help you discover new patterns in your data and focus on relationships between different variables. 

For example, let's say you're looking at sales data for a clothing company. 
You might want to break down your data by category to show specific trends: 
children's clothing versus adult clothing, or spring fashions versus fall fashions. 
Or if you are running an employee engagement survey, you might want to break down your data by tenure and compare senior employees to new employees. 

Ggplot2 has two functions for faceting; Facet_wrap and facet_grid. Let's explore them both. We will start with facet_wrap. 

"


"
1.1 About facet_wrap: faceting your plot by a single variable.

To facet your plot by a single variable, use facet_wrap. Let's say we wanted to focus on the data for each species of penguin. 
Take our plot that shows the relationship between body mass and flipper length in each penguin species. 
The facet_wrap function lets us create a separate plot for each species. 

To add a new layer to our plot, we'll add a plus symbol to our code. 
Then inside the parentheses of the facet_wrap function, type a tilde symbol (~), followed by the name of the variable. 

Let's log into RStudio Cloud and check it out. As a reminder, we'll start by loading the ggplot2 package and the penguins dataset.
You can find the tilde symbol (~) in the upper-left corner of your keyboard, just below the escape key.

"

# 1st Example. Faceting the 'penguins' dataset: A scatter plot for every species of penguin in the relationship between body mass and flipper length.

ggplot(data=penguins, aes(x=flipper_length_mm, y=body_mass_g))+
  geom_point(aes(color=species))+
  facet_wrap(~species)

"
Facets help us focus on important parts of our data that we might not notice in a single plot. 
If your is visual is too busy, for example, if it's got too many variables or levels within variables, faceting can be a good option. 

"

# 2nd Example. Faceting the 'diamonds' dataset: A bar chart for every cut of diamond in the accounting of them

ggplot(data=diamonds)+
  geom_bar(mapping=aes(x=color, fill=cut))+
  facet_wrap(~cut)



"
1.2 About facet_grid: faceting your plot with two variables

To facet your plot with two variables, use the facet_grid function. 

Facet_grid will split the plot into facets vertically by the values (categories or levels in R) of the first variable (1st field) 
& horizontally by the values (categories or levels in R) of the second variable (2nd field). 

"

# 1st Example. We can take our penguins plot and use facet_grid with the two variables, sex and species. 
# In the parentheses following the facet_grid function, we write sex, then the tilde symbol (~), then species. Lets run the code.

ggplot(data=penguins)+
  geom_point(mapping=aes(x=flipper_length_mm, y=body_mass_g, color=species))+
  facet_grid(sex~species)

"
There are nine separate plots, each based on a combination of the three species of penguin and three categories of sex. 
Facet_grid lets you quickly reorganize and display complex data and makes it easier to spot relationships between different groups.

"

"
If we want, we can focus our plot on only one of the two variables. 

"

# 2nd Example. We can tell R to remove 'sex' from the vertical dimension of the plot and just show species. Let's check it out. 

ggplot(data=penguins)+
  geom_point(mapping=aes(x=flipper_length_mm, y=body_mass_g, color=species))+
  facet_grid(~species)

"
You can easily spot differences in the relationship between flipper length and body mass between the three species. 
In the same way, we can focus our plot on sex instead of species.

"

# 3rd Example.

ggplot(data=penguins)+
  geom_point(mapping=aes(x=flipper_length_mm, y=body_mass_g, color=species))+
  facet_grid(~sex)

# Key takeaway: Facets let you reorganize your data to show specific relationships 
# between variables and reveal important patterns and trends in subsets of your data. 