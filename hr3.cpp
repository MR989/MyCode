// #include<iostream>
// #include<stdio.h>
// #include<string>
// #include<bits/stdc++.h>
// using namespace std;


// float*  power(float q1[],float q2[],float P[]){

//     int po=0;
//     for(int i =0;i<10;i++){
//         po=(q1[i]*q1[i])*q2[i];
//         P[i]=po;

//     }
//     return P;

// }

// int main()
// {


//     float I[10],R[10], P[10];

//     cout<<"enter the current and resistance";
//     for(int i =0;i<10;i++)
//         cin>>I[i]>>R[i];
    
//     float *p=power(I,R,P);

//     cout<<"Power array";
//     for(int i =0;i<10;i++)
//         cout<<p[i]<<endl;
    
    
// }



#include<bits/stdc++.h>
#define MAX_SIZE 10
using namespace std;
int *calc(int *a,int *b,int *c)
{
    int i;
    for(int i=0;i<MAX_SIZE;i++)
    {
        c[i]=(a[i]*a[i])*b[i];
    }
return c;
}
int main()
{
    int I[MAX_SIZE];
      cout<<"Enter the current";
    for(int i=0;i<MAX_SIZE;i++)
    {

      cin>>I[i];
    }
    int R[MAX_SIZE];
    cout<<"Enter the resistence";
    for(int i=0;i<MAX_SIZE;i++)
    {

      cin>>R[i];
    }

    int V[MAX_SIZE];
int *z=calc(I,R,V);
 cout<<"Array is";
    for(int i =0;i<MAX_SIZE;i++)
        cout<<*(z+i)<<endl;



}