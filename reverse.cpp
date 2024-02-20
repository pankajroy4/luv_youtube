#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        string s1;
        for(char ch:s){
            s1.push_back(ch);
        }
        if(s1=="YES"){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<endl;
    }
}
