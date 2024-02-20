#include<bits/stdc++.h>
using namespace std;
const int N=5;
const int M=2;
int arr[M][N]={{1,2,3,4,5},{6,7,12,9,0}};

int fun(){
	int sum=0;
	for(int i=0;i<2;i++){
		for(int j=0;j<5;j++){
			sum+=arr[i][j];
		}
	}
	return sum;
}

int main(){
	cout<<fun();
	return 0;
}

