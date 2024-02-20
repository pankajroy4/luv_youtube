#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	bool flag;
	string str;
	cin>>t;
	cin.ignore();
	while(t--){
		flag=true;
		getline(cin,str);
		for(int i=0,j=str.size()-1;i<j;i++,j--){
			if(str[i]!=str[j]){
				cout<<"NO"<<endl;
				flag=false;
				break;
			}
		}
		if(flag)
			cout<<"YES"<<endl;	
	}
}
/*
Sample input:
7
NAMAN
ABCDCBA
JAPANA
POP
ROTATOR
REFERS
MALAYALAM
*/