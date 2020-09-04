#include <bits/stdc++.h>
using namespace std;

int product(string b1,string b2){
    reverse(b1.begin(),b1.end());
    reverse(b2.begin(),b2.end());
    int x=0,d1=0,y=0,d2=0;
    // cout<<b1<<b2;
    for(int i =0;i<b1.length();i++){
        int a1=(b1[i]-'0');
        x=a1*pow(2,i);
        d1+=x;
    }
    for(int i =0;i<b2.length();i++){
        int a2=(b2[i]-'0');
        
        y=a2*pow(2,i);
        d2+=y;
    }
    int prod=d1*d2;
    return prod;
}

int main() {
	//code

    string b1;
    string b2;
    int t;
    cin>>t;

    while(t--){
        cin>>b1>>b2;

        cout<<product(b1,b2);
    }

	return 0;
}