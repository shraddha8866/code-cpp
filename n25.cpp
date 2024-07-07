
#include<bits/stdc++.h>
using namespace std;

int myFun(vector<int> a1,vector<int> a2,int m,int n){
  int p1=0,p2=0;
  int sm=INT_MAX;
  while(p1<m && p2<n){
      if(a1[p1]!=a2[p2]){
          if(a1[p1]<a2[p2]){
              p1++;
          }
          else{
              p2++;
          }
      }
      else{
          sm=min(sm,a1[p1]);
          p1++;
          p2++;
      }
  }
  if(sm==INT_MAX){
      return -1;
  }
  return sm;
}
int main(){

    int m;
    cin>>m;
    int n;
    cin>>n;
    vector<int> a1(m);
    vector<int> a2(n);
    for(int i=0;i<m;i++){
        cin>>a1[i];
    }

      for(int i=0;i<n;i++){
        cin>>a2[i];
    }
    int mini=myFun(a1,a2,m,n);
    cout<<mini;
    return 0;
}