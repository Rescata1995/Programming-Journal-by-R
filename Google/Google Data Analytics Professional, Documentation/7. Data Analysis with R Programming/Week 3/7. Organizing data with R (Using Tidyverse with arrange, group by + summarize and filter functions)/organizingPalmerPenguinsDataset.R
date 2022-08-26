
library(tidyverse)

data()

View(penguins)


# Using Arrange function

penguins %>% arrange(bill_length_mm) # Ascending order by 'bill_length_mm' column

penguins %>% arrange(-bill_length_mm) # Descending order by 'bill_length_mm' column

arrange_penguins <- penguins %>% arrange(-bill_length_mm)
View(desc_penguins)


# Using Group by + Summarize functions. EXTRA. drop_na Argument

"
Using the 'penguins' dataset, We could group by species and island and then 
summarize to calculate both the mean and max for the 'bill_length_mm' column.

Use the aliases 'max_b1' for 'max(bill_length_mm)' 
& 'mean_b1' for 'mean(bill_length_mm)'. 

Note: You can do it by means of piping. As well, filter out all Null Values

"

penguins %>% 
  group_by(species, island) %>% 
  drop_na() %>% 
  summarize(max_b1 = max(bill_length_mm), mean_b1 = mean(bill_length_mm))


# Using Filter function

penguins %>% filter(species == "Adelie") # Filter data where 'species' be equals 'Adelie'

filter_penguins <- penguins %>% filter(species == "Adelie")
View(filter_penguins)
