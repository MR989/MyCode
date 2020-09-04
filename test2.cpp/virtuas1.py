

def street(input1,input2):
    L=input1

    cordinates=input2
    sum=0
    x=0
    y=0
    commonregion=0
    for i in range(0,L):

        x=cordinates[i][1]-cordinates[i][0]
        sum+=x
        if i!=0:
            y=cordinates[i-1][1]-cordinates[i][0]
            commonregion+=y
                


    for i in range(1,L):
        y=cordinates[i-1][1]-cordinates[i][0]
        commonregion+=y
    return sum-commonregion

street()
