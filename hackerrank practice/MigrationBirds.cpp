#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the migratoryBirds function below.
int migratoryBirds(vector<int> arr) {
    int count=0;
    int bird=0,maxCount=0;
    sort(arr.begin(),arr.end());
    for (int i=0;i<arr.size();i++)
        cout<<arr[i];
    for (int i=0;i<arr.size()-2;i++){
        
        
        
            if(arr[i]==arr[i+1]){
                count++;  
            }
        
        if(maxCount<count){
                cout<<count<<" "<<arr[i]<<endl;
                maxCount=count;
                bird=arr[i];
        }
        if(arr[i+1]!=arr[i+2])
            count=1;
        
    }
    
//     int freq[10]={0};
//     for (int i=0;i<arr.size();i++){
        
//         freq[arr[i]]++;
//     }
    
// for (int i=0;i<10;i++){
        
//         cout<<freq[i]<<" ";
//     }
//     cout<<endl;

//     int *max=max_element(freq,freq+10);
//     cout<<*max<<endl;
//     for(int i=0;i<10;i++){
//         if(freq[i]==*max){
//             bird=i;
//             break;
//         }
//     }

    return bird;
}

int main()
{
    vector <int >arr={1, 1,2,2,3,3,3};
    int result = migratoryBirds(arr);

    cout << result << "\n";



    return 0;
}
