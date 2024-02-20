
Question: Super pow LeetCode
Your task is to calculate ab mod 1337 where a
is a positive integer and b is an extremely 
large positive integer given in the form of an
array. 1337 is not a prime number.
Example 1:
Input: a = 2, b = [3]
Output: 8

Example 2:
Input: a = 2, b = [1,0]
Output: 1024

Example 3:
Input: a = 1, b = [4,3,3,8,5,2]
Output: 1
 
Constraints:
1 <= a <= 231 - 1
1 <= b.length <= 2000
0 <= b[i] <= 9
b does not contain leading zeros.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int binexp(int a,int b,int m){
        a=a%m;
        int ans=1;
        while(b>0){
            if(b&1)
                ans=(ans*1ll*a) % m;
            a=(a*1ll*a) % m;
            b=b>>1;
        }
        return ans;
    }
    
    int superPow(int a, vector<int>& b) {
        int num=0;
        for(int x:b){
            num=(num*10+x)%1140;
        }
        return binexp(a,num,1337);
    }
};

int main(){
  int vector<int> v={1,0};
  int a=2;
  solution s;
  int x=s.superPow(a,v);
  return 0;
}