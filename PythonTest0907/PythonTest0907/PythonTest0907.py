a=[]
b=[1,2,3]
c=['Life','is','too','short']
d=[1,2,'Life','is']
e=[1,2,['Life','is']]

#print(e[2][0:])

data=['a','b','c',['안녕','efg']]
#print(data[0])
#print(data[-1][1])

#f = b+c
#print(f)

#x= b*3
#print(x)

#guests=['a','b','c','d']

#guests[0]='greenjoa'
#print(guests)

#guests[1]=['greenjoa1','greenjoa2'] #1번 인덱스가 리스트로 바뀜
#print(guests)

#guests[1:2]=['greenjoa1','greenjoa2'] #1~2번 인덱스의 값이 각각 바뀜
#print(guests)


#guests.insert(2,'e') #2번 인덱스에 'e' 삽입
#print(guests)

#guests.append('greenjoa2') #마지막에 추가됨
#print(guests)

#guests.remove('c') #'c'값을 지움
#print(guests)

#guests[1:2]=[] #1~2번 인덱스 값을 지움
#print(guests)

#del guests[0] #0번 인덱스를 지움
#print(guests)

#print(guests.index('e'))

#id=['greenjoa1','greenjoa2','greenjoa3']
#id.insert(id.index('greenjoa1')+1,'pw1')
#id.insert(id.index('greenjoa2')+1,'pw2')
#id.insert(id.index('greenjoa3')+1,'pw3')
#print(id)



##steps : 인덱스
##len(list) : 길이
#for steps in range(len(id)):
#    print(id[steps])

#for steps in range(4):
#    print(id[steps])

#id.sort()
#print(id)

#id.reverse()
#print(id)

#id.sort()

#top3=id[0:3]
#top3.reverse()
#print(top3)

for steps in data:
    if isinstance(steps,list):
        for step in steps :
            print(step)
    else :
        print(steps)


scores = [85,62,63,45,90]
#num=scores.pop()
#num=scores.pop(2)
#print(num)

#num=scores.count(63)
#print(num)

print(scores)
scores.extend([50])
print(scores)
scores.append([50,60])
print(scores)



t1 = ()
t2 = (1,)
t3 = (1,2,3)
t4 = 1,2,3
t5 = ('a','b',('ab','cd'))

print(t1)
print(t2)
print(t3)
print(t4)
print(t5)