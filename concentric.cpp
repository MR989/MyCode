//#Print concentric rectangular pattern in a 2d matrix.
 
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int A;
    cout<<"enter number";
    cin>>A;

    int size;
    size=2*A-1;
    int arr[size][size];
    int start=0;

    int end=size-1;
    while(A!=0){
        for(int i=start ; i<=end;i++){
            for(int j=start; j<=end;j++){

                if(i==start||i==end||j==start||j==end)
                    arr[i][j]=A;
            }
        }
        ++start;
        --end;
        --A;
    }

    for (int x=0;x<size;x++){
        for (int y=0;y<size;y++)
        cout<<arr[x][y];
        cout<<"\n";

    }
    return 0;
}


void addafter(){

    
}