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

#---chapter 6 problem 10-------------------------------------------------------

def is_rightangled(x, y, z):
    if x**2 + y**2 == z**2:
        print("The triangle you entered is a right triangle\n")
    elif x**2 + z**2 == y**2:
        print("The triangle you entered is a right triangle\n")
    elif y**2 + z**2 == x**2:
        print("The triangle you entered is a right triangle\n")
    else:
        print("Sorry, but that is not a triangle with a right angle.\n")

s1 = float(input("Please enter the length of the first side: "))
s2 = float(input("Please enter the length of the second side: "))
s3 = float(input("Please enter the length of the third side: "))

is_rightangled(s1, s2, s3)

# In this problem I learned to use boolean expression coupled with a little
# logic about triangles to evaluate whether any inputted triangle is a right
# triangle or not. Unfortunately, I did not have the time to add a first
# expression to the evaluation function to make sure that the given side
# lengths could actually make a triangle.
