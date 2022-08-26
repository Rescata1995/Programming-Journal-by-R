# Loading ggplot2 & palmerpenguins packages
library(ggplot2)
library(palmerpenguins)


"
1. Importance of annotate & labels for your visuals

In ggplot 2 adding annotations to your plot can help explain the plot's purpose or highlight important data. 
When you present your data visuals to stakeholders, you may not have much time to meet with them. 
Labels and annotations will point their attention to key things and help them quickly understand your plot. 

"



"
2. Label function     

It's super useful for adding informative labels to a plot such as titles, subtitles, and captions. 


2.1 Introduction to 'labs' function using the 'title' argument

For example, we can add a title to our plot that shows the relationship between body mass and flipper length for the three penguin species. 
A title will clearly indicate the purpose of the plot. Let's go over the code. 
First, we add a plus sign to add a new layer to our plot. 
Next in the parentheses, following the label function, we write the word title, then an equal sign than the specific text we want in our title. 
Check it out!

"

ggplot(data=penguins)+
  geom_point(mapping=aes(x=flipper_length_mm, y=body_mass_g, color=species))+
  labs(title="Palmer Penguins: Body Mass vs. Flipper Length")

"
R automatically displays the title at the top of the plot.

"


"

2.2 Using the 'subtitle' argument

We can also add a subtitle to our plot to highlight important information about our data. 
To do this, we enter the code for a subtitle in the same way as a title. 
Remember to add a comma after the title argument before you enter your subtitle.

"

ggplot(data=penguins)+
  geom_point(mapping=aes(x=flipper_length_mm, y=body_mass_g, color=species))+
  labs(title="Palmer Penguins: Body Mass vs. Flipper Length", subtitle="Sample of Three Penguin Species")

"
R automatically displays the subtitle just below the title.

"


"

2.3 Using the 'caption' argument

We can add a caption to our plot in the same way. Captions let us show the source of our data. 
The palmer penguins data was collected from 2007 to 2009 by Dr.Kristen Gorman, 
a member of the Palmer Station Long Term Ecological Research program. 
Let's cite Dr. Gorman in our caption.

"

ggplot(data=penguins)+
  geom_point(mapping=aes(x=flipper_length_mm, y=body_mass_g, color=species))+
  labs(title="Palmer Penguins: Body Mass vs. Flipper Length", subtitle="Sample of Three Penguin Species", 
       caption="Data collected by Dr. Kristen  Gorman")

"
R automatically displays the caption at the bottom right of our plot.

Titles, subtitles, and captions are labels that we put outside of the grid of our plot to indicate important information. 

"



"
3. Annotate function  

If we want to put text inside the grid to call out specific data points, we can use the annotate function.

Annotations are a useful way to add notes to your plot. 
They help you explain the plot's purpose, highlight important data points, or comment on any data trends or findings the plot illustrates. 
You have already learned how to add notes as labels, titles, subtitles, and captions.


3.1 Introduction to 'annotate' function using their arguments (x, y, label, etc)

For example, let's say we want to highlight the data from the Gentoo penguins. 
We can use the annotate function to add some text next to the data points that refer to the Gentoos. 
This text will clearly communicate what the plot shows and reinforce an important part of our data. 

Okay, let's check out the code. In the parentheses of the annotate function, we've got information on the type of label, 
the specific location of the label, the context of the label & the color, font style and size of our label. 

In this case, we want to write a text label. We also want to place it near the Gentoo data points. 
Let's put it at the following coordinates: x-axis equals 220 millimeters and y-axis equals 3,500 grams. 

We can even change the angle of our text. For example, we can tilt our text at a 25 degree angle to line it up with our data points.

Finally, let's write our text: 'The Gentoos are the largest'.

Look at this:

"

ggplot(data=penguins)+
  geom_point(mapping=aes(x=flipper_length_mm, y=body_mass_g, color=species))+
  labs(title="Palmer Penguins: Body Mass vs. Flipper Length", subtitle="Sample of Three Penguin Species", 
       caption="Data collected by Dr. Kristen  Gorman")+
  annotate("text", x=220, y=3500, label="The Gentoos are the largest", color="purple", fontface="bold", size=4.2, angle=25)

"
Hopefully, this gives you an idea of some of the ways you can customize your plots. 
Labels and annotations can be really helpful when it comes to highlighting important parts of your data and communicating key points.

"
