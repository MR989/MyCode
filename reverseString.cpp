#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){


    string s1;
    cin>>s1;


   
    int i =0;
    string num="";
    string alpha="";
    while(i<s1.length()){

        if(s1[i]>='0' && s1[i]<='9')
            num=num+s1[i];
        else
            alpha=alpha+s1[i];
        i++;
    }
    sort(num.begin(),num.end());
    sort(alpha.begin(),alpha.end());

    cout<<alpha<<" "<<num;
   
    string result=alpha+num;
    cout<<"\nold index    new index"<<endl;
    for(int i =0;i<result.length();i++){
        for(int j=0;j<result.length();j++){
            if( [i]==s1[j]){
                cout<<j<<"\t"<<i<<endl;
                break;
            }
        }
    }

}