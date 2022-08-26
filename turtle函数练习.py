import turtle
import math
x=-100
y=-100
fd=200*math.sqrt(2)
turtle.color ("red")
turtle.pensize (3)
turtle.penup()
turtle.goto(x,y)
turtle.pendown ()
turtle.right(-135)
turtle.forward (fd)
turtle.right (45)
turtle.circle(-100,180)
turtle.right(180)
turtle.circle(-100,180)
turtle.right(45)
turtle.forward(fd)
