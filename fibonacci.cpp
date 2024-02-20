/*
Given T test cases. For each test cases given a single integer X.
Print Xth fibonacci number Modulo M.
CONSTRAINTS:
1 <= T <= 10^5
1 <= X <= 90
*/
#include<bits/stdc++.h>
using namespace std;
const int X= 95;
long long hash_array[X];
int main(){
	hash_array[1]=0;  // we consider 1 indexed based Array.
	hash_array[2]=1;
	for(int i=3;i<=X;i++){   // pre-computation
		hash_array[i]=hash_array[i-1]+hash_array[i-2];
	}
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		cout<<hash_array[x]<<endl;  // do't need to do x-1 , becz array is  
	}							    //              1 indexed based.
}
/*
Sample Input:
5
1
3
25
9
42
*/