#include<iostream>
using namespace std;
int gcd(int a,int b){
	if(b==0)
		return a;
	return gcd(b,a%b);
	
}
int main(){
	int a=4;
	int b=12;
	cout<<"GCD OF 4,12="<<gcd(a,b)<<endl;
	cout<<"GCD OF 18,12="<<gcd(18,12)<<endl;
	cout<<"LCM OF 18,12="<<12*18/gcd(18,12)<<endl; //using formula
}