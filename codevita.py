def findPlatform(arr,dep, n):

    arr.sort()

    dep.sort()

    plat_needed = 1

    result = 1

    i = 1

    j = 0

    while(i < n and j<n):

        if(arr[i] <= dep[j]):

            plat_needed += 1

            i+= 1

        elif(arr[i] > dep[i]):
            plat_needed -= 1

            j+= 1

        if (plat_needed > result):
            result = plat_needed

    return result

n = int(input())

arr = []

dep = []

for i in range(0,n):

    I= list(map(int,input().split()))

    arr.append(I[0])
    dep.append(I[0]+I[1])

print(findPlatform(arr, dep, n),end="")