#include<iostream>
using namespace std;
int fun(int n){
    if(n==0)
      return 1;
    return fun(n-1) * n; 
}
int main(){
    cout<<fun(5);
    return 0;
}
