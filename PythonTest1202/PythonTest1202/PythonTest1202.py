import numpy as np
from matplotlib import pyplot as plt

#mileposts = np.array([0,198,303,736,871,1175,1475,1544,1913,2448])
#distance_array = np.abs(mileposts - mileposts[:,np.newaxis])

#print(mileposts[:,np.newaxis])
#print()
#print(distance_array)
#print()

#x,y = np.arange(5), np.arange(5)[:,np.newaxis]
#print(x,y)
#print()
#x,y = np.ogrid[0:5, 0:5]
#print(x,y)
#print()
#x,y = np.mgrid[0:5,0:5]
#print(x,y)
#print()

#x = np.arange(5)
#y = np.arange(5)[:,np.newaxis]
#xysum = x+y
#print(xysum)

#distance = np.sqrt(x**2 + y**2)
#print(distance)

#plt.pcolor(distance)
#plt.colorbar()
#plt.show()

#a = np.array([[1,2,3],[4,5,6]])
#print(a.ravel())
#print(a.T)
#print(a.T.ravel())

#a.shape
#print(a)
#b = a.ravel()
#print(b)
#b = b.reshape((2,3))
#print(b)
#b = b.reshape((2,-1))
#print(b)

#z = np.array([1,2,3])
#print(z[:,np.newaxis])
#print(z[np.newaxis,:])

#a = np.arange(4)
#print(a)
#a.resize((8,))
#print(a)

#a = np.array([[4,3,5],[1,2,1]])
#print(a)
#print()
#b = np.sort(a, axis=1)
#a.sort(axis=1)
#print(b)
#print(a)

#a = np.array([4,3,1,2])
#print(a)
#j= np.argsort(a)
#print(j)

#j_max = np.argmax(a)
#j_min=np.argmin(a)

#print(j_max)
#print(j_min)


#p = np.poly1d([3,2,-1])
#print(p(0))
#print(p.roots)
#print(p.order)

#p = np.polynomial.Polynomial([-1,2,3])
#print(p)
#print()


#x= np.linspace(0, 1, 20)
#y = np.cos(x) + 0.3*np.random.rand(20)
#p = np.poly1d(np.polyfit(x, y, 5))
#t = np.linspace(0, 1, 200)
#plt.plot(x, y, 'o', t, p(t), '-')
#plt.show()


#x = np.linspace(-1,1,2000)
#y = np.cos(x) + 0.3*np.random.rand(2000)
#p = np.polynomial.Chebyshev.fit(x,y,90)
#t = np.linspace(-1,1,200)
#plt.plot(x,y,'r')
#plt.plot(t,p(t),'k-',lw=3)
#plt.show()

img = plt.imread('test.png')
print(img.shape, img.dtype)
plt.imshow(img[40:80, 20:80])
plt.show()

