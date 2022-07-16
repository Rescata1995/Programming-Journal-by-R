
"
1. Loading tidyverse and lubridate packages

"

install.packages("tidyverse") 
library(tidyverse)
library(lubridate)



"
2. today() & now() functions

"

# Run this, one by one

today()
# [1] "2022-07-16"

now()
# [1] "2022-07-16 15:11:16 -05"



"
3. Converting from strings to date

3.1 Using 'ymd() function'

"
a <- ymd("2021-01-20")
is.Date(a)
a
# [1] "2021-01-20"


"
3.2 Using 'mdy() function'

"
b <- mdy("January 20th, 2021")
is.Date(b)
b
# [1] "2021-01-20"


"
3.3 Using 'dmy() function'

"
c <- dmy("20-Jan-2021")
is.Date(c)
c
# [1] "2021-01-20"


"
EXTRA. 

These functions also take unquoted numbers and convert them 
into the yyyy-mm-dd format.

ymd(20210120)

#> [1] '2021-01-20'

"



"
4. Converting from dates to date-time

The ymd() function and its variations create dates. 
To create a date-time from a date, add an underscore and 
one or more of the letters h, m, and s 
(hours, minutes, seconds) to the name of the function:


ymd_hms('2021-01-20 20:11:59')

#> [1] '2021-01-20 20:11:59 UTC'


mdy_hm('01/20/2021 08:01')

#> [1] '2021-01-20 08:01:00 UTC'


Let's practice

"


"
4.1 Using 'ymd_hms() function'

"
d <- ymd_hms("2021-01-20 20:11:59")
d
# [1] "2021-01-20 20:11:59 UTC"


"
4.2 Using 'mdy_hm() function'

"
e <- mdy_hm("01/20/2021 08:01")
e
# [1] "2021-01-20 08:01:00 UTC"


" 
5. Converting from date-time to date

Finally, you might want to switch between a date-time and 
a date. 

You can use the function as_date() to convert a date-time 
to a date. For example, put the current date-time-now()-in
the parentheses of the function. Let's see.

"

f <- as_date(now())
f
is.Date(f)
#TRUE

