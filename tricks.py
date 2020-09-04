# a = int(input("enter the item"))
# b int(input())



x=int(input("enter the items"))
product=1
days=0


while x>=product:
    if product<2:
        product+=1
    else:
        product=pow(product,2)
    days+=1


print("days ",days)