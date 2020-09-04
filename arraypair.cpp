// Find non duplicate

// There is an array where each number is present in pair except one which has no pair, find that number.

// Input: 1, 3, 4, 1, 2, 3, 2
// Output : 4

// Input: 1, 3, 2, 3, 3, 2, 1,2, 2
// Output: 3


#include<bits/stdc++.h>
using namespace std;


int main(){


    int arr[]={1, 3, 4, 1, 2, 3, 2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n;
    for(int i = 0;i<n;i++){

        for(int j=0;j<n;j++){
            if(arr[i]==arr[j] && i!=j){
                
            }
        }
    }

}