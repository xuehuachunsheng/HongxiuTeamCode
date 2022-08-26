def draw(x,y,fd):
    turtle.goto(x,y)
    turtle.pendown()
    for i in range (4):
        turtle.forward(fd)
        turtle.right(90)
    turtle.penup()
import turtle
turtle.setup(500,350,325,175)
turtle.pencolor("red")
turtle.pensize(1)
square_x=-2
square_y=2
length=5
for k in range(18):
    draw(square_x,square_y,length)
    square_x-=5
    square_y+=5
    length+=10
