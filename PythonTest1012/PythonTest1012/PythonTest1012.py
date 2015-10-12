import os
import sys

#os.system("python Test.py a b c")
#print(sys.path)

#class Student:
#    def __init__(self,name,age):
#        self.name = name
#        self.age = age
#    def show(self):
#        print(self.name, " : ", self.age)

#student = Student("이동호", 23)
#student.show()

#import pickle

#f = open("test.txt", 'wb')
#pickle.dump(student, f)
#f.close()

#f=open("test.txt", 'rb')
#stu2 = pickle.load(f)
#stu2.show()
#f.close()

#print(os.environ)

#print(os.getcwd())
#os.chdir('..')
#print(os.getcwd())

#print(list(os.walk('..')))


#현재디렉토리에다 sample디렉토리를 만들고 하위디렉토리에 있던 파일 중 txt파일을 모두 sample디렉토리에 복사
import shutil

if os.path.exists('./sample')==0:
    os.mkdir('sample')

for (path, dir, files) in os.walk('.'):
    for filename in files:
        if filename[-3:]=='txt':
            shutil.copy(filename, './sample/'+filename)
        


#print(os.path.dirname('c:/python34/python.exe'))

print(os.path.expanduser('~'))