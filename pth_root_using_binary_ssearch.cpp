#include<bits/stdc++.h>
using namespace std;
double multiply(double mid,int root){
	double ans=1;
	for(int i=0;i<root;i++)
		ans*=mid;
	return ans;
}
const double eps=1e-6;//precision upto 5 decimal palace
int main(){
	double x;
	cin>>x;
	int root;
	cin>>root;
	double low=0,hi=x,mid;
	while(hi-low>eps){
		mid=(low+hi)/2;
		if(multiply(mid,root)<x)
			low=mid;
		else
			hi=mid;
	}
	cout<<low<<endl;
	   //or
	cout<<hi<<endl;
	return 0;
}