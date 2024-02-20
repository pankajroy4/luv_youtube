/*
Given array a of n integers. All integers are present iin even count except one.
Find that one integer which has odd count in O(N) time complexity and O(1) space.
Solution:
	As we know , XOR of two same integer is zero, So, here we took XOR on each elemnt ,last we left the number which is in odd count ,because XOR of zero with any number is the number itself
*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int result=0;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		result^=x;
	}
	cout<<result;
}

/*
Sample Input:
9
8 2 8 5 3 2 8 5 3
Output:
8 