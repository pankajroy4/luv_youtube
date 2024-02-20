/*Given the input of one line, having words separated by a single space, print each word of the input, each in a new line.
Also, change all the alphabets to uppercase along with doing this.
Sample Input:
subscribe to the luv channel
Sample Output:
SUBSCRIBE
TO
THE
LUV
CHANNEL
*/
#include<bits/stdc++.h>
using namespace std;
char upper(char x){
        return (x-'a')+'A';
    }
int main(){
    while(1){
        string s;
        cin>>s;
        if(s.size()==0)
            break;
        for(int i=0;i<s.size();i++)
            s[i]=upper(s[i]);
        cout<<s<<endl;
    }
    return 0;
}

// solution 2:
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     string s;
//     for(int i=0;i<str.size();i++){
//         if(str[i]!=' ')
//             s.push_back(toupper(str[i]));
//         else{
//             cout<<s<<endl;
//             s="";
//         }
//     }
//     cout<<s;
//     return 0;
// }
