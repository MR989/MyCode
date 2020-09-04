// #include<bits/stdc++.h>

// using namespace std;

// int main(){

//     int n,k;
//     cin>>n>>k;
//     if(k>=100)
//         k=26;
//     int j=0;
//     for(int i =0;i<n;i++){
//         cout<<char(97+j);
//         j++;
//         if(j>=k)
//             j=0;
//         }
//     return 0 ;


//     return 0 ;
// }




// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int n,q;
//     cin>>n>>q;

//     int *arr=new int[n+1],*P=new int[n+1];
//     int t , l, r;
    
//     int sum=0;
//     for(int i =1;i<=n;i++){
//         cin>>arr[i];
//     }    
//     P[0]=0;
//     for(int i=1;i<=n;i++)
//         P[i]=arr[i]+P[i-1];
    
//     while(q!=0){
//         cin>>t>>l>>r;
    
//         if(t==1){
//             for(int i=l;i<=r;i++){
//                 if(arr[i]==0)
//                     arr[i]=1;
                
//                 else
//                     arr[i]=0;
                                
//             }
//             for(int i=1;i<=n;i++)
//                 P[i]=arr[i]+P[i-1];
//             for(int i=1;i<=n;i++){
        
//     }
//         }
//         else{
//             sum=0;
//             for(int i =l ;i<=r;i++){
//                 sum=sum+P[i];
//             }
//             cout<<sum;
//         }
//     q--;
//     }
    
    
    
//     for(int i=1;i<=n;i++){
//         cout<<P[i];
//     }
// }


#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,q;
    cin>>n>>q;

    int *arr=new int[n+1],*P=new int[n+1];
    int t , l, r, m =1000000007;
    
    int sum=0;
    for(int i =1;i<=n;i++){
        cin>>arr[i];
    }    
    P[0]=0;
    for(int i=1;i<=n;i++){
        if(arr[i]==0)
            P[i]=0;
        else
            P[i]=arr[i]+P[i-1];
    }
    while(q!=0){
        cin>>t>>l>>r;
    
        if(t==1){
            for(int i=l;i<=r;i++){
                if(arr[i]==0)
                    arr[i]=1;
                
                else
                    arr[i]=0;
                                
            }
            for(int i=1;i<=n;i++){
                if(arr[i]==0)
                    P[i]=0;
                else
                    P[i]=arr[i]+P[i-1];
            }
        }
        else{
            sum=0;
            for(int i =l ;i<=r;i++){
                sum=sum+P[i];
            }
            cout<<sum%m<<endl;
        }   
    q--;
    }
    
    
    
    
}