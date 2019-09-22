base = float(input("Base: "))
height = float(input("Height: "))

def area_of_triangle(base,height):
    area = base * height
	area = area / 2
    return area

def area_of_square(side):
    area = side ** 2
    return area

user_result = area_of_triangle(base,height)
fixed_result = area_of_triangle(12,10)

print("User: ",user_result,"\n Fixed: ",fixed_result)
