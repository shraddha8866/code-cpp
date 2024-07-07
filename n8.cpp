#include <iostream>

using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    int ars[5];
   int pr;
    for(int i=0;i<5;i++){
          
    for(int j=0;j<5;j++){
           
        if(i!=j){
            pr=pr*arr[j];
        }
    }
    ars[i]=pr;
    
    }
    for(int i=0;i<5;i++){
        cout<<ars[i];
    }
    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     int n=5;
//     int ars[n];
//     for(int i=0;i<n;i++){
//         int pr=1;
//      for(int j=0;j<n;j++)   {
//          if(i!=j){
//              pr=pr*arr[j];
//          }
//      }
//         ars[i]=pr;
//     }
//     for(int i=0;i<n;i++){
//         cout<<ars[i]<<" ";
//     }
//     return 0;
// }


