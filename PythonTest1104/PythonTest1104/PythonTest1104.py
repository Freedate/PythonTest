import sqlite3
con = sqlite3.connect("test.db")
#con = sqlite3.connect(":memory:")
cur = con.cursor()
dropsql ='''drop table if exists phonebook'''
createsql = '''create table
phonebook(name text, phoneNum text);'''
cur.execute(dropsql)
cur.execute(createsql)



cur.execute("drop table if exists userTable;")
cur.execute("create table userTable(name text, age int);")
data = (('이동호',23),('김진솔',25),('이상민',24))
insertsql = '''insert into userTable values(?,?);'''
cur.executemany(insertsql,data)
cur.execute("select * from userTable order by age desc;")

print(cur.fetchone())

class Average:
    def __init__(self):
        self.sum = 0
        self.cnt = 0
    def step(self, value):
        self.sum += value
        self.cnt +=1
    def finalize(self):
        return self.sum/self.cnt
con.create_aggregate("abg",1,Average)
cur.execute("select avg(Age) from userTable;")

print(cur.fetchall())


##############     data를 삽입하는 여러가지 방법

##1)
#insertsql = '''insert into phonebook
#values('greenjoa1','010-1111-1111');'''
#cur.execute(insertsql)
##insertsql = '''insert into phonebook
##values('freeday','010-5604-8101');'''
##cur.execute(insertsql)

##2)
#name = 'GREENJOA2'
#phoneNumber = '010-2222-2222'
#insertsql = '''insert into phonebook values(?,?);'''
#cur.execute(insertsql,(name,phoneNumber))

##3)
#name = 'GREENJOA3'
#phoneNumber = '010-3333-3333'
#insertsql = '''insert into phonebook values(:inputName, :inputNum);'''
#cur.execute(insertsql,{"inputNum":phoneNumber, "inputName":name})

##4)
#insertsql = '''insert into phonebook values(?,?);'''
#datalist = (('greenjoa4', '010-4444-4444'),('GREENJOA5','010-5555-5555'))
#cur.executemany(insertsql,datalist)

##5)
#def dataGenerator():
#    datalist=(('greenjoa6','010-6666-6666'),('GREENJOA7','010-7777-7777'))
#    for item in datalist:
#        yield item
#cur.executemany(insertsql, dataGenerator())

con.isolation_level = None

##############################################################


############## 레코드 정렬 방식
##1)
#def OrderFunc(str1, str2):
#    s1 = str1.upper()
#    s2 = str2.upper()
#    return (s1>s2)-(s1<s2)
#con.create_collation('myordering',OrderFunc)

##2)
#selectmyorder = '''select * from phoneBook order by name collate myordering;'''

##3)
#selectsql = '''select * from phonebook'''

##4)
#selectorder = '''select * from phoneBook order by name;'''

##############################################################
#cur.execute("insert into phonebook(phoneNum) values('010-9999-9999');")
#cur.execute("select count(*) from phoneBook;")
#print(cur.fetchone()[0])
#cur.execute("select count(name) from phoneBook;")
#print(cur.fetchone()[0])
#cur.execute("select count(phoneNum) from phoneBook;")
#print(cur.fetchone()[0])
#cur.execute(selectmyorder)
#for row in cur:
#    print(row)
#    print(row[0])
#print(cur.fetchone())
#print(cur.fetchmany(2))
#print(cur.fetchall())


