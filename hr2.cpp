#include<iostream>
#include<stdio.h>
#include<string>
#include<bits/stdc++.h>
using namespace std;


char*  grades(int q1[],int q2[],char grade[]){

    int avg=0;
    for(int i =0;i<10;i++){
        avg=(q1[i]+q2[i])/2;
        if(avg<50)
            grade[i]='F';
        else if(avg==50 ||avg<70)
            grade[i]='D';
        else if (avg==70 ||avg<80)
            grade[i]='C';
        else if (avg==80 ||avg<90)
            grade[i]='B';
        else
        {
                grade[i]='A';
        }
        
    }
    return grade;

}

int main()
{


    int q1[10],q2[10];
    char grade[10];

    cout<<"enter the marks of quiz 1";
    for(int i =0;i<10;i++)
        cin>>q1[i];
    
    cout<<"enter the marks of quiz 2";
    for(int i =0;i<10;i++)
        cin>>q2[i];
    
    char *p=grades(q1,q2,grade);

    for(int i =0;i<10;i++)
        cout<<q1[i]<<"\t"<<q2[i]<<"\t"<<*(p+i)<<endl;
    
    
}