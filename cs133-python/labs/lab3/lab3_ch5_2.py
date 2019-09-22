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

#---chapter 5 problem 2--------------------------------------------------------

import turtle

def drawConSquarez(t, n, sz, grow):
    """
    Get turtle t to draw n concentric squares offset by grow, starting with
    a square of sz sides.
    """
    
    for i in range(n):      # Repeat n times:
        for i in range(4):      # Draw square by repeating four times:
            t.forward(sz)           # Moving forward sz amount
            t.left(90)              # Turning left 90 degrees
        t.penup()               # Lift up the pen
        offset = grow / 2       # Set the amount to offset next square
        for i in range(2):      # Repeat the following actions
            t.right(90)             # Turn 90 degrees to the right
            t.forward(offset)       # Go forward offset distance
        t.right(180)            # Turn around (return to west)
        t.pendown()             # Start drawing again
        sz = sz + grow          # Resize by grow units

wn = turtle.Screen()
wn.bgcolor("lightgreen")

alex = turtle.Turtle()
alex.color("pink")

drawConSquarez(alex, 5, 20, 20)

wn.exitonclick()

# With this exercise I learned that ranges do not start at zero.
