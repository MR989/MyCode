str1=input()
x=str1.split()

n=int(x[0])
q=int(x[1])

hrml=""
for i in range(0,n):
    hrml=hrml+input()+"\n"


querry=list()
for i in range(0,q):
    querry.append(input())

hrmllist=hrml.split("\n")
for qu in querry:
    q1=qu.split(".")

    attr=q1[-1]
    length=len(q1)
    attrlist=attr.split("~")
    

    line=hrmllist[length-1]

    if attrlist[0] in line:
        if attrlist[1] in line:

            ind=line.index(attrlist[1])
            print(line[ind+len(attrlist[1])+4:line.index("\">")])
        else:
            print("not found")
    

    

    



