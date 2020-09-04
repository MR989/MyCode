#include<bits/stdc++.h>

using namespace std;

int main(){


    int arr[10],n,pos;
    cout<<"\nenter the number of elements in array ";
    cin>>n;
    
    cout<<"\nenter the elements in array\n";
    for(int i = 0;i<n;i++)
        cin>>arr[i];
    cout<<"\nenter the number of positions to rotate ";

    cin>>pos;
    for(int j=0;j<pos;j++){
    int temp;
    // for(int i = n-1;i>=0;i--){
    //     if(i==n-1)
    //         temp= arr[i];
    //     else
    //         arr[i+1]=arr[i];            

    // }

    for(int i = 0;i<n;i++){
        if(i==0)
            temp= arr[i];
        else
            arr[i-1]=arr[i];            

    }

    arr[n-1]=temp;
    }


    for(int i = 0 ;i<n;i++)
    cout<<" "<<arr[i];


    return 0;
}


    
    // for(int i = n-1;i>=0;i--){
    //     cout<<"\n"<<i;
    //     if(i+pos>n-1)
    //         arr[n-1-i]=arr[i];
    //     else
    //         arr[i+pos]=arr[i];

    // }
    