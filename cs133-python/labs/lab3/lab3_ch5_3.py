#---Lab 3----------------------------------------------------------------------
# The objective of this lab is to introduce you to functions and selection or
# conditional statements in Python.

# Complete the following exercises from chapters 5 (Functions) and 6
# (Selection) of your text with a classmate. Experiment with each problem
# until you and your partner understand the concept presented in the problem.

# Document the completion of each problem by:
# * providing your source code and output from your program
# * writing a sentence or two describing what you learned from completing the
#   problem
# * uploading the file that contains your documentation in moodle.  Each
#   student must submit a copy of the file.

# Complete each of the following problems.  Your solution to the problems in
# both chapters must involve writing a function definition and program that
# calls that function to produce the desired results:

#---chapter 5 problem 3--------------------------------------------------------

import turtle

def drawPoly(someturtle, somesides, somesize):
    """ Draw a regular polygon of somesides and somesize with someturtle"""
    
    for i in range(somesides):          # Draw this many sides
        someturtle.forward(somesize)        # Go forward the side length
        someturtle.left(360 / somesides)    # Turn exterior angle of polygon

wn = turtle.Screen()
wn.bgcolor("lightgreen")

tess = turtle.Turtle()
tess.color("pink")

drawPoly(tess, 8, 50)

wn.exitonclick()

# Pretty easy problem. Just had to remember formula for exterior angle of
# n-gon: 360/n. 
