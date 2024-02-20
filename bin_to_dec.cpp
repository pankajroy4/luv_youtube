// Given binary number as string

// #include<bits/stdc++.h>
// using namespace std;
// int bin_to_dec(string s){
// 	int l=s.size()-1;
// 	int dec=0;
// 	int i=0;
// 	int x;
// 	while(l>=0){
// 		x=s[l]-'0';
// 		dec+=x*((long long)pow(2,i));
// 		++i;
// 		--l;
// 	}
// 	return dec;
// }
// int main(){
// 	string s="1001";
// 	cout<<bin_to_dec(s);
// 	return 0;
// }

//Given binary number as numeric-------------------------------

// #include<bits/stdc++.h>
// using namespace std;
// int bin_to_dec(int n){
// 	int dec=0;
// 	int rem;
// 	int i=0;
// 	while(n>0){
// 		rem=n%10;
// 		n/=10;
// 		dec+=rem*((long long)pow(2,i));
// 		++i;
// 	}
// 	return dec;
// }
// int main(){
// 	int s=101;
// 	cout<<bin_to_dec(s);
// 	return 0;
// }

// Most optimized:-------------------------------------
/*
Input Format:
First Line : Integer  that denotes number of test cases .
For each Test Case : Binary String.
Output Format:
For each Test case, print Single Line integer of given binary.
CONSTRAINTS:
1 <= T <= 10^4
1 <= length of string <= 60
*/
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		string s;
// 		cin>>s;
// 		long long dec=0;
// 		long long power2=1;
// 		for(int i=s.size()-1;i>=0;i--){
// 			int digit=s[i]-'0';
// 			dec=dec+( digit * power2);
// 			power2=power2 *2;
// 		}
// 		cout<<dec<<endl;
// 	}
// 	return 0;
// }
/*
Sample  input:
3
0001
10
1010
*/

/*Decimal to Binary:*/
#include<iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	int rem,prod=1,binary=0;
	while(num!=0){
		rem=num%2;
		binary+=(prod*rem);
		num=num/2;
		prod*=10;
	}
	cout<<binary<<endl;
}