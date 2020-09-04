#include <iostream>
#include <iomanip>
#include <limits>
#include <string>   
using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";


    int x;
    double y;
    string z;

    cin>>x;
    cin>>y;
    cin.ignore();
    getline(cin,z);
    i=i+x;
    d=d+y;

    string q=s+z;

    cout<<i<<"\n"<<fixed<<setprecision(1)<<d<<"\n"<<q;
}
