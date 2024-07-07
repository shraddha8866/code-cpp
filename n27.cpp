#include<bits/stdc++.h>
using namespace std;
bool myFun(vector<int> nums,int n){
    vector<int> num1;
    vector<int> num2;
    sort(nums.begin(),nums.end());
    int i=0,j=0;
    for(int i=0;i<n;i=i+2){
        num1.push_back(nums[i]);
        num2.push_back(nums[i+1]);
    }
   while(i<(n/2)-1 && j<(n/2)-1){
if(num1[i]!=num1[i+1] && num2[i]!=num2[i+1]){
    i++;
    j++;
}
else{
    return false;
}
}
return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    bool final=myFun(nums,n);
    cout<<final;
    return 0;
}