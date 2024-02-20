// #include<bits/stdc++.h>
// using namespace std;
// int binary_search(int arr[],int n,int x){
// 	int low=0,hi=n-1,mid;
// 	while(hi-low>1){
// 		mid=(low+hi)/2;
// 		if(x>arr[mid])
// 			low=mid+1;
// 		else
// 			hi=mid;
// 	}
// 	if(arr[low]==x)
// 		return low;
// 	else if(arr[hi]==x)
// 		return hi;
// 	else
// 		return -1;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	sort(arr,arr+n);
// 	int x;
// 	cin>>x;
// 	int ans=binary_search(arr,n,x);
// 	if(ans!=-1)
// 		cout<<"Present at "<<ans<<endl;
// 	else
// 		cout<<"Not present"<<endl;
// 	auto fun=[](int x){return (x%2==0?"Even":"Odd");};
// 	cout<<fun(arr[ans])<<endl;
// 	return 0;
// }


#include<algorithm>
#include<iostream>
using namespace std;
void binarySearch(int *p,int x){
    int low=0,hi=9;
    while((hi-low)>1){
        int mid=(low+hi)/2;
        if(p[mid]>x)
            hi=mid-1;
        else
            low=mid;
    }
    if(p[low]==x)
        cout<<"find at "<<low+1<<" position\n";
    else if(p[hi]==x)
        cout<<"find at "<<hi+1<<" position\n";
    else
        cout<<"Not found\n";
}
int main(){
    int arr[10]={12,10,15,9,3,8,14,5,18,14};
    sort(arr,arr+10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int f;
    cin>>f;
    binarySearch(arr,f);
    return 0;
}