l1=list(list())

arr=[1, 2, 3, 3, 4, 4, 5, 5]


for i in range(0,len(arr)):
    if i==0:
        sub=list()
        sub.append(arr[i])
        continue

    if arr[i]-1==arr[i-1]:
        sub.append(arr[i])
    else:
        sub2=list()
        print(arr[i])
        sub2.append(arr[i]) 


print(sub,"  ",sub2  )

