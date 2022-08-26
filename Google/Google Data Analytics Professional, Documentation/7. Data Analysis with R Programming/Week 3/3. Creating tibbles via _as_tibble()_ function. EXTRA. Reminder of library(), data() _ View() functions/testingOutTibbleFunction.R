install.packages("tidyverse")
library(tidyverse)

data() # Show me all data sets from R Base

View(diamonds) # 'diamonds' is one data set from R Base

# Testing out the tibble function

diamonds_tibble <- as_tibble(diamonds)
diamonds_tibble
