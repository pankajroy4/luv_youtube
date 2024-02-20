#include<bits/stdc++.h>
using namespace std;
const int N=7;
int arr[N]={38,27,43,3,9,82,10};
void merge(int l,int r,int mid){
	// cout<<l<<","<<mid<<","<<r<<endl;
	int ls,rs;
	ls=mid-l+1;
	rs=r-mid;
	int LA[ls+1];
	int RA[rs+1];
	for(int i=0;i<ls;i++){
		LA[i]=arr[i+l];
	}
	for(int i=0;i<rs;i++){
		RA[i]=arr[i+mid+1];
	}
	LA[ls]=RA[rs]=INT_MAX;
	int li=0,ri=0;
	for(int i=l;i<=r;i++){
		if(LA[li] <= RA[ri]){
			arr[i]=LA[li];
			li++;
		}else{
			arr[i]=RA[ri];
			ri++;
		}
	}
	// for(int i=0;i<7;i++){
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;
}
void merge_sort(int l,int r){
	// cout<<l<<","<<r<<endl;
	if(l==r)return;
	int mid=(l+r)/2;
	merge_sort(l,mid);
	merge_sort(mid+1,r);
	merge(l,r,mid);
}
int main(){
	merge_sort(0,6);
	for(int i=0;i<7;i++){
		cout<<arr[i]<<" ";
	}
}