import pandas as pd
import numpy as np

# s=pd.Series([12,-4,7,9])
# print(s)

# a1=np.arange(9).reshape((3,3))

# a2=np.arange((9)).reshape((3,3))+6

# print(a1)
# print(a2)

# a3=np.concatenate([a1,a2])
# print(a3)



import matplotlib.pyplot as plt
import math
# plt.plot([1,2,3,4])
# plt.show()


# plt.plot([1,2,3,4],[1,2,3,4],'ro')
# plt.show()

# plt.title('my first plot')
# plt.plot([1,2,3,4],[1,2,3,4],'ro')
# plt.show()

# t=np.arange(0,2.5,0.1)
# y1=np.sin(math.pi*t)
# y2=np.sin(math.pi*t+math.pi/2)
# y3=np.sin(math.pi*t-math.pi/2)
# plt.plot(t,y1,'b*',t,y2,'g^',t,y3,'ys')
# plt.show()


# t=np.arange(0,2.5,0.1)
# y1=np.sin(math.pi*t)
# y2=np.sin(math.pi*t+math.pi/2)
# y3=np.sin(math.pi*t-math.pi/2)
# plt.plot(t,y1,'b--',t,y2,'g',t,y3,'r-')
# plt.show()


# t=np.arange(0,5,0.1)
# y1=np.sin(2*np.pi*t)
# y2=np.sin(2*np.pi*t)
# plt.subplot(211)
# plt.plot(t,y1,'b--')

# plt.subplot(212)
# plt.plot(t,y2,'r--')

# plt.show()


t=np.arange(0,5,0.1)
y1=np.sin(2*np.pi*t)
y2=np.sin(2*np.pi*t)
plt.subplot(121)
plt.plot(t,y1,'b--')

plt.subplot(122)
plt.plot(t,y2,'r--')

plt.show()










