#Print concentric rectangular pattern in a 2d matrix.


def concentricSquare():
    A=int(input("enter the number"))

    size = 2*A-1
    arr = [[0 for i in range(size)] for j in range(size)] 
    start=0
    end=size-1
    while(A!=0):   #that is 4

        for i in range(start,end+1):
            for j in range(start,end+1):

                if i==start or i==end or j==start or j==end:

                    arr[i][j]=A
            
        start=start+1
        end=end-1   
        A=A-1
    
    for x in range(0,size):
        for y in range(0,size):
            print(arr[x][y],end="")
        print('')
    

concentricSquare()
  
