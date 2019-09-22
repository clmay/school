# best practice for code structure:
# import first
# then define functions
# then main logic

import turtle

def drawSquare(turt, size, increase):
    for i in range(3):      # Repeat following steps three times
        for i in range(4):      # Repeat following steps four times
            turt.forward(size)      # Draw a side
            turt.right(90)          # Turn right 90 degrees
        size = size + increase  # Increase size by 'increase' for next square

# Create a screen and a turtle
wn = turtle.Screen()
kurt = turtle.Turtle()

# Ask the user for the parameters of the function (but not 'turt')
sq_side = int(input("How big would you like the first square to be? "))
next_sq = int(input("How much bigger would you like successive squares to be? "))

# Call the function to draw a square
drawSquare(kurt, sq_side, next_sq)

# Keep the window open until it's closed by user
wn.exitonclick()
