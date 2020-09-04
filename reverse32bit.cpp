#include<bits/stdc++.h>
using namespace std;


long long  reversebit(long long a ){


    int binary[32]={0};
    int i =0;
    while(a!=0){

        binary[i]=a%2;
        a=a/2;
        i++;

    }
    for(int i =0;i<32;i++)
    cout<<binary[i];
    reverse(binary,binary+32);
     for(int i =0;i<32;i++)
     cout<<"\n"<<binary[i];
    long long res=0;
    for(int i =31;i>=0;i--){
        res=res+(binary[i]*pow(2,i));
        
    }

    return res;
    
}

int main(){
    long long res=reversebit(4294967295);
    cout<<"result "<<res;

}