# We need to install & load the tidyverse package
install.packages("tidyverse")
library(tidyverse)

# Loading ggplot2 & palmerpenguins packages
library(ggplot2)
library(palmerpenguins)


"
1. geom_smooth & geom_line

We still have the same data, but now the data's got a different visual appearance. Instead of points, there's a smooth line that fits the data.  
The geom underscore smooth function's useful for showing general trends in our data. 
The line clearly shows the positive relationship between body mass and flipper length. 
The larger the penguin, the longer the flipper. 

We can even use two geoms in the same plot. 
Let's say we want to show the relationship between the trend line and the data points more clearly. 
We can combine the code for geom underscore point and the code for geom underscore smooth by adding a plus symbol after geom underscore smooth. 
Let's write the code and run it.

"

ggplot(data=penguins)+
  geom_smooth(mapping=aes(x=flipper_length_mm, y=body_mass_g))+
  geom_point(mapping=aes(x=flipper_length_mm, y=body_mass_g))


"
2. Using the 'linetype' aesthetic in a geom_smooth

Let's say we want to plot a separate line for each species of penguin. 
We can add the line type aesthetic to our code and map it to the variable species. 
Geom underscore smooth will draw a different line with a different line type for each species of penguin. 
The legend shows how each line type matches with each species. The plot clearly shows the trend for each species.

As well as, let's try to map the same variable 'species' to the color aesthetic.

"

ggplot(data=penguins)+
  geom_smooth(mapping=aes(x=flipper_length_mm, y=body_mass_g, linetype=species, color=species))


"
3. Introduction to 'geom_jitter' function

Let's check out the geom_jitter function. The geom_jitter function creates a scatter plot & 
then adds a small amount of random noise to each point in the plot. 

Jittering helps us deal with over-plotting, which happens when the data points in a plot overlap with each other. 
Jittering makes the points easier to find. I'll show you what I mean. Let's replace geom underscore point with geom underscore jitter.

"

ggplot(data=penguins)+
  geom_jitter(mapping=aes(x=flipper_length_mm, y=body_mass_g))


"
4. Introduction to 'geom_bar' function

Now that we've seen what ggplot2 can do with scatter plots, let's explore bar charts. 

We'll use the diamonds dataset that you're already familiar with. 
This includes data like the quality, clarity, and cut for over 50,000 diamonds. 
This dataset comes with the ggplot2 package, so it's already loaded. 
To make a bar chart, we use the geom underscore bar function. Let's write some code that plots a bar chart of the variable cut in the diamonds dataset. 
Cut refers to a diamond's proportions, symmetry, and polish. 

Notice that we didn't supply a variable for the y-axis. 
When you use geom underscore bar, R automatically counts how many times each x-value appears in the data, and then shows the counts on the y-axis. 
The default for geom underscore bar is to count rows. But that's only one of the many different applications for bar charts. 

For example, the x-axis of our plot shows five categories of cut quality: fair, good, very good, premium, and ideal. 
The y-axis shows the number of diamonds in each category. 
Over 20,000 diamonds have a value of ideal, which is the most common type of cut. 

Geom underscore bar uses several aesthetics that you're already familiar with, such as color, size, and alpha. 

Let's add the color aesthetic to our plot and map it to the variable cut. 
We write the code the same way as we did with scatter plots and add color equals cut after x equals cut. 

"

ggplot(data=diamonds)+
  geom_bar(mapping=aes(x=cut, color=cut))


"
4.1 Using the 'fill' aesthetic in a geom_bar

The color aesthetic adds color to the outline of each bar. R also supplies a legend to show the color-coding. 
Let's say, we want to highlight the difference between cuts even more clearly to make our plot easier to understand. 

We can use the fill aesthetic to add color to the inside of each bar. In our code, we put fill equals cut in place of color equals cut.

"

ggplot(data=diamonds)+
  geom_bar(mapping=aes(x=cut, fill=cut))


"
4.2 Introduction to a 'Stacked bar chart'

If we map fill to a new variable, geom underscore bar will display what's called a stacked bar chart. Let's map fill to clarity instead of cut.

"

ggplot(data=diamonds)+
  geom_bar(mapping=aes(x=cut, fill=clarity))

# Key takeaway: Our plot now shows 40 different combinations of cut and clarity. Each combination has its own colored rectangle. 
# The rectangles that have the same cut value are stacked on top of each other in each bar.