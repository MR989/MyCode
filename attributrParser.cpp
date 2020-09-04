#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q;
    cin>>n>>q;

    string inp,hrml="";
    for(int i =0;i<n;i++){
        getline(cin,inp);
        
        hrml=hrml+inp+"\n" ;
    }

    string querry[q];
    for(int i =0;i<q;i++)
        cin>>querry[i];

    for(int i =0;i<q;i++){
        string qu=querry[i];

        

        int index=qu.find(".")
        if(index<qu.length())
            string tag=qu.substr(0,index);

    }
     cout<<hrml;
    return 0;
}
