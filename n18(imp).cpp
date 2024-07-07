#include<bits/stdc++.h>
using namespace std;
int myFun(vector<int> arr){
        int cnt=1,temp=0;
        int n=arr.size();
        if(n==1){
            return arr[0];
        }
    for(int i=0;i<n-1;i++){
        cnt=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cnt++;
            }
        }
        if(cnt>n/2){
            temp=arr[i];
        }
        
    }
    return temp;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=myFun(arr);
    cout<<res;
    
    
    return 0;
}