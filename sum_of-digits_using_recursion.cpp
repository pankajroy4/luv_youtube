// #include<iostream>
// using namespace std;
// int fun(int n){
//     if(n==0)
//       return 0;
//     return fun(n/10) + n%10; 
// }
// int main(){
//     cout<<fun(123456);
//     return 0;
// }

  #include<bits/stdc++.h>
  using namespace std;
  const int N=1e7+10;
  vector<bool> prime(N,1); //assume all num as prime.
  vector<int> highest_prime(N,0);
  vector<int> lowest_prime(N,0);
  int main(){
    prime[0]=prime[1]=false;
    for(int i=2;i<N;i++){
      if(prime[i]){
        lowest_prime[i]=highest_prime[i]=i;
        for(int j=2*i;j<N;j+=i){ //marks all multiple 
          prime[j]=false;
          highest_prime[j]=i;
          if(lowest_prime[j]==0)
            lowest_prime[j]=i;
        }
      }
    }
    int x;
    cin>>x;
    map<int,int> prime_factorization;
    while(x>1){
      int pf=highest_prime[x];
           //or
      //int pf=lowest_prime[x];
      while(x%pf==0){
        x=x/pf;
        prime_factorization[pf]++;
      }
    }
    for(auto factor:prime_factorization){
      cout<<factor.first<<" "<<factor.second<<endl;
    }
  }