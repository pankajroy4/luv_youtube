/*
Jiya likes a sequence if all its elements when multiplied yields a number , whose least significant digit is either 2, 3 or 5
Print "YES" or "NO",whether Jiya likes the sequence or not.
Sample Input
2
5
2 2 2 2 2
4
2 2 2 2
Sample Output
YES
NO
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    long long mul;
    while(t--){
        int r;
        cin>>r;
        mul=1;
        for(int i=0;i<r;i++){
            int x;
            cin>>x;
            mul*=x;
        }
        int res=mul%10;
        if( res==2 || res==3 || res==5)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
