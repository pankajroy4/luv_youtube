#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> sub_gen(vector<int>& arr){
	int n=arr.size();
	int subset_ct=(1<<n);
	vector<vector<int>> subsets;
	for(int mask=0;mask<subset_ct;mask++){
		vector<int> subset;
		for(int i=0;i<n;i++){
			if( (mask & (1<<i))!=0 )
				subset.push_back(arr[i]);
		}
		subsets.push_back(subset);
	}
	return subsets;
}
// 0 -> 000 , no bit is set => []
// 1 -> 001 ,0th bit is set => [1]
// 2 -> 010 ,1st bit is set => [4]
// 3 -> 011 ,0th and 1st bit is set => [1,4]
// 4 -> 100 ,2st bit is set => [3]
// 5 -> 101 ,0th and 2nd bit is set => [1,3]
// 6 -> 110 ,1st and 2nd bit is set => [4,3]
// 7 -> 111 ,0th ,1st and 2nd bit is set => [1,4,3]
int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	auto p=sub_gen(v);
	for(auto x:p){
		cout<<"[";
		for(auto i:x){
			cout<<i<<",";
		}
		cout<<"]\n";
	}
}