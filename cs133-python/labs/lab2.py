#---Lab 2----------------------------------------------------------------------
# The objective of this lab is to introduce you to functions and selection or
# conditional statements in Python.
#
# Complete the following exercises from chapters 4 (Modules) and 5 (Functions)
# of your text with a classmate. Experiment with each problem until you and
# your partner understand the concept presented in the problem. Document the
# completion of each problem by:
#   * providing your source code and output from your program
#   * writing a sentence or two describing what you learned from completing the
#       problem
#   * uploading the file that contains your documentation in moodle. Each
#       student must submit a copy of the file.
#
# Complete each of the following problems.  Your solution to the problems in
# chapter 5 must involve writing a function definition and program that calls
# that function to produce the desired results:
#   * Write a program that will draw a square of random size.
#   * Exercise 8 in chapter 5 (Functions).
#   * Exercise 7 in chapter 5.
#------------------------------------------------------------------------------

import random

side = round(random.random()*10, 2)
squarea = side**2

print("The area of a square with a randomly generated side length of",side,"units is about",squarea,"square units.\n")

#---Output from above code-----------------------------------------------------
# >>>The area of a square with a randomly generated side length of 4.95 units is about 24.5025 square units.
#------------------------------------------------------------------------------

# Chapter 5, Exercise 8: Write a function areaOfCircle(r) which returns the
# area of a circle of radius r. Make sure you use the math module in your
# solution.

import math

def areaOfCircle(r):
    """Compute the area of a circle of radius r"""
    area = round(math.pi * r**2, 2)
    return area

print("Next, we can calculate the area of a circle of a given radius. Follow the directions.\n")

radius = float(input("Enter the radius of a circle: "))

print("The area of a circle of radius",radius,"is about",areaOfCircle(radius),"square units.\n")

#---Output from above code-----------------------------------------------------
# >>>Next, we can calculate the area of a circle of a given radius. Follow the directions.
# >>>Enter the radius of a circle: 3 [<-user input]
# >>>The area of a circle of radius 3.0 is about 28.27 square units.
#------------------------------------------------------------------------------

#Chapter 5, Exercise 7: Write a fruitful function sumTo(n) that returns the
# sum of all integer numbers up to and including n. So sumTo(10) would be
# 1+2+3...+10 which would return the value 55. Use the equation (n * (n + 1)) / 2.

def sumTo(n):
    """Sum from 0 to given numbers"""
    sum = int((n * (n + 1)) / 2)
    return sum

print("Finally, let's calculate the sum of the integers from 0 to the given number. Follow the directions.\n")

sum_this = int(input("Enter a number: "))

print("The sum of the integers from 0 to",sum_this,"is",sumTo(sum_this),".\n")

#---Output from above code ----------------------------------------------------
# >>>Finally, let's calculate the sum of the integers from 0 to the given number. Follow the directions.
# >>>Enter a number: 4 [<-user input]
# >>>The sum of the integers from 0 to 4 is 10 .
#------------------------------------------------------------------------------
