#include<bits/stdc++.h>
using namespace std;
vector<int> myFun(vector<int> arr,int k){
    vector<int> newarr;
    int dis;
    int n=arr.size();
    for(int i=0;i<=n-k;i++){
        dis=k;
        for(int j=i;j<i+k-1;j++){
            for(int l=j+1;l<i+k;l++){
                if(arr[j]==arr[l]){
                    dis--;
                    break;
                }
            }
        }
        newarr.push_back(dis);
    }
    return newarr;
}
int main(){
   
    int n;
    cin>>n;
     vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=4;
    vector<int> newarr=myFun(arr,k);
    for(int i=0;i<n-k+1;i++){
        cout<<newarr[i];
    }
    return 0;
}