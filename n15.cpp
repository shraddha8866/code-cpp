#include<bits/stdc++.h>
using namespace std;
vector<int> ans(vector<int> arr,int k){
    int n=arr.size();
    vector<int> ars;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
               ars.push_back(i);
            }
        }
    }
    return ars;
}
int main(){
    int n=4;
    int k=9;
    
    vector<int> arr(n);
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    vector<int> aps=ans(arr,k);
    for(int i=0;i<n;i++){
        cout<aps[i];
    }
    return 0;
}