#include<bits/stdc++.h>
using namespace std;
vector<int> myFun(vector<int> arr1,vector<int> arr2,int n,int m){
    int p1=0;
    int p2=0;
    vector<int> newarr;
    while(p1<n && p2<m){
       if(arr1[p1]<arr2[p2]){
        newarr.push_back(arr1[p1]);
        p1++;
    }
    else{
         newarr.push_back(arr2[p2]);
        p2++;
    }  
    }
    while(p1<n){
                newarr.push_back(arr1[p1]);
        p1++;
    }
    while(p2<m){
        newarr.push_back(arr2[p2]);
        p2++;
    }
    return newarr;
}
int main(){
    int n;
    int m;
    cin>>n;
    cin>>m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
     for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    vector<int> newarr=myFun(arr1,arr2,n,m);
    for(int i=0;i<newarr.size();i++){
        cout<<newarr[i];
    }
    return 0;
}