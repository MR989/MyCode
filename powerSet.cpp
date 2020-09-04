#include<bits/stdc++.h>
using namespace std;


void subset(int arr[],int size){

    vector<vector<int>> subsets;
    vector<int>sub;
    //adding empty subset
    subsets.push_back(sub);

    //adding other subset to subset array
    for(int i =0;i<size;i++){
        int val=arr[i];
        
        int len=subsets.size();
        for(int j=0;j<len;j++){
            vector<int> sub;
            sub=subsets[j];
            sub.push_back(val);
            subsets.push_back(sub);
        }

    }

    for(int i =0;i<subsets.size();i++){
        for(int j =0;j<subsets[i].size();j++){
            cout<<subsets[i][j];
        }
        cout<<endl;
    }
//     int input3=12,count=0;
//     for(int i =0;i<subsets.size();i++){
//         int sum=0;
//         for(int j =0;j<subsets[i].size();j++){
//         sum+=subsets[i][j];    
//         }
//         if(sum==input3)
//             count++;
//     }
//     cout<<count;
 }

int main(){
int arr[]={4,7,8,2,3};
int size=5;
subset(arr,size);



}