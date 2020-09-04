#include<iostream>
#include<string.h>
using namespace std;
void palindrome(string A){
        string rev, str1="";
        for (int i=0;i<A.length();i++){
            A[i]=tolower(A[i]);
        
        }
        for (int j=0;j<A.length();j++){
            if(isalnum(A[j])){
                str1=str1+A[j];
                
            }
        }
        //reverse a string
        for(int x=str1.length()-1;x>=0;x--)
            rev=rev+str1[x];
        

        if(str1==rev)
        cout<<"true";
        else
        {
            cout<<"False";
        }
        


}

int main(){

    palindrome("A man, a plan, a canal: Panama");

}