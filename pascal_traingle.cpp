#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[5][5];
	arr[0][0]=1;
	for(int i=1;i<5;i++){
		arr[i][0]=1;
		arr[i][i]=1;
		for(int j=1;j<i;j++){
			arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
		}
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<=i;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

}

