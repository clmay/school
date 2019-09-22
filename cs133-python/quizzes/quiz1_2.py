""""
Write syntactically correct Python code to complete each of the following:
use the function is_prime that you wrote in lab 4
a composite number is a number that is NOT prime.  Write a function called is_composite.  The function should take an integer as it's parameter and should return true if the number is composite and false if it not.
test your function with both prime and composite numbers
use any of the problems you wrote in lab 4 that creates a chart
write a program that asks the user to enter an integer.  The program should then print a chart beginning at 2 and continuing up to (and including) the number entered by the user.  It should print each number and a message that states whether or not the number is composite.
This problem is worth 15 points.
"""

def isComposite(n):
    """Test n for any factors, return True if number has no factors (is prime)"""
    
    n = abs(int(n))
    if n < 2:
        return False # Zero and 1 are not prime.

    for i in range(2, n):
        if n % i == 0:
            return True
    return False

somenum = int(input("Check if is composite: "))

if isComposite(somenum):
    print(somenum,"is composite.")
else:
    print(somenum,"is not composite.")
