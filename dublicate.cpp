// #include<bits/stdc++.h>

// using namespace std;

// int main(){


//     string str="finding",dub="";

//     for(int i =0;i<str.length();i++){
//         for(int j =0;j<str.length();j++){
//             if(j!=i){
//                 if(str[i]==str[j]){
//                     dub=dub+ " "+ str[i];
//                 }
//             }
//         }
//     }

//     cout<<dub<<" are dupclicate";
// }


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<" First word is : ";
    cin>>str;
    string str2;
    cout<<"Second word is : ";
    cin>>str2;
    string str3="";

    string cp1,cp2;
    cp1=str;
    cp2=str2;
    for(int i=0;i<cp1.length();i++)
    {
        
        for(int j=0;j<cp2.length();j++){
            
        if(cp1[i]==cp2[j])
            cp1[i]='0';
        }
        
        
    }

    for(int i =0;i<cp1.length();i++){
        if(cp1[i]=='0')
            continue;
        cout<<cp1[i];
    }

    cp1=str2;
    cp2=str;

    for(int i=0;i<cp1.length();i++)
    {
        
        for(int j=0;j<cp2.length();j++){
            
        if(cp1[i]==cp2[j])
            cp1[i]='0';
        }
        
        
    }

    for(int i =0;i<cp1.length();i++){
        if(cp1[i]=='0')
            continue;
        cout<<cp1[i];
    }

}