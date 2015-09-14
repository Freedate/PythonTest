import turtle
import random

turtlea = turtle.Turtle()

turtlea.shape("turtle")
str = "201111305 이동호 Python Turtle Test"

turtle.title(str);
turtlea.color("red")
turtlea.penup()
turtlea.forward(100)
turtlea.pendown()
turtlea.right(270)
turtlea.begin_fill()
turtlea.circle(100)
turtlea.end_fill()
#turtlea.penup()

#################################여기까지 과제 1-1

turtleb = turtle.Turtle()
turtleb.goto(0,0)
turtleb.color("green")
turtleb.shape("turtle")

turtlea.color("blue")
turtlea.circle(100)
turtlea.goto(0,0)

str2 = turtlea.distance(0,0)
print(str2)
while turtlea.distance(0,0)<=100 :
    turtlea.forward(10)
    turtleb.forward(10)

    if turtlea.distance(0,0)>100 :
        turtlea.backward(10)
        a = random.randint(90,270)
        turtlea.right(a)
    
    if turtleb.distance(0,0)>100:
        turtleb.backward(10)
        b = random.randint(90,270)
        turtleb.right(b)



#################################여기까지 과제 1-2



#################################여기까지 추가구현
