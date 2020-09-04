/*Ek array banao jisme values aur number of array 
elements user input krega.
Fir 'K' ki value user input krega.
Jaha bhi 2 consecutive array elements ka sum 'K' jitna 
ho waha se array k end tak sorting hojaegi*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cout<<"enter the number of elements in array";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in array\n";
    for(int i =0;i<n;i++)
    cin>>arr[i];

    cout<<"\nenter the value of k";
    cin>>k;

    for(int i =0;i<n;i++){
        int sum=arr[i]+arr[i+1];
        if(sum==k){
            sort(arr+i,arr+n);
            break;
        }
    }

    for(int i =0;i<n;i++)
    cout<<" "<<arr[i];



}