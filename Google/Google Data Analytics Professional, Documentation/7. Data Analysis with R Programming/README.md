**Topics that we will cover divided into weeks:**

_**Week 1.**_ 

1. Programming languages (What is a Programming language, about Syntax & Coding) and Some benefits of using any programming language to work with your data (A. Clarify the steps of your analysis, B. Saves time, and C. Reproduce and share your work)

2. Similarities and differences between Spreadsheets, SQL & R

3. Four reasons about why people who work with data love R; R is accessible, data-centric, open-source and has an active community of users & Three specific situations when you might use it for data analysis (A. Reproducing your analysis, B. Processing lots of data, and C. Creating data visualizations)

4. What type of software application is RStudio & What panes include RStudio

_**Week 2.**_ 

1. What is a Data structure & Lists. Lists are vectors that can keep different types of data 

2. date, time & date-time as Data types in R (Formatting and Converting different types of data into date and date-time using **'Tidyverse' & 'Lubridate'** packages: from a String, from an individual date & from an existing datetime object) Extra. **now() & today()** functions

3. Other common data structure in R: Files, and Basic concepts of R (Function, Argument, Comment, Variable, Data types, Vector & Pipe)

EXTRA. Step by step Getting to know how to use packages, functions and datasets in R from start to finish via diamonds.rmd file

**Reminder of basic functions**: 

Step 1. Using R Packages: **install.packages(), library()**

Step 2. Viewing data: **head(), str(), glimpse(), colnames()**

Step 3. Cleaning data: **rename(), summarize()**

Step 4. Visualizing data: **ggplot(aes()) + geom_point() + facet_wrap()**

Don't forget the useful 'priority column' from the command 'install.packages()'. The priority column tells us what's needed to use functions from the package. If you come across the word "base" in the priority column, then the package is already installed and loaded. You can use all of the functions of that package as soon as you open RStudio. If you find the word "recommended," then the package is installed but not loaded.

4. Where we can find packages of R (the best ones) and their packages documentation: An Introduction to Tidyverse. EXTRA. How to interpret the outcome from a loaded Tidyverse (about its packages) & how to deal with the conflicts? As well, How do we update our Tidyverse package whether totally or partially? Introduction to 'tidyverse_update()' function

5. About packages of Tidyverse **(ggplot2, tidyr, readr, dplyr, tibble, purrr, stringr & forcats)**

6. Working with Pipes (Introduction to Pipes by testing it on the ToothGrowth dataset. Extra. **data(), View(), filter() & arrange()** functions) & Methods for working with two or more than two functions or operations in R: from the least efficient method to pipes (most efficient method)

_**Week 3.**_ 

1. Data frames Vs Tibbles (Differences between Tibbles & Data frames)

2. Summary functions like **head(), str(), colnames() & glimpse()**. EXTRA. **Mutate function*, a function to make changes to our Data frames

3. Creating tibbles via 'as_tibble' function. EXTRA. Reminder of **library(), data() & View()** functions. Differences between an empty data() function & a filled data() function. Lastly, one direct click on Environtment pane to run the **View()** function in this way too

4. The **'readr'** package. About 'readr' and the different file formats that can read/import, each file format has its own readr function to import it; the usage of **readr_example()** function & **readr_example()** with a file inside of the perenthesis to get a tibble, from one dataset, and know each column and its data type. EXTRA. Using the library 'readxl' and the functions *read_excel() +  readxl_example()** to read .xlsx files in R. Lastly, we use the **excel_sheets() + readxl_example()** functions to know the names of the Spreadsheets at hand

5. Cleaning data & columns with R (some useful packages & functions). Installing & loading the **'Here', 'Skimr', 'Janitor' & 'dplyr'** packages & Using some cleaning functions such as **skim_without_charts(), glimpse(), head(), select()**

6. File-naming conventions: __do's__ & __don'ts__ by naming your files & More on R Operators (Arithmetic, Relational, Logical & Assignment)

7. Organizing data with R: Using 'Tidyverse' package with **arrange(), group by(), summarize() & filter()** functions. EXTRA. Using 'drop_na' Argument for excluding NULL or missing values

8. Transforming data with R: **separate(), unite() & mutate()** functions

9. Same data, different resolutions. Testing out some summarize functions, group by() function + some agg functions such as **mean(), sd() and cor()**. EXTRA. Looking at some possible Biases in R via Data visualization

10. Using **bias()** function to quantify bias in our data

11. Using **sample()** function to address biased data with R

_**Week 4.**_ 

1. Practice. Introduction to GGPlot2, we always need to upload the **'ggplot2'** package. Usage of Plus (+) sign to add layers, A glimpse of a Geom function, Adding some Aesthetic: the particular **'linetype' and 'Alpha'** aesthetics & introduction to Mapping. EXTRA. Right steps for making plots in GGPlot2 (Grammar of graphics) & A reusable template for creating plots in ggplot2. As well as, you can find in here a GGPlot2 Cheatsheet

2. About Geoms Functions. Introduction to **geom_smooth() & geom_line()**: using the 'linetype' aesthetic in a geom_smooth(), introduction to **geom_jitter() & geom_bar()** functions: using the 'fill' aesthetic in a geom_bar() & Introduction to a **'Stacked bar chart'**

3. About Facet Functions. About a facet function in general: introduction to **facet_wrap(), faceting your plot by a single variable & facet_grid(), faceting your plot with two variables** functions

4. About Labs & Annotate Function. Importance of annotate & labels for your visuals. A. About the label function, introduction to **labs()** function: usage of **'title', 'subtitle' & 'caption'** arguments. B. About the annotate function, introduction to **annotate()** function: usage of **'x', 'y', 'label', 'color', 'fontface', 'size', 'angle'** arguments

5. Importance of saving your work: Using the **'Export'** option & the **ggsave()** function to save your work

6. EXTRA. Theory about the **'Smoothing'**: What is a Smoothing in GGPlot2 & its two types

7. EXTRA. Filtering & Plots

_**Week 5.**_ 

1. 
