/*
Given  2D array arr of N*N integers. Given T test cases and in each test cases given a,b,c,d . Print sum of square represented by (a,b) as top left point and (c,d) as bottom right point.
CONSTRAINTS:
1 <= N <= 10^3
1 <= arr[i][j] <= 10^9
1 <= T <= 10^5
1 <= a,b,c,d <= N
*/

//NORMAL VERSION:
// #include<bits/stdc++.h>
// using namespace std;
// const int N=1e3+10;
// int arr[N][N];
// int main(){
// 	int n;
// 	cin>>n;
// 	for(int i=1;i<=n;i++){
// 		for(int j=1;j<=n;j++){
// 			int x;
// 			cin>>x;
// 			arr[i][j]=x;
// 		}
// 	}
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int a,b,c,d;
// 		cin>>a>>b>>c>>d;
// 		long long sum=0;
// 		for(int i=a;i<=c;i++){
// 			for(int j=b;j<=d;j++){
// 				sum+=arr[i][j];
// 			}
// 		}
// 		cout<<sum<<endl;
// 	}
// }

// OPTIMIZED VERSION:
#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int arr[N][N];
int main(){           // 26 24
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int x;
			cin>>x;
			arr[i][j]= x + arr[i][j-1] + arr[i-1][j] - arr[i-1][j-1];
		}
	}
	int t;
	cin>>t;
	while(t--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		cout<<arr[c][d] - arr[a-1][d] - arr[c][b-1] + arr[a-1][b-1]<<endl;
	}
}
/*
0 0 0 0 
0 3 6 2 
0 8 9 2
0 3 4 1
--------
0   0   0   0
0   3   9  11
0  11  26  30
0  14  33  38
*/