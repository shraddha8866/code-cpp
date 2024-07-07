#include <bits/stdc++.h> 
using namespace std;
int main(){
    int i,j;
string str="asa";
int n=str.length();
for(int i=0,j=n-1;i<=j;i++,j--){
    if(str[i]!=str[j]){
        cout<<"Not palindrome";
        return false;
        break;
    }
}
if(!false){
    cout<<"palindrome";
}

return 0;
}