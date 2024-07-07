#include<bits/stdc++.h>
using namespace std;
int myFun(vector<int> arr){
    int n=arr.size();
      int temp=0;
    int maxpf=0;
       for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                maxpf=arr[j]-arr[i];
                temp=max(temp,maxpf);
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