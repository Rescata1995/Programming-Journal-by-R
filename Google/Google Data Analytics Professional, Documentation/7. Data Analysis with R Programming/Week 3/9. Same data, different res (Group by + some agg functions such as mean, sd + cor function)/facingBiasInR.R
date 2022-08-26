# We are going to face some possible bias in R & how to tackle them

"
We are going to face this on the 'Anscombe's quartet' data that belongs 
to the 'Tmisc' package, so let's install it!

"

install.packages('Tmisc')
library(Tmisc)


"
As well, we need to install and load the 'Tidyverse' package to use the 'summarize' 
function

"

install.packages("tidyverse")
library(tidyverse)


# Now, let's check out our 'quartet' data by means of 'View' function

data("quartet")
View(quartet)


"
So, We'll get a summary of each set with the mean, standard deviation, 
and correlation for each of these datasets. 

We'll start by indicating that we want to group our data by set.

"

quartet %>%
  group_by(set) %>%
  summarize(mean_x = mean(x), mean_y = mean(y), sd_x = sd(x), sd_y = sd(y), 
            correlationXandY = cor(x,y))


# Looking at some possible Biases in R via Data visualization

ggplot(quartet, aes(x,y)) + geom_point() + geom_smooth(method=lm, se=FALSE) + facet_wrap(~set)
