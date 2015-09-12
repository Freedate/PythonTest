import turtle
import random

turtle.shape("turtle")

str = "201111305 이동호 Python Turtle Test"
turtle.title(str);

turtle.color("red")

turtle.forward(100)
turtle.right(270)

turtle.begin_fill()
turtle.circle(100)
turtle.end_fill()


turtle.circle(100)

turtle.goto(0,0)
turtle.color("yellow")

str2 = turtle.distance(0,0)
print(str2)

while turtle.distance(0,0)<=100 :
    turtle.forward(1)
    if turtle.distance(0,0)>100 :
        turtle.backward(1)
        a = random.randint(90,270)
        turtle.right(a)
        


turtle.exitonclick()