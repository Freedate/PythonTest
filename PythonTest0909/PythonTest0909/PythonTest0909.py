#dic1 = {}
#dic2 = dict()
#dic = {'name':'pey','phone':'0119993323','birth':'1118'}
#a={1:'hi'}
#b={'a':[1,2,3]}


#print(dic1)
#print(dic2)
#print(dic)
#print(a)
#print(b)
#print(dic['name'])
#print(b['a'])

#a = {'name':'pey','phone':'0119993323','birth':'1118'} #dictionary
#b= a.keys() #key값을 반환
#print(b)

#b=list(a.keys())    #key값을 리스트로 저장
#print(b)

#a.clear()   #a를 지움
#print(a)

#a = {'name':'pey','phone':'0119993323','birth':'1118'}
#b= a.values()   #value값을 반환
#print(b)

#b=list(a.values())  #value값을 리스트로 저장
#print(b)

#b = a.items() #tuple로 묶은 값을 반환
#print(b)

#print(a.get('name'))
#print(a.get('foo','bar'))

#movie={'홍길동':{'베테랑':5.0, '암살':4.5, '뷰티인사이드':3.8}, '이동호':{'베테랑':0.0, '암살':1.5, '뷰티인사이드':0.0}}

#a = movie.get('홍길동') #해당 key의 value를 반환
#print(a)

#a = movie.get('이동호').get('베테랑') #해당 key의 value 중 해당 key의 value를 반환
#print(a)



#answer=input("Would you like express shipping?")
#if answer.upper()=='YES':
#    print("That will be an extra $10")
#elif answer.upper()=='NO':
#    print("Okay")
#else:
#    print("Please answer.")



#a= [(1,2),(3,4),(5,6)]
#for(first,last) in a:
#    print(first+last)


#for i in range(1,10):
#    for j in range(1,10):
#        print('{0:2d} * {1:2d} = {2:3d}'.format(i,j,i*j))
#    print('')

#for i in range(1,10):
#    for j in range(1,10):
#        print('%2d * %2d = %3d' %(i,j,i*j))
#    print('')


import turtle
#for steps in range(4):
#    turtle.forward(100)
#    turtle.right(90)
#    for moresteps in range(4):
#        turtle.forward(50)
#        turtle.right(90)

#nSides = 5
#for steps in range(nSides):
#    turtle.forward(100)
#    turtle.right(360/nSides)

#    for moresteps in range(nSides):
#        turtle.forward(50)
#        turtle.right(360/nSides)



#for steps in ['red', 'blue', 'green', 'black']:
#    turtle.color(steps)
#    turtle.forward(100)
#    turtle.right(90)

#prompt = """
#1. Add
#2. Del
#3. List
#4. Quit

#Enter number : """
#number=0
#while number !=4:
#    print(prompt, end="")
#    number = int(input())