#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int maxCount(int in1 ,int in2[],int in3){

int count =0;
    for(int i =0;i<in1;i++){
        for(int j=i+1;j<in1;j++){
            for(int z=j+1;z<in1;z++){
            if(in2[i]+in2[j]+in2[z]==in3){
                count++;
                cout<<in2[i]<<in2[j]<<in2[z]<<endl;
            }
                
        }
        }
    }
    return count ;
}



int main(){
    int in1;

    cin>>in1;
    int in2[in1],in3;
    for(int i =0;i<in1;i++)
        cin>>in2[i];
    cin >>in3;

    cout<<maxCount(in1,in2,in3);
}




