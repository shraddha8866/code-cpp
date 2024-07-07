#include <bits/stdc++.h>
using namespace std;
int myFun(int n,string &so,int k){
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){
            if(so[i]==so[j]){
               swap(so[i],so[i+1]);
            }
        }
    }
    int cnt=1;
    for(int i=0;i<n;i++){
        if(so[i]==so[i+1]){
            cnt++;
        }
    }
    if(cnt==k){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    
   int n;
   cin>>n;
   string so;
   cin>>so;
   int k;
   cin>>k;
   int res=myFun(n,so,k);
   cout<<res;
   
      return 0;
}
// 5
// 9 9
// iiiiiiiii
// 8 4
// gqtjztlh
// 8 7
// qcoptysx
// 6 1
// iilkgg
// 6 1
// bfmpib

// int boredChef(int n, int k, string &s) {
//    for(int i=0;i<n;i++){
//       for(int j=i+1;j<n;j++){
//          if(s[i]==s[j]){
//             swap(s[i],s[i+1]);
//          }
//       }
//    }
//    int cnt=1;
//    for(int i=0;i<n;i++){
//        if(cnt==k){
//          break;
//       }
//       if(s[i]==s[i+1]){
//          cnt++;
//       }
//    }
//    if(cnt==k){
//       return 1;
//    }
//    else{
//       return 0;
//    }
// }
