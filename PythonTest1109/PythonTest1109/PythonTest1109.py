import sqlite3
from werkzeug import check_password_hash, generate_password_hash

def init_db():
    db = sqlite3.connect("test.db")
    with open('schema.sql') as f:
        db.cursor().executescript(f.read())
        db.commit()


def get_db():
    db = sqlite3.connect("test.db")
    return db


def register():
    print("**** 회원 가입 ****\n")
    print("user id : ", end="")
    userid = input()
    db = get_db()
    cur = db.cursor()
    cur.execute("select * from user where userid=?",[userid])
    if(cur.fetchone() != None):
        print("This ID is Already exists")
        return

    print("user name : ", end="")
    username = input()
    print("user passwd : ", end="")
    userpw = input()
    pw = generate_password_hash(userpw)

    sql = "insert into user(userid, username, userpw) values(?,?,?)"
    cur.execute(sql, [userid, username, pw])
    cur.execute("select * from user;")

    db.commit()
    db.close()

def login():
    print("**** 로그인 ****\n")
    print("user id : ", end="")
    userid = input()
    print("user passwd : ", end="")
    userpw = input()
    db = get_db()
    cur = db.cursor()
    cur.execute("select * from user where userid=?",[userid])
    temp = cur.fetchone()
    if(temp==None):
        print("아이디가 존재하지 않습니다")
        return
    elif check_password_hash(temp[3], userpw):
        print("로그인 성공")
        return
    else:
        print("비밀번호 체크요함")
        return


login()
