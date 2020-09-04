#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    string a1[]={"Orange", "Mango", "Lichi", "Apple", "Strawberry"},a2[]={"Strawberry","Orange","Apple"};
    int min=INT_MAX,sum;
    string fruit="";
    for(int i =0;i<5;i++){
        sum=0;
        for(int j = 0;j<3;j++){
            if (a1[i]==a2[j]){
                sum=i+j;
                
            if(sum<min){
            min=sum;
            fruit=a2[j];          
            }
            }

        }
    
        
    }

cout<<fruit;

}