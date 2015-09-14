#def printMessage():             #printMessage 함수 정의
#    print("Hello World!")
#    return

#def main():                     #main 함수 정의
#    printMessage()
#    return

#main()                          #main 함수 실행

#################################################################################

#def sum_mul(choice, *args):     #choice(연산내용)에 따라 args값(여러개의 인자가 들어오든 tuple로 받아준다)을 계산한다.
#    if choice == 'sum':
#        result = 0
#        for i in args:
#            result = result + i
#    elif choice == 'mul':
#        result  = 1
#        for i in args:
#            result = result*i
#    return result

#result = sum_mul('sum',1,2,3,4,5)

#print(result)

#################################################################################

#def main():
#    #names = getNames()
#    printNames(getNames())                              #함수는 다른 함수의 인자로 넣어줄 수 있다.
#    return

#def getNames():
#    names = ["greenjoa1","greenjoa2","greenjoa3"]
#    newName = input("Enter last guest : ")
#    names.append(newName)
#    return names

#def printNames(names):
#    for name in names:
#        print(name)
#    return

#main()

#################################################################################


#def sum_and_mul(a,b):
#    return a+b, a*b                 

#answer = sum_and_mul(10,30)         #각 리턴값을 tuple로 반환함
#print(answer)

#sum, mul = sum_and_mul(10,30)       #각 리턴값을 각각 다른 변수에 저장할 수 있다.
#print(sum)
#print(mul)

#################################################################################



#def say_myself(name, old, man=True):        #인자 초기값을 설정할 수 있다.
#    print("나의 이름은 %s 입니다." % name)
#    print("나이는 %d살 입니다." %old)
#    if man:
#        print("남자입니다")
#    else:
#        print("여자입니다")

#say_myself("greenjoa",23)
#say_myself("greenjoa",23,False)

#################################################################################

#a=1
#def vartest(a):             #매개변수는 지역변수
#    a=a+1

#vartest(a)
#print(a)


#a=1
#def vartest(a):                #리턴값을 받아주는것은 가능
#    a=a+1
#    return a

#a = vartest(a)
#print(a)


#a=1
#def vartest():                 #전역변수로 받아올 수도 있다
#    global a
#    a=a+1

#vartest()
#print(a)

#################################################################################


   
#import printMovie           #import 모듈
#from printMovie import printItem    #namespace 지정


#movie=["홍길동",["암살",["하정우"],"베테랑",["유아인"]],"고길동",["암살"],"피카츄",["포켓몬스터"]]
##printMovie(movie)
#printItem(movie)



#################################################################################

#import os

#print(os.getcwd())
##os.mkdir("sample")
#os.chdir("./sample")
##os.system("setup.py sdist")
#os.system("setup.py install")