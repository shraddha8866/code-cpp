#include<bits/stdc++.h>
#include<vector>
using namespace std;
void myFun(int &arr,int &brr,int n,int m){
    for(int i=0;i<n;i++){
        arr[i]=arr[i];
    }
    for(int i=n;i<n+m;i++){
        arr[i]=
    }
  
  
}
int main(){
    int n=4;
    int m=3;
    int arr[n]={1,4,5,7};
    int brr[m]={2,3,6};
    vector<int> srr=myFun(arr,brr,n,m);
    for(int i=0;i<srr.size();i++){
        cout<<arr[i];
    }
    return 0;
}