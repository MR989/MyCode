"""  data science webinar """

import numpy as np
# a=np.array([1,2,3])

# print(type(a))
# print(a.dtype)

# print(a.size)


# b= np.array([[1.3,3.4],[0.3,4.1]])
# print(b)
# print(b.size,b.ndim,b.shape)

#intrinsic creation of array
#we cannot create this for 2 or 3s

# x=np.zeros((3,3))
# print(x)
# y=np.ones((3,3))


# x=np.arange(0,10,0.6)
# print(x)


# y=np.arange(0,12).reshape(3,4)
# print(y)

# x=np.arange(4)
# print(x)

# y=np.arange(4,8)

# print(x*np.sin(y))


# a= np.arange(4)
# a+=1
# print(a)


# a=np.array([3.3,4.5,1.2,5.7,0.3])

# print(a.sum())

# print(a.min())
# print(a.mean())
# print(a.std())


# a= np.arange(10,16)
# print(a[1:5])
# print(a[1:5:2])


# a=np.random.random((4,4))
# print(a<0.5)
# print(a[a<0.5])

b= np.random.random(12)
print(b)

# B=b.reshape(3,4)
# print(B)

# b=b.ravel()
# print(b)

B=b.transpose()
print(B)