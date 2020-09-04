#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int arr[]={1,2,3,4,5};
    int n=5,k=3,sum=0;
    for (int z =1;z<=k;z++){
         
    for(int i = 0;i<=n-z;i++){
        int prod=1;
        for(int j=i;j<z+i;j++){
            cout<<arr[j];
            prod*=arr[j];
        }
        sum+=prod;    
        cout<<"\n";
        

        
    }

    }
        cout<<sum;


}
