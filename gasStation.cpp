#include<bits/stdc++.h>
using namespace std;


int canCompleteCircuit(const vector<int> &A, const vector<int> &B) {

    
    int i=0;
    for( i =0;i<A.size();i++){

        int flag=0;
        int current=i;
        int ava_fuel=0;
        int count = A.size();
        do{
            ava_fuel+=A[current];

            if(ava_fuel<B[current]){
                flag=1;
                break;
            }
            else{
                ava_fuel=ava_fuel-B[current];
                current++;
                if(current==A.size())current=0;

            }
            count--;

        }while(count - 1);
        if(flag==0)
            return i;

        
        
    }    
    
    
    
        return -1;
    
}


int main(){

    vector <int> A={4,6,7,4};
    vector <int> B={6,5,3,5};

    int x=canCompleteCircuit(A,B);
    cout<<"result "<<x;
}