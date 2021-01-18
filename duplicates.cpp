#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> findduplicate(int arr[],int n){
    vector<int>v;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1])
            v.push_back(arr[i]);
            while(arr[i]==arr[i+1])
            i++;
    }
    return v;
}
int main() {
   int t;
   cin>>t;
   while(t--){
       int n ;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int>ans=findduplicate(arr,n);
         for(auto it: ans){
        cout<<it<<" ";
        }
   }
   cout<<endl;
}
