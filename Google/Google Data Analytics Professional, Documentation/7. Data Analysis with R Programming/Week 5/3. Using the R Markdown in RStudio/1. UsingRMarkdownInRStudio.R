
"
1. Installing and loading R Markdown Package

As a reminder R Markdown is a great tool for documenting your analysis at any stage. 
But especially when you've completed a project. Let's open up RStudio and get started with R Markdown. 

Feel free to follow along with the video and try it out on your own later. 
Or go ahead and join us now in your own RStudio account. 
We'll first install the R Markdown package by using our install packages function and R Markdown in parentheses. 

As a reminder, installing packages can take some time. Bright red text may show up in your console as it installs. 
That's all perfectly normal. 

"

install.packages("rmarkdown")


"
2. Example of using R Markdown

Okay, let's open up a new R Markdown or RMD file using the File menu. 
If you're working along with us and you're prompted to install packages that you'll need to open your file, go ahead and click Yes. 

Right away, you might notice some of the outputs available in R Markdown. For now, we'll use the default HTML and document options. 
The other output options will also be available later. We'll add a file name and author, and then open our file. 


2.1 So, on the other new tab, now called as a 'R Markdown Intro.Rmd'...

First of all, we need to save it so that we can save it and use it later.

Now we have an RMD file filled with metadata at the top and chunks of code in the gray sections. 
There's text in between for explaining the code and adding comments on your analysis and conclusions. 
This R Markdown document's in its original format: RMD File.

It's definitely useful and can be edited and added to, 
but if we want to produce a report containing all text, code and results, we need to click the knit button. 

FOR THIS CASE, WE ARE GOING TO CLICK ON THE KNIT BUTTON FROM THE TAB 'R Markdown Intro.Rmd'.

So, now we've got the report: RMD Report. This report is an HTML file that you can share with others. 

"



"
3. RMD File Vs RMD Report

Let's compare the original .rmd file with the HTML report. 
You can tell that the text has been transformed into a more viewer- friendly format. 
Also, the code chunks have all been run. And we now have their output: 
both the columns of data and the plot from an analysis on the cars dataset.

With the HTML report shown along side the .RMD file, 
notice that headings in the report are created when you include one or more hashtags (#) before the heading text, 
such as ## Including Plots. The more hashtags used, the smaller the heading font. 
# Including Plots creates a Header 1 style heading whereas ## Including Plots creates a Header 2 style heading.

The report's clear and formatted in a way that's easy to follow and understand. 
We could share it with stakeholders even if they've got no experience in R. 
R Markdown files are definitely an effective way to complete the data analysis process. 
You can start your analysis in R and create a report, complete with code and visualizations, all in the same workspace. 
Coming up, we'll show you more examples of how to use R Markdown to make your documentation even more effective. 

"