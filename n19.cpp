#include<bits/stdc++.h>
using namespace std;
int myFun(vector<int> arr,int n){
    int cnt=0,temp=0;
        for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
        }
        else{
            cnt=0;
        }
        temp=max(temp,cnt);
    }
    return temp;
}
int main(){
    int cnt=0,temp=0;
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=myFun(arr,n);
    cout<<"Max one's are "<<res;
    return 0;
}