#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

      int n=5,sum;
    
    int arr[]={-1,0,1,2,-1,-4};

    // for(int i = 0;i<n;i++){
    //     cin>>arr[i];
    // }

    for(int i=0;i<n;i++){
        
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                //sum=arr[i]+arr[j]+arr[k];
                if(arr[i]+arr[j]+arr[k]==0)
                    cout<<arr[i]<<arr[j]<<arr[k]<<endl;
            }
        }
    }
}