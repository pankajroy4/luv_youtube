// #include<bits/stdc++.h>
// using namespace std;
// int main(){
	// int t,n;
	// int sum;
	// cin>>t;
	// while(t--){
	// 	sum=0;
	// 	cin>>n;
	// 	while(n>0){
	// 		sum+=n%10;
	// 		n/=10;
	// 	}
	// 	cout<<sum<<endl;
	// }
// }
/*
Sample Input:
3
125678
7635237
89524135
*/

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n,y;
// 	    cin>>n;
// 	    string s;
// 	    cin>>s;
// 	    int num = stoi(s, 0, 2);
// 	    int max,prev=num;
// 	    for(int i=1;i<=abs(num);i++){
// 	        max=num^(num>>i);
// 	        if(max>=prev){
// 	            prev=max;
// 	            y=i;
// 	        }
// 	    }
// 	    cout<<y<<endl;
// 	}
// 	return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
cout<<(2>>2)<<endl;
cout<<(2^2);

	return 0;
}