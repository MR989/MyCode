#include <bits/stdc++.h>
using namespace std;






int main(){
    string s="this is my name";
    cout<<s<<endl<<"reverse of words-- ";
    int start=0;
    for(int i =0;i<=s.length();i++){

        if(s[i]==' '||s[i]=='\0'){
            reverse(s.begin()+start,s.begin()+i);
            start=i+1;
        }
    }
cout<<s;

}





