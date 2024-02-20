#include<iostream>
#include<vector>
using namespace std;
void swap(int &a,int &b){
		int temp=a;
		a=b;
		b=temp;
}
void selections_sort(vector<int> &arr,int n){
	bool flag=false;
	int min_index;
	for(int i=0;i<n-1;i++){
		min_index=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min_index]){
				min_index=j;
				flag=true;
			}
		}
		if(flag)
			swap(arr[i],arr[min_index]);
	}
}
int main(){
	vector<int> v={19,12,11,28,25,9,8};
	cout<<"Before sorting:"<<endl;
	for(int x:v){
		cout<<x<<" ";
	}
	selections_sort(v,7);
	cout<<endl<<"After sorting:"<<endl;
	for(int x:v){
		cout<<x<<" ";
	}
}