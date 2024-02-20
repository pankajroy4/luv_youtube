/*
Q.Given size n and an  array arr of unique elements,returns all possible subset.
The Solution set must not contain duplicte subset. Returnn the solution in 
any order.
input: arr=[1,2,3]
output: [ [],[1],[2],[3],[1,2],[1,3],[2,3],[1,2,3] ]
input: arr=[0]
output: [ [],[0] ]
*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<vector<int>> result;
void generate(vector<int> &subset,int i,vector<int> &arr){
	if(i==arr.size()){
		result.push_back(subset);
		return;
	}
	generate(subset,i+1,arr);
	subset.push_back(arr[i]);
	generate(subset,i+1,arr);
	subset.pop_back();
}
int main(){
	vector<int> arr;
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		arr.push_back(x);
	}
	vector<int> subset;
	generate(subset,0,arr);
	for(auto x:result){
		for(auto z:x){
			cout<<z<<" ";
		}
		cout<<endl;
	}
}

// part:39 .practise question