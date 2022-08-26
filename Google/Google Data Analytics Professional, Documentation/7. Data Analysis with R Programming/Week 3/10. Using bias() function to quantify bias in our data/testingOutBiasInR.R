# We are going to test out some possible bias in R & how to calculate them

"
we need to install and load the 'SimDesign' package to use the 'bias' 
function

"

install.packages("SimDesign")
library(SimDesign)


# Explanation of 'bias' function

"
Basically the bias function finds the average amount that the actual 
outcome is greater than the predicted outcome.

If the model is unbiased, the outcome should be pretty close to zero. 
A high result means that your data might be biased. 
A good thing to know before you analyze it. 

Let's try to test out this on two mock vectors to be compared each: 
the first one is the actual one & the second one is the predicted one.

"


# Example of 'Using bias function to quantify bias in our data' 

"
In this scenario we're working for a game store. The store has been 
keeping a record of how many copies of new games they sell on release day. 

They want to compare those numbers to their actual sales so that they could 
find out if they are ordering new stock according to their actual needs.

We will start by inputting our sales data, will label that actual underscore 
sales and add the data points.

Next will input the amount of stock they ordered as predicted underscore sales 
and then input those data points.

"

actual_sales <- c(150, 203, 137, 247, 116, 287)
predicted_sales <- c(200, 300, 150, 250, 150, 300)
bias(actual_sales, predicted_sales)


# The result is negative 35 (-35). That's pretty far from zero. 

"
The predicted outcome is larger than the actual outcome which means they 
may be ordering too much stock for release days. 

Now that they have used the bias function to compare these data points, 
they can reevaluate their stocking practices to avoid buying more stock 
than they need at once.

"