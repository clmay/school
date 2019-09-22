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

#---chapter 6 problem 4--------------------------------------------------------

import turtle

def drawBar(t, height, color):
    """ Get turtle t to draw one bar, of height. """
    t.fillcolor(color)
    t.begin_fill()               # start filling this shape
    t.left(90)
    t.forward(height)
    t.write('  '+ str(height))
    t.right(90)
    t.forward(40)
    t.right(90)
    t.forward(height)
    t.left(90)
    t.end_fill()                 # stop filling this shape



xs = [48,117,200,240,160,260,220]  # here is the data
maxheight = max(xs)
numbars = len(xs)
border = 10

tess = turtle.Turtle()           # create tess and set some attributes
tess.pensize(3)

wn = turtle.Screen()             # Set up the window and its attributes
wn.bgcolor("lightgreen")
wn.setworldcoordinates(0-border,0-border,40*numbars+border,maxheight+border)


for a in xs:
    if a >= 200:
        drawBar(tess, a, "red")
    elif a >= 100:
        drawBar(tess, a, "yellow")
    else:
        drawBar(tess, a, "green")

wn.exitonclick()

# This problem practiced my ability to set conditional statements with Boolean
# logic in Python. I also implemented the conditionals within a loop.
