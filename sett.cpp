#include<bits/stdc++.h>
using namespace std;
int funn(int a,int b){
	int lcmm;
	if(a>b)
   		lcmm = a;
   	else
   		lcmm = b;
   	while(1) {
      	if( lcmm%a==0 && lcmm%b==0 )
			break;
      	lcmm++;
   	}
	return lcmm;
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int sett=0;
	int i=1;
	int p=1;
	while(p<=c){
		if( (i%a==0) || (i%b==0)){
			sett=i;
			p++;
		}
		i++;		
	}
	int step=0;
	int x=sett;
	if(x%a==0 && x%b==0)
		step=funn(a,b);
	else if(x%a==0)
		step=a;
	else
		step=b;
	for(int i=x;i>=0;i-=step){
		cout<<i<<" ";
	}
}