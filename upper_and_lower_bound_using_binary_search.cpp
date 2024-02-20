#include<bits/stdc++.h>
using namespace std;
int upper_bound(int *arr,int n,int x){
	int low=0,hi=n-1,mid;
	while(hi-low>1){
		mid=(low+hi)/2;
		if(arr[mid]<=x)
			low=mid+1;
		else
			hi=mid;
	}
	if(arr[low]>x)
		return arr[low];
	else if(arr[hi]>x)
		return arr[hi];
	else
		return -1;
}
int lower_bound(int *arr,int n,int x){
	int low=0,hi=n-1,mid;
	while(hi-low>1){
		mid=(low+hi)/2;
		if(arr[mid]<x)
			low=mid+1;
		else
			hi=mid;
	}
	if(arr[low]>=x)
		return arr[low];
	else if(arr[hi]>=x)
		return arr[hi];
	else
		return -1;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int x;
	cin>>x;
	sort(arr,arr+n);
	cout<<upper_bound(arr,n,x)<<endl;
	cout<<lower_bound(arr,n,x)<<endl;
	return 0;
}