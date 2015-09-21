#class Service:
#    secret="영구는 배꼽이 두개다."
#    def sum(self,a,b):
#        result = a+b
#        print("%s + %s = %s 입니다." %(a,b,result))

#pey = Service()
#print(pey.secret)

#pey.sum(1,1)
#Service.sum(pey,1,1)
##위의 두줄은 같은 의미를 가진다


#class Movie :
#    title = ""
#    director = ""
#    def __init__(self,title, director):
#        self.title = title
#        self.director = director
#    def showinfo(self):
#        print(self.title + " " + self.director)

#movie1 = Movie("제목1", "감독1")
#movie2 = Movie("제목2", "감독2")
#movie1.showinfo()
#movie2.showinfo()
#movie1.actor = "주인공1"
#print(movie1.actor)
##print(movie2.actor)    # AttrubuteError 발생


class Movie :  
    ''' 영화 클래스 입니다.'''             #클래스에 주석을 달아줌
    count = 0
    title = "어바웃타임"
    director = "리처드 커티스"
    def __init__(self,title, director):
        self.title = title
        self.director = director
        Movie.count+=1
        print(self.title + "생성자 호출")

    def __del__(self):
        print(self.title + "소멸자 호출")

    def showinfo(self):
        print(self.title + " " + self.director)

    @staticmethod
    def showcnt1():
        print(Movie.count)

    @classmethod
    def showcnt2(cls):
        print(cls.count)

#m1 = Movie("베테랑", "류승완")
#print(m1.title)
#print(Movie.title)

#m1.__class__.title = "헝거게임"         #클래스의 정보를 변경
#print(m1.title)
#print(Movie.title)

#print(m1.__doc__)                      #클래스의 주석을 출력함


m1 = Movie("베테랑1", "류승완1")
m2 = Movie("베테랑2", "류승완2")
#m3 = Movie("베테랑3", "류승완3")
#m4 = Movie("베테랑4", "류승완4")
#print(type(m4))
#print(id(m4))
#print(id(m3))
#m4 = m3                                 #참조형 변수이기 때문에 얕은복사가 된다.
#print(id(m4))
#print(id(m3))
#m4.showinfo()

Movie.showcnt1()
Movie.showcnt2()