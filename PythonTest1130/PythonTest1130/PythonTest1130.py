import numpy as np

#list = [1,2,3]

#print(list)

#print(list*2)

#print()
#data = np.array([[1,2,3],[4,5,6],[7,8,9]])

#print(data)
#print()
#print(data*2)
#print()
#print(data+2)
#print()
#print(data-2)
#print()
#print(data/3)
#print()
#print(data*data)
#print()
#print(data**2)
#print()
#print(data.dot(data))
#print()

#a = np.array([1,2,3,4])
#b = np.array([4,2,2,4])
#c = np.array([1,2,3,4])
#print(a==b)
#print(a>b)
#print()

#print(np.array_equal(a,b))
#print(np.array_equal(a,c))

#a = np.array([1,1,0,0], dtype=bool)
#b = np.array([1,0,1,0], dtype=bool)
#print(np.logical_or(a,b))
#print(np.logical_and(a,b))
#print(np.all([True, True, False]))
#print(np.any([True, True, False]))

#a=np.arange(5)
#print(a)
#print(np.sin(a))
#print(np.log(a))
#print(np.exp(a))    

#a = np.triu(np.ones((3,3)),1)
#print(a)
#print()
#print(a.T)

#x = np.array([1,2,3,4])
#print(np.sum(x))
#print(x.sum())

#x = np.array([[1,1,],[2,2]])
#print(x)
#print()
#print(x.sum(axis=0))
#print(x.sum(axis=1))
#print()
#print(x[0, :].sum())
#print(x[1, :].sum())

#x = np.array([1,3,2])
#print(x.min())
#print(x.max())
#print()
#print(x.argmin())
#print(x.argmax())

#a = np.zeros((100,100))
#print(a)
#print(np.any(a!=0))
#print(np.all(a==a))

#x = np.array([1, 2, 3, 1])
#y = np.array([[1, 2, 3], [5, 6, 1]])
#print(x.mean())
#print(np.median(x))
#print(np.median(y,axis=-1))
#print(x.std())

from matplotlib import pyplot as plt

#data = np.loadtxt('data.txt')
#year, hares, lynxes, carrots = data.T
#plt.plot(year, hares, year, lynxes, year, carrots)
#plt.show()

#mean = np.mean(data, axis=0)
#std = np.std(data,axis=0)
#max = np.max(data,axis=0)
#print()

#print("산토끼 평균 : %s" % mean[1])
#print("스라소니 평균 : %s" % mean[2])
#print("당근 평균 : %s" % mean[3])
#print()

#print("산토끼 최대 : %s" % max[1])
#print(": %s년" % year[hares.argmax()])
#print("스라소니 최대 : %s" % max[2])
#print(": %s년" % year[lynxes.argmax()])
#print("당근 최대 : %s" % max[3])
#print(": %s년" % year[carrots.argmax()])
#print()


a = np.array([0,1,2,3,4,5])
b = np.array([[0,10,20,30,40,50]]).T
