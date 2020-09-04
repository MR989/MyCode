#include<bits/stdc++.h>

using namespace std;

 void max2nd(int arr[],int n){
        int max=0;    
        
        
    for(int i  =0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }


        for(int i  =0;i<n;i++){
        if(arr[i]==max){
            arr[i]=0;
            max=0;
        }
        }
    for(int i  =0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
cout<<"max "<<max;    
}


int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    

    max2nd(arr,n);
    // cout<<"\n"<<max;
}