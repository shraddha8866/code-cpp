
#include <bits/stdc++.h>
using namespace std;
int myFun(int n,string &sr){
    if(n==1){
        return 0;
    }
    for(int i=0;i<n-1;i++){
        if(sr[i]!=sr[i+1]){
            swap(sr[i],sr[i+1]);
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    string sr;
    cin>>sr;
    int res=myFun(n,sr);
    cout<<res;

    return 0;
}
