def isPalindrome(A):
    str1=""
    A=A.lower()
    
    
    for char in A:
        if char.isalnum():
            str1+=char
    

    rev=str1[::-1]
    
    if str1==rev:
        return True
    else:
        return False



A="A man, a plan, a canal: Panama"
res=isPalindrome(A)
print(res)