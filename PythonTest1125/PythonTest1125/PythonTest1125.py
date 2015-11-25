import numpy as np

data = np.array([[1,2,3],[4,5,6],[7,8,9]])

#print(data.ndim)
#print(data.shape)

#print(len(data))

#data = np.array([[1,2,3],[4,5,6],[7,8,9.]])

#print(data.ndim)
#print(data.shape)

#print(len(data))

#ones = np.ones((3,2))
#print(ones)
#print()

#zeros = np.zeros((3,2))
#print(zeros)
#print()

#eye = np.eye((3))
#print(eye)
#print()

#diag = np.diag(np.array([1,2,3,4]))
#print(diag)
#print()

#trans = data.T
#print(trans)
#print()

#print(np.arange(10))
#print()
#print(np.arange(10,1,-1))
#print()
#print(np.arange(10,1,-1)[:, np.newaxis])
#print()
#print(np.arange(2,8,dtype=np.float))
#print()
#print(np.arange(35).reshape(5,7))
#print()
#print(np.arange(35).reshape(7,5))
#print()
#print(np.linspace(1.,4.,6))
#print()
#print(np.linspace(1.,4.,6,endpoint=False))
#print()
#data = np.random.rand(4)
#print(data)
#print()
#data = np.random.randn(16).reshape(4,4)
#print(data)
#print()

#data = np.loadtxt('data.txt')
#print(data)
#print()
#print(data[0])
#print(data[-1])
#print()
#print(data[0:2])
#print()
#print(data[:2])
#print()
#print(data[1:8:2])
#print()
#print(data[::-1])
#print()
#print(data[2][0])
#print(data[3,0])
#print(data[1:4:2, ::3])
#print()

#x = np.arange(10,1,-1)
#print(x)
#print(x[np.array([3,3,1,8])])
#print(x[np.array([[1,1],[2,3]])])
#print()

#y = np.arange(35).reshape(5,7)
#print(y[np.array([0,2,4])])
#print()
#b = y>20
#print(y[b].reshape(14,1))


data = np.arange(36).reshape(6,6)
print(data)
print()

mask = np.array([1,0,1,0,0,1],dtype=bool)
print(data[mask,2])

mask1 = np.array([0,1,2,3,4])
mask2 = np.array([1,2,3,4,5])
print(data[mask1,mask2])
print()

mask3 = np.array([0,2,5])
print(data[3:,mask3])