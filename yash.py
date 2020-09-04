def Countpages():
    
    n=int(input("number of books"))

    x=int(input("enter value of X"))


    page=input()
    pages=page.split()
    
    count=0
    for i in range(0,n):
        if int(pages[i])<x:
            count=count+1
            
            
        for j in range(i,n):
            
            if int(pages[j])*int(pages[i])<x and i!=j:
                count=count+1
                
    print(count)


if __name__ == "__main__":
    Countpages()