
#include <bits/stdc++.h> 
using namespace std;
int main(){
    string str="001111";
    
    string newstr=str;
    int n=str.length();
    int count=0,count1=0;
     for(int i=n-1;i>0;i--){
        if(newstr[i]==newstr[i-1]){
            if(newstr[i-1]=='0'){
                newstr[i-1]='1';
                count1++;
            }
            else{
                newstr[i-1]='0';
                count1++;
            }
        }
    }
    for(int i=0;i<n-1;i++){
        if(str[i]==str[i+1]){
            if(str[i+1]=='0'){
                str[i+1]='1';
                count++;
            }
            else{
                str[i+1]='0';
                count++;
            }
        }
    }
      int ans=min(count,count1);
	cout<<ans;
}
