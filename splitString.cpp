#include<bits/stdc++.h>

using namespace std;

int main(){

    string str="mllalacha",str2;
    
    for(int i =0;i<str.length();i++){

        if(str[i]=='a')
            continue;
        else if(str[i]=='c' && str[i+1]=='h'){
            ++i;
            continue;
        }
        else
        {
            str2=str2+str[i];
        }
        

    }

cout<<str2;
    // stringstream s(str);
    //  string word;
    //  int count=0,other=0;
    //  while(s>>word){
    //      if(word.length()==1)
    //         other++;
    //     else
    //         count++;
    //  }
    // cout<<"words are "<<count<<"\nothers are "<<other;
}