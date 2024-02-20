/*
Given array arr of N integers. Given T test cases and in each test cases given a number x, print the count of that number in that array.
Also print the sum of all element Modulo 10^9+7.
CONSTRAINTS:
1 <= N <= 10^5
-6 <=arr[i] <= 10^7
1 <= T <= 10^5
*/
#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10; 
const int M=1e9+7;
int hash_array[N];
int main(){
	int n;
	cin>>n;
	int arr[n];
	long long sum=0;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		sum+=x % M;
		arr[i]=x;           
		hash_array[x+6]++;
	}
	int t;
	cin>>t;
	while(t--){
		int y; 			                 
		cin>>y;
		cout<<hash_array[y+6]<<endl;
	}
	cout<<sum;
	return 0;
}
/*
Sample Input:
9
-2 12 5 -4 -2 -4 5 6 -4
3
-4
5
12
Output:
3
2
1
12
*/