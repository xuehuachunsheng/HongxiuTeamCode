import turtle
import math
def draw(x,y,fd):
    turtle.penup()
    turtle.goto(x,y)
    turtle.pendown()
    for i in range(6):
        turtle.forward(fd)
        turtle.right(-60)
    turtle.penup()
x=25
y=25
fd=2
for i in range(30):
    draw(x,y,fd)
    x-=2
    y-=math.sqrt(3)*2
    fd+=4
