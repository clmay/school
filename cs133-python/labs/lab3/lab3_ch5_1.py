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

#---chapter 5 problem 1--------------------------------------------------------

import turtle

def drawSquare(t, n, sz):
    """Get turtle t to draw n squares of sz side"""
    
    for i in range(n):      # Do this five times:
        for i in range(4):      # Draw four times:
            t.forward(sz)           # Move forward
            t.left(90)              # Turn left 90 degress
        t.penup()               # Lift up the pen
        t.forward(40)           # Move over
        t.pendown()             # Start drawing again

wn = turtle.Screen()
wn.bgcolor("lightgreen")

alex = turtle.Turtle()
alex.color("pink")

drawSquare(alex, 5, 20)

wn.exitonclick()

# From this program I learned how to write a function with multiple iterative
# for-loops that could use a turtle to draw some number of squares (in the case
# of this problem, 5, of a certain size (20) offset by a distance. Particularly
# I learned the importance of paying attention to the details of the problem by
# making sure to offset the turtle's final position.
