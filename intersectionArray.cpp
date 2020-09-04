#include<bits/stdc++.h>

using namespace std;

void intersection(int a1[],int a2[],int n ,int m){

    map<int ,int > map;
    for(int i =0;i<n;i++){
        auto it=map.find(a1[i]);
        if(it!=map.end()){
            it->second=it->second+1;

        }
        else{
            map.insert(pair<int ,int>(a1[i],1));
        }
    }

    for(int j =0;j<m;j++){
        auto it=map.find(a2[j]);

        if(it!=map.end()){
            it->second=it->second-1;
            if(it->second==0){
                map.erase(a2[j]);
            }
            cout<<a2[j]<<" ";
        }

    }



}
int main(){
    int a1[]={1,2,2,3,4};
    int a2[]={2,2,3};

    int n=sizeof(a1)/sizeof(a1[0]);
    int m=sizeof(a2)/sizeof(a2[0]);

    intersection(a1,a2,n,m);
    
    int a=4;
    int b=16;

    cout<<b%a;

}