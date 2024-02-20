/*
Given array arr of N integer. Given T test cases and in each test case given L and R. Print sum of array elemnt from L to R (L , R included)
CONSTRAINTS:
1 <= N <= 10^5
1 <= arr[i] <= 10^9
1 <= T <= 10^5
1 <= L,R <= N
*/
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
long long arr[N];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){  // 1 indexed based
		int x;
		cin>>x;
		arr[i]=x+arr[i-1];
	}
	int t;
	cin>>t;
	while(t--){
		int L,R;
		cin>>L>>R;
		cout<<arr[R]-arr[L-1]<<endl;
	}
}
/*
Sample input:
6
3 6 2 8 9 2
4
2 3
4 6
1 5
3 6
Sample Output:
8
19
28
21

*/