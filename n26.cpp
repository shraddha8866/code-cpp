#include<bits/stdc++.h>
using namespace std;

int myFun(vector<int> arr,int n){
    int maxi=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<i;j++){
            sum+=arr[j];
            maxi=max(maxi,sum);
        }
        
    }
    return maxi;
}
int main(){
    int n;
    cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int ans=myFun(arr,n);
cout<<ans;
    return 0;
}