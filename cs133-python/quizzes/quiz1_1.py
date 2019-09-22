"""
Write syntactically correct Python code to complete each of the following:
use the turtle module draw an equilateral triangle, a square, a regular hexagon and a regular octagon on the screen. HINT: the turn is somehow related to 360 degrees and the number of sides. (2 points)
modify the code you wrote in each of the previous problems to create the polygon using a for loop (2 points)
modify the code you wrote in the previous problem to draw a filled polygon (2 points)
modify the code you wrote in the previous problem to include a function called draw_poly. The function should take 3 parameters, a turtle, the size of the polygon and the number of sides in the polygon. Draw each of the polygons using your function. (3 points)
modify the code you wrote in the previous problem to draw polygons with 4 or fewer sides in red, polygons with 8 or fewer sides in yellow and polygons with lots of sides in blue. Test your code in a reasonable way. (3 points)
Use the code you wrote in the previous problems to draw different colored polygons on the screen in an "interesting pattern". (3 points)
This problem is worth a total of 15 points.
"""

import turtle

def drawTri(t, sz):
    """Draw an equilateral triangle"""
    
    t.forward(sz)
    t.left(120)
    t.forward(sz)
    t.left(120)
    t.forward(sz)
    t.left(120)

def drawSq(t, sz):
    """Draw a square"""
    
    t.forward(sz)
    t.left(90)
    t.forward(sz)
    t.left(90)
    t.forward(sz)
    t.left(90)
    t.forward(sz)
    t.left(90)

def drawHex(t, sz):
    """Draw a regular hexagon"""
    
    t.forward(sz)
    t.left(60)
    t.forward(sz)
    t.left(60)
    t.forward(sz)
    t.left(60)
    t.forward(sz)
    t.left(60)
    t.forward(sz)
    t.left(60)
    t.forward(sz)
    t.left(60)

def drawOcto(t, sz):
    """Draw a regular octogon"""
    
    t.forward(sz)
    t.left(45)
    t.forward(sz)
    t.left(45)
    t.forward(sz)
    t.left(45)
    t.forward(sz)
    t.left(45)
    t.forward(sz)
    t.left(45)
    t.forward(sz)
    t.left(45)
    t.forward(sz)
    t.left(45)
    t.forward(sz)
    t.left(45)

def loopTri(t, sz):
    """Draw an equilateral triangle using a loop"""
    
    for i in range(3):
        t.forward(sz)
        t.left(120)

def loopSq(t, sz):
    """Draw a square using a loop"""
    
    for i in range(4):
        t.forward(sz)
        t.left(90)

def loopHex(t, sz):
    """Draw a regular hexagon using a loop"""
    
    for i in range(6):
        t.forward(sz)
        t.left(60)

def loopOcto(t, sz):
    """Draw a regular octogon using a loop"""
    
    for i in range(8):
        t.forward(sz)
        t.left(45)

def fillTri(t, sz, c):
    """Draw a filled equilateral triangle using a loop"""

    t.fillcolor(c)
    t.begin_fill()
    
    for i in range(3):
        t.forward(sz)
        t.left(120)

    t.end_fill()

def fillSq(t, sz, c):
    """Draw a filled square using a loop"""
    
    t.fillcolor(c)
    t.begin_fill()
    
    for i in range(4):
        t.forward(sz)
        t.left(90)
    
    t.end_fill()

def fillHex(t, sz, c):
    """Draw a filled regular hexagon using a loop"""
    
    t.fillcolor(c)
    t.begin_fill()
    
    for i in range(6):
        t.forward(sz)
        t.left(60)
    t.end_fill()

def fillOcto(t, sz, c):
    """Draw a filled regular octogon using a loop"""

    t.fillcolor(c)
    t.begin_fill()
    
    for i in range(8):
        t.forward(sz)
        t.left(45)
    t.end_fill()

def drawPoly(t, sz, n):
    """Draw a polygon of sz side length, with n sides, and color c"""
    
    for i in range(n):
        t.forward(sz)
        t.left(360/n)

def colorPoly(t, sz, n):
    """Draw a polygon of sz side length, with n sides, and color c"""
    
    if n <= 4:
        t.fillcolor("red")
    elif n <= 8:
        t.fillcolor("yellow")
    else:
        t.fillcolor("blue")
    
    t.begin_fill()
    
    for i in range(n):
        t.forward(sz)
        t.left(360/n)
    t.end_fill()

def interesting(t):
    """Draw an interesting set of polygons"""
    
    # Draw a square
    # Move to the 1/4 of the top edge
    # Draw another square 1/2 the size
    # Repeat
    
    size = 300

    for i in range(10):
        t.begin_fill()
        for i in range(4):
            t.forward(size)
            t.left(90)
        if i % 2 == 0:
            t.fillcolor("red")
            t.right(90)
        else:
            t.fillcolor("yellow")
            t.forward(size)
            t.left(90)
            t.forward(size)
        t.end_fill()
        size = size / 2

kurt = turtle.Turtle()
wn = turtle.Screen()

size = int(input("Draw 'em? Enter the side length: "))

drawTri(kurt, size)
drawSq(kurt, size)
drawHex(kurt, size)
drawOcto(kurt,size)

wn.exitonclick()
kurt = turtle.Turtle()
wn = turtle.Screen()

size = int(input("Draw 'em with loops? Enter the side length: "))

loopTri(kurt, size)
loopSq(kurt, size)
loopHex(kurt, size)
loopOcto(kurt, size)

wn.exitonclick()
kurt = turtle.Turtle()
wn = turtle.Screen()

size = int(input("Draw 'em with fill? Enter the side length: "))

fillOcto(kurt, size, "yellow")
fillHex(kurt, size, "green")
fillSq(kurt, size, "red")
fillTri(kurt, size, "blue")

wn.exitonclick()
kurt = turtle.Turtle()
wn = turtle.Screen()

size = int(input("Draw any polygon? Enter the side length: "))
sides = int(input("How many sides should it have? "))

drawPoly(kurt, size, sides)

wn.exitonclick()
kurt = turtle.Turtle()
wn = turtle.Screen()

size = int(input("Draw 'em with one function? Enter the side length: "))

drawPoly(kurt, size, 3)
drawPoly(kurt, size, 4)
drawPoly(kurt, size, 6)
drawPoly(kurt, size, 8)

wn.exitonclick()
kurt = turtle.Turtle()
wn = turtle.Screen()

size = int(input("Draw it with color coding? Enter the side length: "))
sides = int(input("How many sides should it have? "))

colorPoly(kurt, size, sides)

wn.exitonclick()
kurt = turtle.Turtle()
wn = turtle.Screen()

size = int(input("Test the color coding? Enter the side length: "))

colorPoly(kurt, size, 11)
colorPoly(kurt, size, 9)
colorPoly(kurt, size, 8)
colorPoly(kurt, size, 5)
colorPoly(kurt, size, 4)
colorPoly(kurt, size, 3)

wn.exitonclick()
kurt = turtle.Turtle()
wn = turtle.Screen()

kurt.penup()
kurt.back(200)
kurt.right(90)
kurt.forward(200)
kurt.left(90)
kurt.pendown()

print("Do something interesting? How about some psychedelic pseudo-fractals?")
interesting(kurt)
wn.exitonclick()
