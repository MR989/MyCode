l1=["Orange", "Mango", "Lichi", "Apple", "Strawberry"]
l2=["Strawberry","Orange","Apple"]

sum=0
min=1000000
fruit=""
for i in range(0,5):
    for j in range(0,3):
        if(l1[i]==l2[j]):
            
            sum=i+j
            print(sum)

            if(min>sum):
                min=sum
                fruit=l2[j]
                print(fruit," ")

print(fruit)