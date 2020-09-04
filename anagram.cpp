#include<bits/stdc++.h>
using namespace std;

int main(){


    string s1="observe",s2="verbose";

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    

    if(s1==s2)
        cout<<"anagram";
    else
    {
        cout<<"not anagram";
    }
    
}