#include <bits/stdc++.h> 
using namespace std;
int main(){

    int no,temp,count=0,arr[5],arr2[5];
    cout<<"enter the number";
    cin>>no;
    temp=no;
    int i=0;
    while(temp){
        
        arr[i]=temp%10;
        temp=temp/10;
        i++;

    } 
    for(int i=0;i<5;i++){
        count=0;
        for(int j = 0;j<5;j++){
            
            if(arr[i]==arr[j])
            count++; 
            arr2[j]=-1;

        }
      
   
        if ( count>1)
            cout<<"\n"<<arr[i]<<" repeated "<<count<<" times";
    }
   
 
}