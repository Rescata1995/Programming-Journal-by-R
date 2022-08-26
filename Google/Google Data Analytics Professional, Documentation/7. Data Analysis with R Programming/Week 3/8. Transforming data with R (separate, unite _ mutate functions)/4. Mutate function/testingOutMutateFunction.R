install.packages("tidyverse")
library(tidyverse)

data() # Show me all data sets from R Base

View(diamonds) # 'diamonds' is one data set from R Base

# Testing out the mutate function

diamonds_2 <- mutate(diamonds, carat_2=carat*100)

# it can add a new column based on an existing one 

View(diamonds_2)
