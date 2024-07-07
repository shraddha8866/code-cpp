/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
int destroy(int n){
    int pf=0;
    bool isodd=false;
if(n%2==0){
    return n/2;
}
for(int i=3;i<n;i=i+2){
    if(n%i==0){
       pf=i;
       isodd=true;
       break;
    }
}
if(isodd){
n=n-pf;
return (n/2)+1;    
}

 return 1;

}
int main()
{
   int n;
   cin>>n;
   int res=destroy(n);
   cout<<res;

    return 0;
}
