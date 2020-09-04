
n=int(input("enter the no oftimes u want run the operation"))
name=list()

found=list()



def addword(name1):

    name.append(name1)

def findprefix(pref):
    #print(pref)
    for i in name:
        if i.startswith(pref):
            found.append(i)
            
    
    for x in found:
        print(x,end=" ")
    print(f"\ntotal-> {len(found)}")





for i in range(0,n):
    word=input()
    if word.startswith('add '):
        length=len(word)
        addword(word[4:length])
    if word.startswith('find prefix '):
        
        findprefix(word[12:len(word)])

        


