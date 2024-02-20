// // #include <bits/stdc++.h>
// // using namespace std;
// // int main() {
// // 	// your code goes here
// // 	int t;
// // 	cin>>t;
// // 	while(t--){
// // 	    int n;
// // 	    cin>>n;
// // 	    string s;
// // 	    cin>>s;
// // 	    int num = stoi(s, 0, 2);
// // 	    cout<<"From bin "<<num<<endl;
// // 	    if(num<0){
// // 	        num=num*(-1);
// // 	    }
// // 	    int max=num;
// // 	    int y;
// // 	    int d;
// // 	    int p;
// // 	    for(int i=1;i<=num;i++){
// // 	        p=num/(pow(2,i));
// // 	        cout<<"p="<<p<<endl;
// // 	        d=num^p;
// // 	        cout<<"d="<<d<<endl;
// // 	        if(d>=max){
// // 	            max=d;
// // 	            y=i;
// // 	        }
// // 	    }
// // 	    cout<<y<<endl;
// // 	}
// // 	return 0;
// // }
// // -----------------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;
// void printBinary(int x){
// 	for(int i=31;i>=0;i--){
// 		cout<<(1&(x>>i));
// 	}
// 	cout<<endl;
// }
// int main() {
// 	int x=13;
// 	printBinary(x);
// 	int count=0;
// 	for(int i=31;i>=0;i--){
// 		if((1&(x>>i))!=0)
// 			count++;
// 	}
// 	cout<<endl<<"Total set bits are "<<count;
// 	count=0;
// 	for(int i=31;i>=0;i--){
// 		if((~x & (1<<i))!=0)
// 			count++;
// 	}
// 	cout<<endl<<"Total unsset bits are "<<count;
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
	
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string hidd;
        string guess;
        cin>>hidd>>guess;
        string ans;
        for(int i=0;i<5;i++){
            if(hidd[i]==guess[i])
                ans.push_back('G');
            else
                ans.push_back('B');
        }
        cout<<ans<<endl;
    }
    return 0;
}