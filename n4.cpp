#include <iostream>

using namespace std;

int main()
{
    
    string str="1000";
    for(int i=0;i<4;i++){
        if(str[i]==str[i+1]){
            if(str[i+1]==0){
                str[i+1]=1;
            }
            else{
                str[i+1]=0;
            }
        }
    }
    cout<<str;
    return 0;
}
