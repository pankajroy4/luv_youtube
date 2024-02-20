// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n;
// 		cin>>n;
// 		vector<int> v(n+1,0);
// 	    for(int i=1;i<=n;i++){
// 	    	cin>>v[i];
// 	    }
// 	    int max_val=-1;
// 	    for(int j=n;j>1;j--){
// 	    	for(int i=j;i>=1;i--){
// 	    		if((__gcd(v[j],v[i]))==1 ){
// 	    			if((i+j)>max_val)
// 	    				max_val=i+j;
// 	    		}
// 	    	}
// 	    }
// 	    cout<<max_val<<endl;
// 	}
// 	return 0;
// }

// 6
// 3
// 3 2 1
// 7
// 1 3 5 2 4 7 7
// 5
// 1 2 3 4 5
// 3
// 2 2 4
// 6
// 5 4 3 15 12 16
// 5
// 1 2 2 3 6


// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int a,b;
// 		cin>>a>>b;
// 		vector<int> v(a,0);
// 		vector<int> p(b,0);
// 	    for(int i=0;i<a;i++){
// 	    	cin>>v[i];
// 	    }
// 	    for(int i=0;i<b;i++){
// 	    	cin>>p[i];
// 	    }
// 	    long long sum=0;
// 	    for(int i=0;i<b;i++){
// 	    	for(int j=0;j<a;j++){
// 	    		if(v[j]<=p[i])
// 	    			sum+=v[j];
// 	    		else
// 	    			break;
// 	    	}
// 	    	cout<<sum<<" ";
// 	    	sum=0;
// 	    }
// 	    cout<<endl;
// 	 }
// 	return 0;
// }
/* Sample Input
3
4 5
1 2 1 5
1 2 4 9 10
2 2
1 1
0 1
3 1
1000000000 1000000000 1000000000
1000000000

output:
1 4 4 9 9 
0 2 
3000000000 
*/

#include<iostream>
using namespace std;
int fun(int a,int b){
  int result=1;
  while(b){
  	if(b&1){
  		result=result*a;
  	} 
  	a=a*a;
  	b=b>>1;
 }
 return result;
}

int main(){
  int a=2;int b=2;
  cout<<fun(a,b)<<endl;
}