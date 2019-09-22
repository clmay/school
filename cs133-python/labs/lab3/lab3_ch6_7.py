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

#---chapter 6 problem 7--------------------------------------------------------

def is_even(n):
    if n % 2 == 0:
        print(True)
    elif n % 2 != 0:
        print(False) 

print("Please enter an integer.")
number = int(input("Integer: "))

print("\nIs",number,"even?")
is_even(number)

# In this problem I learned how to evaluate numbers for evenness using boolean
# expressions in Python.
