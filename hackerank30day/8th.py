# Enter your code here. Read input from STDIN. Print output to STDOUT

n=int(input())
phonebook=dict()
for i in range (0,n):
    inp=input()
    s=inp.split()
    phonebook[s[0]]=s[1]
names=list()


while True:
    try:
        x = input()
        
            
        names.append(x)
    except EOFError as e:
        break
for name in names:
    if name in phonebook:
        print(name +"="+phonebook[name])
    else:
        print("Not found")
# print(phonebook)
