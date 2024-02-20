
/*
SAMPLE INPUT:
2            --test cases

6 2          ---length of string and nuumber of query.
abdedefcf    ---given string (1 indexed based)
1 1 	     ---Q1(substring  str(1,1) can be rearrange to make pelindrome?)
3 7          ---Q2(substring  str(3,7) can be rearrange to make pelindrome?)

7 2      	 ---length of string and nuumber of query.
abccdef		 ---given string
3 4			 ---Q1(substring  str(3,4) can be rearrange to make pelindrome?)
2 5			 ---Q2(substring  str(2,5) can be rearrange to make pelindrome?)
*/
//NORMAL SOLUTION 1:
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		string s;
		cin>>s;	
		while(q--){
			int L,R;
			cin>>L>>R;
			string str;
			for(int i=L-1;i<=R-1;i++){
				str.push_back(s[i]);
			}
			bool flag=true;
			int count_one=0;
			for(int i=0;i<str.size();i++){
				int counnt=count(str.begin(), str.end(),str[i]);
				if(counnt==1){
					count_one++;
				}
				else if(counnt!=2){
					flag = false;
				}
			}
			if(flag==true && (count_one==1 || count_one==0))
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
			str="";
		}
	}
}
*/

//NORMAL SOLUTION 2:
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		string s;
		cin>>s;	
		while(q--){
			int L,R;
			cin>>L>>R;
			int hash[26];
			for(int i=0;i<26;i++){
				hash[i]=0;
			}
			L--;R--;
			for(int i=L;i<=R;i++){
				hash[s[i]-'a']++;
			}
			int oddCT=0;
			for(int i=0;i<26;i++){
				if(hash[i] % 2!=0)
					oddCT++;
			}
			if(oddCT>1)
				cout<<"NO"<<endl;
			else
				cout<<"YES"<<endl;
		}
	}
}
*/
//MOST OPTIMIZED SOLUTION :

#include<bits/stdc++.h>
using namespace std;
const long long N=1e5+10;
int hsh[N][26];
int main(){
	int t;
	cin>>t;
	while(t--){
		for(int i=0;i<N;++i){
			for(int j=0;j<26;++j){
				hsh[i][j]=0;
			}
		}
		int n,q;
		cin>>n>>q;
		string s;
		cin>>s;	
		for(int i=0;i<n;++i){
			hsh[i+1][s[i]-'a']++;       // counting occurences
		}
		for(int i=0;i<26;++i){
			for(int j=1;j<=n;++j){       // prefix sum
				hsh[j][i] += hsh[j-1][i];
			}
		}
		while(q--){
			int L,R;
			cin>>L>>R;
			int oddCT=0;
			for(int i=0;i<26;i++){
				int charCT = hsh[R][i] - hsh[L-1][i];
				if(charCT % 2!=0)
					oddCT++;
			}
			if(oddCT>1)
				cout<<"NO"<<endl;
			else
				cout<<"YES"<<endl;
		}
	}
}

/*
  a  b  c  d  e  f  g  h  i   j  k  l  m   n  o  p  q  r  s  t  u  v  w  x  y  z
0 1  2  3  4  5  6  7  8  9  10  11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26
1 
2
3
4
5
6
7
8
9
.
.
.
N 

so , we will have 26 vertical array of size N
Row --1 based (i.e all cell of 0th row will have 0)
Column --0 based
*/

/*
SAMPLE INPUT:
2

5 5
abcec
1 2
2 5
3 5
1 5
1 4

5 5
aabbc
1 2
2 5
3 5
1 5
1 4
*/
// https://assessment.hackerearth.com/challenges/college/luv_youtube__cp_course_contest_2/