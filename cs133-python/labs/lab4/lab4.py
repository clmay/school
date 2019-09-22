#----Lab 4---------------------------------------------------------------------
# chapter 7 problem 2 - Write a function triNumber. The function should take an
# integer,n, which represents the number in the sequence you want to calculate
# as it's parameter and should return the "nth" triangular number. Write a
# program that asks the user how many triangular numbers to print and then
# prints an attractively formatted table like the one illustrated in your text.
# 
# chapter 7 problem 3 - Write a function isPrime. The function should take an
# integer,n, which represents the number you want to check for "primeness" and
# should return true or false. Write a program that asks the usesr how many
# numbers to check for primeness and then prints an attractively formatted
# table that lists each number between 1 and the number entered by the user
# and whether or not that number is prime.
#
# chapter 7 problem 4 - Write a function countDigits. The function should take
# an integer, n, which represents the number for which you want to count digits
# and should return an integer representing the number of digits in the number.
# Write a program that asks the user to enter a number and prints out the
# number of digits in the number. The program should then ask the user to if
# he/she wants to enter another number and should allow him/her to answer 1
# to continue and 0 to stop. If the user enters a 1, the process should repeat.
# 
# chapter 7 problem 6 or 7
# chapter 7 problem 10 or 12
#------------------------------------------------------------------------------

# chapter 7 exercise 2

def triNumber(n):
    """Recursively calculate the nth triangular number"""
    
    num = 0
    for i in range(n+1):
        num = num + i
    return num

somenum = int(input("To which triangular number shall I count and print a list? "))

print("n'th",'\t',"triangular number")
print("----",'\t',"-----------------")
for i in range(somenum+1):
    print(i,'\t',triNumber(i))
print("\n")

# chapter 7 exercise 3

def isPrime(n):
    """Test n for any factors, return True if number has no factors (is prime)"""
    
    n = abs(int(n))
    if n < 2:
        return False # Zero and 1 are not prime.

    for i in range(2, n):
        if n % i == 0:
            return False
    return True

somenum = int(input("Check the prime-ness of: "))

if isPrime(somenum):
    print(somenum,"is prime!\n")
else:
    print(somenum,"is not prime.\n")
# chapter 7 exercise 4

def countDigits(n):
    """Count the number of digits in a given number "n". """
    
    num = len(str(abs(n)))
    return num

num_to_count = int(input("Count the digits of: "))
print("There are",countDigits(num_to_count),"digits in the number",num_to_count,"\n")

# chapter 7 exercise 7

import cImage as image

def noRed(img):
    """Remove all the red values from an image"""
    
    img = image.Image(img)
    newimg = image.EmptyImage(img.getWidth(), img.getHeight())
    win = image.ImageWin()

    for col in range(img.getWidth()):
        for row in range(img.getHeight()):
            p = img.getPixel(col, row)
            
            noR = 0
            g = p.getGreen()
            b = p. getBlue()
            
            newp = image.Pixel(noR, g, b)
            newimg.setPixel(col, row, newp)
    
    newimg.draw(win)
    win.exitonclick()

pic = str(input("Please type the name of an image (i.e. 'color.gif'): "))

noRed(pic)

# chapter 7 exercise 10

import cImage as image

def sepiaTone(img):
    """Convert image to sepia tone"""
    
    img = image.Image(img)
    newimg = image.EmptyImage(img.getWidth(), img.getHeight())
    win = image.ImageWin()

    for col in range(img.getWidth()):
        for row in range(img.getHeight()):
            p = img.getPixel(col, row)
            
            r = p.getRed()
            g = p.getGreen()
            b = p.getBlue()
            
            newR = int(r * 0.393 + g * 0.769 + b * 0.189)
            newG = int(r * 0.349 + g * 0.686 + b * 0.168)
            newB = int(r * 0.272 + g * 0.534 + b * 0.131)
             
            newp = image.Pixel(newR, newG, newB)
            newimg.setPixel(col, row, newp)
    
    newimg.draw(win)
    win.exitonclick()

pic = str(input("Please type the name of an image (i.e. 'color.gif'): "))

sepiaTone(pic)
