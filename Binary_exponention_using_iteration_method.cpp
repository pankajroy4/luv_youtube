#include<iostream>
using namespace std;
const int M=1e9+7;
int fun(int a,int b){    
    int ans=1;
    while(b>0){
      if(b&1) //checking ,0th bit is set or unset
        ans=ans*1ll*a;   //if data type of a or b is long long, the we do't 
      a=a*1ll*a;         // need to multiply with 1ll 
      b=b>>1;
    }
    return ans;
  }
int main(){
  int a=3,b=13;
  cout<<fun(a,b);
}

// if we have to take %M
// #include<iostream>
// using namespace std;
// const int M=1e9+7;
// int fun(int a,int b){
//     int ans=1;
//     while(b>0){
//       if(b&1)
//         ans=(ans*1ll*a) % M;
//       a=(a*1ll*a) % M;
//       b=b>>1;
//     }
//     return ans;
//   }
// int main(){
//   int a=3,b=13;
//   cout<<fun(a,b);
// }
