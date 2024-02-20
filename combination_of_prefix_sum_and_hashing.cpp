/*
Starting with a 1-indexed array of zeros and a list of operations, for 
each operation add a value to each the array element between two given
indices, inclusive. Once all operations have been performed, return the 
maximum value in the array.

Example
Queries are interpreted as follows:
    a b k
    1 5 3
    4 8 7
    6 9 1
Add the values of k between the a indices  and  b inclusive:
index->	 1 2 3  4  5 6 7 8 9 10
		[0,0,0, 0, 0,0,0,0,0, 0]
		[3,3,3, 3, 3,0,0,0,0, 0]
		[3,3,3,10,10,7,7,7,0, 0]
		[3,3,3,10,10,8,8,8,1, 0]
The largest value is 10 after all operations are performed.
return 10;
Constraints:
3 <= n <= 10^7
1 <= m <= 2*10^5
3 <= a <= b <= n
0 <= k <= 10^9

Input Format

The first line contains two space-separated integers n and m, the size of the array and the number of operations.
Each of the next  lines contains three space-separated integers a ,b and k, the left index, right index and summand

Sample Input
5 3
1 2 100
2 5 100
3 4 100
Sample Output
200
Explanation
After the first update the list is 100 100 0 0 0.
After the second update list is 100 200 100 100 100.
After the third update list is 100 200 200 200 100.

The maximum value is 200
*/

#include <bits/stdc++.h>
using namespace std;
const int N=1e7+5;
long long arr[N];
int main(){
    int n,t;
    cin>>n>>t;
    while(t--){
        int a,b,k;
        cin>>a>>b>>k;
        arr[a]+=k;             ///Hashing
        arr[b+1]-=k;
    }
    for(int i=1;i<=n;i++){
        arr[i]=arr[i]+arr[i-1];   // prefix sum
    }
    long long max=-1;
    for(int i=1;i<=n;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    cout<<max;
}
