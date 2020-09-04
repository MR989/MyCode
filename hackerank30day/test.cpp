#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l;

    cin>>n;
    l=n-1;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }

    int x=0;
    
for(int j=l;j>=n/2;j--)
{ 
  swap(arr[j],arr[l-j]);
  // int temp=0;
  
  // temp=arr[l-j];
  // arr[l-j]=arr[j];
  // arr[j]=temp;
  
}
for(int i = 0;i<n;i++)
cout<<arr[i]<<" ";
return 0;
}