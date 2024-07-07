Maximum of subarray

#include <bits/stdc++.h>
using namespace std;
vector<int> myFun(vector<int> arr,int n,int k){
    vector<int> naya;
    for(int i=0;i<n-k+1;i++)
    {
        int temp=0;
        for(int j=i;j<i+k;j++){
            
            temp=max(temp,arr[j]);
        }
        naya.push_back(temp);
    }
    return naya;
}
int main() {
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
vector<int> newans=myFun(arr,n,k);
for(int i=0;i<newans.size();i++){
    cout<<newans[i];
}
    return 0;
}