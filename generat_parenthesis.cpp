/*
Q.You are given a number N.you have to generate the vectors of all the poissible pairs of parenthesis can obtain by N opening and N closing parenthesis. 
Eg: N=2
 output: { (()),()()}
*/
#include <iostream>
#include<string>
#include<vector>
using namespace std;
vector<string> v;
void generate(string &s,int open,int close){
	if(open==0 && close==0){
		v.push_back(s);
		return;
	}
	if(open>0){
		s.push_back('(');
		generate(s,open-1,close);
		s.pop_back();
	}
	if(close>0){
		if(open<close){
			s.push_back(')');
			generate(s,open,close-1);
			s.pop_back();
		}
	}
}
int main(){
 	int n;
 	cin>>n;
 	string s;
 	generate(s,n,n);
 	for(string s:v){
 		cout<<s<<endl;
 	}
}
