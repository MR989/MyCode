#include<iostream>
#include<stdio.h>
#include<string>
#include<bits/stdc++.h>
using namespace std;



int main(){

    int no;
    cin>>no;
    int ari[no],dep[no];

    for(int i =0;i<no;i++){
        cin>>ari[i]>>dep[i];

    }
    for(int i =0;i<no;i++)
        dep[i]=dep[i]+ari[i];
    
     sort(ari, ari + no); 
    sort(dep, dep + no); 
  
    
    int plat_needed = 1, result = 1; 
    int i = 1, j = 0; 
  
    while (i < no && j < no) { 
        if (ari[i] <= dep[j]) { 
            plat_needed++; 
            i++; 
        } 
  
        else if (ari[i] > dep[j]) { 
            plat_needed--; 
            j++; 
        } 
  
        if (plat_needed > result) 
            result = plat_needed; 
    }     
    cout<<result;

    }