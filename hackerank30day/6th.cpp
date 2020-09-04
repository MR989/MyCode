    #include <cmath>
    #include <cstdio>
    #include <vector>
    #include <iostream>
    #include <algorithm>
    #include<bits/stdc++.h>

    using namespace std;

    void solution(int cases,string str[]){
        
        for(int i =0;i<cases;i++){
        string s1=str[i];
        
        
        for(int i = 0 ;i<s1.length();i++){

            if(i%2==0){
                cout<<s1[i];
            }

        }
        cout<<" ";
            for(int i = 0 ;i<s1.length();i++){

            if(i%2!=0){
                cout<<s1[i];
            }
        }
        cout<<"\n";

    }
    }



    int main() {

        int cases;
        cin>>cases;
        
        string str[cases];
        for(int i =0;i<cases;i++){
            cin>>str[i];
        }
        solution(cases,str);

        /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
        return 0;
    }
