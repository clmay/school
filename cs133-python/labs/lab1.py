#------------------------------------------------------------------------------
# Lab 1
#
# The objective of this lab is to provide you with the opportunity to "play"
# with the Python interpreter and to write your first Python # programs.
# 
# Complete exercises 8, 9, 10, 11, 12 and then 7 at the end of Chapter 2
# (Variables, Expressions and Statements) in the text with a classmate. I would
# encourage you to do each exercise #incrementally in the immediate window in
# the text, that is:
#   * write your input statement. Write an output statement that simply echos
#       the input. Run your program and see if it works.
#   * add your assignment statement that does the calculations. Write an output 
#       statement that echos both the input and the result of your calculation.
#       Run your program and see if it works.
#   * after each of your program runs, make any corrections necessary and run
#       the program again. Continue editing and running until the code does 
#       what you want it to do.
#   * copy and paste the source code as well as the output into a text or word
#       processing file.
#
# Upload a word processing file or a text file that includes the source
#       code as well as the output from each of the problems in moodle.
#------------------------------------------------------------------------------

# Chapter 2, Exercise 8
print("This program will calculate the area of a circle for a given radius.")
radius = float(input("Enter the radius of the circle: "))
import math
area = round((math.pi*radius**2), 2xxxxxxxxxxx)
print("The area of a circle of",radius,"units is about",area,"square units.\n")

#---Output from above code-----------------------------------------------------
# >>>This program will calculate the area of a circle for a given radius.
# >>>Enter the radius of the circle: 345 [<-user input]
# >>>The area of a circle of 345.0 units is about 373928.066 square units.
#------------------------------------------------------------------------------

# Chapter 2, Exercise 9
print("Next it will calculate the area of a rectangle, given a length and width.")
length = float(input("Enter the length of the rectangle: "))
width = float(input("Enter the width of the rectangle: "))
area = length*width
print("The area of a rectangle of length",length,"units and width",width,"units is",area,"square units.\n")

#---Output from above code-----------------------------------------------------
# >>>Next it will calculate the area of a rectangle, given a length and width.
# >>>Enter the length of the rectangle: 435 [<-user input]
# >>>Enter the width of the rectangle: 345 [<-user input]
# >>>The area of a rectangle of length 435.0 units and width 345.0 units is 150075.0 square units.
#------------------------------------------------------------------------------

# Chapter 2, Exercise 10
print("Now, let's calculate MPG given miles driven and gallons consumed.")
distance = float(input("Enter the distance driven: "))
gas = float(input("Now enter the number of gallons consumed: "))
mpg = round((distance/gas), 2)
print("If you drove",distance,"on",gas,", you are getting about",mpg,"mpg.\n")

#---Output from above code-----------------------------------------------------
# >>>Now, let's calculate MPG given miles driven and gallons consumed.
# >>>Enter the distance driven: 33 [<-user input]
# >>>Now enter the number of gallons consumed: 2 [<-user input]
# >>>If you drove 33.0 on 2.0 , you are getting about 16.5 mpg.
#------------------------------------------------------------------------------

# Chapter 2, Exercise 11
print("Just a couple more. This time, given the temperature in Fahrenheit, let's convert to Celsius.")
degf = float(input("Enter the temperature in degrees Fahrenheit: "))
degc = round((degf-32)*5/9, 2)
print(degf,"degrees in Fahrenheit is about",degc,"degrees in Celsius.\n")

#---Output from above code-----------------------------------------------------
# >>>Just a couple more. This time, given the temperature in Fahrenheit, let's convert to Celsius.
# >>>Enter the temperature in degrees Fahrenheit: 32 [<-user input]
# >>>32.0 degrees in Fahrenheit is about 0.0 degrees in Celsius.
#------------------------------------------------------------------------------

# Chapter 2, Exercise 12
print("Now, backwards, from Celsius to Fahrenheit.")
degc = float(input("Enter the temperature in degrees Celsius: "))
degf = round((degc*9/5) + 32, 2)
print(degc,"degrees Celsius is about",degf,"degrees in Fahrenheit.\n")

#---Output from above code-----------------------------------------------------
# >>>Now, backwards, from Celsius to Fahrenheit.
# >>>Enter the temperature in degrees Celsius: 100 [<-user input]
# >>>100.0 degrees Celsius is about 212.0 degrees in Fahrenheit.
#------------------------------------------------------------------------------

#Chapter 2, Exercise 7
print("And finally, let's help you with those pesky interest rates! Given a principal of $10,000.00, an interest rate of 8% and interest compounded monthly, this program will tell you the amount you've earned after any number of years. Let's give it a go!")
principal = float(10000)
interest = float(0.08)
period = int(12) # the number of times interest is compounded per year
years = int(input("Enter the number of years you are willing to wait: "))
amount = round(principal*((1+interest/period)**(period*years)), 2)
print("If you wait",years,"years your investment will grow to $"+str(amount)+"!")

#---Output from above code-----------------------------------------------------
# And finally, let's help you with those pesky interest rates! Given a principal of $10,000.00, an interest rate of 8% and interest compounded monthly, this program will tell you the amount you've earned after any number of years. Let's give it a go!
# Enter the number of years you are willing to wait: 35 [<-user input]
# If you wait 35 years your investment will grow to $162925.5!
#------------------------------------------------------------------------------
