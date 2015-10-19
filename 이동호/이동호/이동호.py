

class MidTest:
    
    import sys
    
   
    dic = {}

    def __init__(self, snum, sname):
        self.snum = snum
        self.sname = sname
    def question1(self) :
        a = self.snum
        b = self.sname
        print('1) 학번 : '+ a+', 이름 : '+b)

    def question2(self,dict1, cnt) :
        self.dic = dict1
        a = []
        count = cnt
        for iter in range(1,count):
            b = list(sorted(self.dic.values()))
            for i in self.dic:
                if self.dic.get(i)==b[-1]:
                    a.append(self.dic.popitem())
                    break

        print("2) "+str(a))
            

    def question3(self, filename):
        import os
        if os.path.exists('./score')==0:
            os.mkdir('score')
        with open(filename, 'wb+') as writeFile:
            for (path,dir,files) in os.walk('./source'):
                for filenames in files:
                    if filenames[-3:] == 'txt':
                        with open(path+dir+filenames, 'r') as myFile:
                            while True:
                                content = myFile.readline()
                                if not content : break
                                writeFile.write(content)
        print("3) " +filename+"생성이 완료되었습니다.")
    def question4(self):
        print('question4')

            
    def question5():
        import time
        a = time.strftime("%Y.%m.%d. %I:%M:%S",time.localtime())
        print("5) Current Time: "+a)
       
        
        


greenjoa = MidTest('a','a')

greenjoa.question3("question3.txt")

