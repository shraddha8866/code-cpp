#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp=0;
    vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
vector<int> newarr;

for(int i=0;i<n;i++){
    bool found=false;
    for(int j=0;j<n;j++){
        if(i+1==arr[j]){
         found=true;
         break;
        }
    }
    if(!found){
        newarr.push_back(i+1);
    }
    
}
for(int i=0;i<newarr.size();i++){
    cout<<newarr[i];
}
}