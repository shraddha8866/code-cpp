#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int> myFun(vector<int> arr,int n){
    vector<int> nws;
    for(int i=0;i<n;i++){
        bool grt=false;
        for(int j=i+1;j<n;j++){
            if(i==n-1){
                nws.push_back(arr[i]);
            }
            if(arr[i]<=arr[j]){
                grt=true;
                break;
            }
        }
        if(!grt){
            nws.push_back(arr[i]);
        }
        sort(nws.begin(),nws.end());
    }
    return nws;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> arrs=myFun(arr,n);
    for(int i=0;i<arrs.size();i++){
        cout<<arrs[i];
    }
    return 0;
}