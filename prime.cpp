/*
Given test cases and a number. Check whether it is prime or not, if yes then print YES else print NO.
CONSTRAINTS:
1 <= T <= 10^9
1 <= N <=10^9
INPUT FORMAT:
first line single integer T ,the no. test cases
next T lines contains single integer N
*/
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int  N,T,n,i;
// 	cin>>T;
// 	while(T--){
// 		cin>>N;
// 		n=(int)sqrt(N)+1;  //<-----Always do plus 1.
// 		for(i=2;i<n;++i){
// 			if(N%i==0){
// 				cout<<"NO"<<endl;
// 				break;
// 			}
// 		}
// 		if (i==n)
// 			cout<<"YES"<<endl;
// 	} 
// 	return 0;
// }


// Q.Largest Sum contiguous Subarray
#include<iostream>
using namespace std;
int largestSum(int *arr,int n){
	int current=0;
	int total=INT_MIN;
	for(int i=0;i<n;i++){
		current+=arr[i];
		if(total<current){
			total=current;
		}
		if(current<0){
			current=0;
		}
	}
	return total;
}
int main(){
 	int arr[8]={-2,-3,4,-1,-2,1,5,-3};
 	cout<<largestSum(arr,8);
}
// ans:[4,-1,-2,1,5] .i.e 7