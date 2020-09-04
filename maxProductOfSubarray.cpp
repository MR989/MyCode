#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    int max=0,prod=0;

    for(int z=0;z<n;z++){

    for(int i = 0;i<n;i++){
        prod=1;
        for(int j=z;j<=i;j++){
            prod*=arr[j];
            cout<<arr[j];
        }
        if(max<prod){
            max=prod;
        }
        
        cout<<"\n";
    }
    }

print(sub,"  "sub2  )

    cout<<"max = "<<max;
}