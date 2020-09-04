#include<iostream>
#include<stdio.h>
#include<string>
#include<bits/stdc++.h>
using namespace std;



int main(){


    int cases,nemp;
    
    cin>>cases;
    int x=0;
    int gifts[cases];

    for(int i =0;i<cases;i++)
        gifts[i]=1;
    while(x!=cases){
            
            cin>>nemp;
            int *rank=new int[nemp];
            for(int i =0;i<nemp;i++){
                cin>>rank[i];
            }

            for(int i =1;i<nemp;i++){
                if(rank[i]>rank[i-1] && rank[i]>rank[i+1]){
                    gifts[x]=gifts[x]+2;
                }
                else{
                    gifts[x]++;
                }
            }
        // cout<<gifts;
        x++;
    }


 for(int i =0;i<cases;i++)
    cout<<gifts[i]<<endl;   
    
}