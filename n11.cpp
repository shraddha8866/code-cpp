 #include <bits/stdc++.h>
using namespace std;
vector<int> myFun(vector<int> &arr,int n){
    vector<int> newarr(n,-1);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                newarr[i]=arr[i];
            }
        }
        if(i==n-1){
            newarr[i]=-1;
        }
    }
    
    return newarr;
}


int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    // vector<int> newarr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arr=myFun(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}