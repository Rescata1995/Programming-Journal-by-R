install.packages("tidyverse")
library("tidyverse")

readr_example() # The readr package comes with some sample files, take a look of them with this function

View(mtcars)

mtcars <- read_csv(readr_example("mtcars.csv")) # Show a column specification & a tibble
mtcars

