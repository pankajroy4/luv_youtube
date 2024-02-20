/*
Given array arr of N integers. Given T test cases and in each test cases given a number x, print the count of that number in that array.
Also print the sum of all element Modulo 10^9+7.
CONSTRAINTS:
1 <= N <= 10^5
1 <=arr[i] <= 10^7
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
		arr[i]=x;            //TIME COMPLEXITY O(n)
		hash_array[x]++;
		sum+=x % M;
	}
	int t;
	cin>>t;
	while(t--){
		int y; 				//TIME COMPLEXITY O(t)                   
		cin>>y;
		cout<<hash_array[y]<<endl;
	}
	cout<<sum;
	return 0;
	//Total time completity:
		// O(n)+O(t) == O(n)    because n==t
}
/*
Sample Input:
9
1 2 3 4 1 2 1 4 9
3
1
6
9
*/