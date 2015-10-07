#data = ['a','b','c']



#endata = list(enumerate(data) )
#print( endata)

#def positive(l):
#    result = []
#    for i in l:
#        if i> 0:
#            result.append(i)
#    return result
#print(positive([1,-3,2,0,-5,6]))


#dataset = [3,4,6,6,2,5,2,1,56,34,2,43]

#def evenNum(l):
#    return l%2==0

#print(list(filter(evenNum,dataset)))


#a = 3
#print(id(3))
#print(id(a))

#print(list(filter(lambda x:x%2==0,dataset)))

#a = dataset
#b = list(a)
#c = a

#print(id(a))
#print(id(b))
#print(id(c))

#print(list(map(lambda x:x+2, dataset)))

#print(eval(repr("hello world".upper())))
##print(eval(str("hello world".upper())))
#print(str("hello world".upper()))

#print(sorted(dataset)) #정렬되서 출력되지만, list 자체가 정렬되지는 않는다.
#print(dataset)
#dataset.sort()          #정렬이 되서 list에 저장된다.
#print(dataset)

#print(list(zip("abc", "def")))


testdata = {'홍길동':[80,70,60,92], '김길동':[24,35,18,10], '고길동':[10,20,8,5]}

for i in testdata:
    testdata[i].sort()

print(list(sorted(testdata.items())))