// #include<iostream>
// using namespace std;
// int fun(int n,int a[]){
//     if(n<0){
//         return 0;
//     }
//    return fun(n-1,a)+a[n];
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     cout<<fun(5,arr);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> divisor[N];
int sum[N];
int main(){
  for(int i=1;i<N;i++){
    for(int j=i;j<N;j+=i){
      divisor[j].push_back(i);
      sum[j]+=i;
    }
  }
  for(auto i=1;i<=10;i++){
    for(auto x:divisor[i]){
            cout<<x<<" ";
    }
    cout<<endl;
  }
  cout<<"SUM"<<endl;
  for(int i=1;i<=10;i++){
    cout<<"sum of divisor of "<<i<<":"<<sum[i]<<endl;
  }
  return 0;
}