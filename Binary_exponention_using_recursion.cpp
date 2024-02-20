/*
#include<iostream>
using namespace std;
int fun(int a,int b){
  if(b==0)
    return 1;
  if(b&1)
    return a*fun(a,b/2)*fun(a,b/2);//calling same function twice 
  else
    return fun(a,b/2)*fun(a,b/2);//calling same function twice   
}
int main(){
  int a=2;int b=4;
  cout<<fun(a,b)<<endl;
}
*/
/*
But, above code have to much call, so take more time.
As we are calling same function twice, so, first we call it, and store it's return value, then pass this value.*/

#include<iostream>
using namespace std;
int fun(int a,int b){
  if(b==0)
    return 1;
  long long res=fun(a,b/2);
  if(b&1)
    return a*res*res;
  else
    return res*res;   
}
int main(){
  int a=2;int b=4;
  cout<<fun(a,b)<<endl;
}

// If We have to take modulo M
// #include<iostream>
// using namespace std;
// const int M=1e9+7;
// int fun(int a,int b){
//   if(b==0)
//     return 1;
//   long long res=fun(a,b/2);
//   if(b&1)
//     return (a*((res* 1ll* res)%M) %M);
//   else
//     return (res* 1ll* res)%M;   
// }
// int main(){
//   int a=2;int b=4;
//   cout<<fun(a,b)<<endl;
// }
