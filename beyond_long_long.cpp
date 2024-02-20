#include<bits/stdc++.h>
using namespace std;
int main(){
	auto func=[](int x,int y){return x+y;};
	cout<<func(5,3)<<endl;
	cout<<[](int x){return x+2;}(8)<<endl;
	auto check=[](int x){return (x%2==0?"Even":"odd");};
	cout<<check(5);
}