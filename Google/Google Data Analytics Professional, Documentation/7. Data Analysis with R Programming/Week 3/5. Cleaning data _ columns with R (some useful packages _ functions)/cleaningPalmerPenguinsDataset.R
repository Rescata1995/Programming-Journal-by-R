# Cleaning data set packages

install.packages("here")
install.packages("skimr")
install.packages("janitor")
install.packages("dplyr")

library("here")
library("skimr")
library("janitor")
library("dplyr")


# 'penguins' data set for testing out

install.packages("palmerpenguins")
library("palmerpenguins")


# Cleaning functions

skim_without_charts(penguins) # this function give us a pretty comprehensive summary of a data set


glimpse(penguins) # use this function to get a really quick idea of what's in this data set


head(penguins) # use this function to get a preview of the column names and the first few rows of this data set


penguins %>%
  select(species) # use this function, + pipe, to filter a column of the 'penguins' data set

penguins %>%
  select(-species) # use this function, + pipe, to filter out a column of the 'penguins' data set


penguins %>%
  rename(island_new = island) # use this function, + pipe, to rename a column's name


clean_names(penguins) # this function will automatically make sure that the column names are unique and consistent

