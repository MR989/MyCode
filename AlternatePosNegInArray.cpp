#include <bits/stdc++.h>

using namespace std;

// [1:38 PM, 8/19/2020] Motal: Rearrange	the	array	in	alternating	positive	and	negative	items	with	
// O(1)	extra	space.
// [1:38 PM, 8/19/2020] Motal: Input:  arr[] = {1, 2, 3, -4, -1, 4}
// Output: arr[] = {-4, 1, -1, 2, 3, 4}

// Input:  arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8}
// output: arr[] = {-5, 5, -2, 2, -8, 4, 7, 1, 8, 0}

int main(){

    int arr[10]={-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};

    int n=10,i =0;


    //naive approach by using a extra array

    int copy[10],x=0,neg=1,pos;

    for(int i =0;i<n;i++){
        if(arr[i]<0){
            copy[x]=arr[i];
            x++;
    }
    }
    pos=x;

    
    for(int i =0;i<n;i++){
        if(arr[i]>=0){
            copy[x]=arr[i];
            x++;
    }
    }
    
    for (int i =0;i<n;i++)
    cout<<" "<<copy[i];
    cout<<endl;

 while(neg<pos&& pos<n){
         if(copy[neg]<0){
             swap(copy[neg],copy[pos]);
             pos++;
             neg+=2; 
         }
     }

    for (int i =0;i<n;i++)
    cout<<" "<<copy[i];
    cout<<endl;








    int pivot=0;
    int pindex=0;
    
    // for (int i =0;i<n;i++){
    //     if(arr[i]<pivot){
    //         swap(arr[pindex],arr[i]);
    //         pindex++;
    //     }

    // }

    
    // //pindex is the starting index of +ve
    // int pos=pindex,neg=1;
  
    //  while(neg<pos&& pos<n){
    //      if(arr[neg]<0){
    //          swap(arr[neg],arr[pos]);
    //          pos++;
    //          neg+=2; 
    //      }
    //  }

    // cout<<endl;
    // for(int i=0;i<n;i++)
    // cout<<arr[i]<< " ";






}