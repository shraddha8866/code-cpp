#include<bits/stdc++.h>
using namespace std;
int myFun(vector<int> arr,int n){

 int val=0;
 for(int i=0;i<=n;i++){
      bool found=false;
     for(int j=0;j<n;j++){
         if(i==arr[j]){
             found=true;
             break;
         }
     }
     if(!found){
         val=i;
     }
     
 }
 return val;
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
    cout<<res;
    return 0;
}