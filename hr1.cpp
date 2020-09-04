#include<iostream>
#include<stdio.h>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{


    cout<< "enter student names and last 6 numbers";

    string arr[5][4];

    for(int i =0;i<5;i++){
        for(int j =0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    string **p=arr[i];

    for(int i =0;i<5;i++)
        sort(arr[i]);

    for(int i =0;i<5;i++){
        for(int j =0;j<4;j++){
            cout<<arr[i][j]<<endl;
        }
    }

    

}