/* 
Given T test cases and in each test case a number N. Print its factorial for each test case %M
 where M=10^9+7
 CONSTRAINTS
 1 <= T <= 10^5
 1 <= N <= 10^5
*/
#include<bits/stdc++.h>
using namespace std;
const long long M=1e9+7;
const long long N=1e5+10;
long long fact[N];
int main(){
	fact[0]=fact[1]=1;
	for(int i=2;i<N;i++){
		fact[i]=fact[i-1]*i %M;
	}
	int t;
	cin>>t;
	while(t--){
		long long x;
		cin>>x;
		cout<<fact[x]<<"\n";
	}
	return 0;
}
/*
Sample Input:
5
12
6
8
4
13
*/