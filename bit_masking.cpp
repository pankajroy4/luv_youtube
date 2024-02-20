/*
Q. There are N≤5000 workers. Each worker is available during some days of this month 
(which has 30 days). For each worker, you are given a set of numbers, each from interval [1,30], representing his/her availability. You need to assign an important project to two workers but they will be able to work on the project only when they are both available. Find two workers that are best for the job — maximize the number of days when both these workers are available.
Input:
First line: No. of employee no_emp.
for each emp, follow two line: no_of days, and the days.
Output:
max_common day,emp1 and emp2.
SAMPLE INPUT:
5
4
1 4 7 9
6
2 9 1 7 25 29
7
1 23 4 7 9 11 29
10
1 28 8 7 9 10 30 21 18 19
4
1 11 29 7
SAMPLE OUTPUT:
4
0 2
Solution:*/
#include<bits/stdc++.h>
using namespace std;
int main(){
  int no_emp;
  cin>>no_emp;
  int no_em=no_emp;
  vector<int> masks;
  while(no_em--){
    int n;
    cin>>n;
    int mask=0;
    for(int i=0;i<n;i++){
      int day;
      cin>>day;
      mask=(mask | (1<<day));
    }
    masks.push_back(mask);
  }
  int max_days=0;
  int p1=-1;int p2=-1;
  for(int i=0;i<no_emp;i++){
    for(int j=i+1;j<no_emp;j++){
        int intersection= (masks[i] & masks[j]);
        int common_days= __builtin_popcount(intersection);
        if(common_days>max_days){
            max_days=common_days;
            p1=i;
            p2=j;
        }
    }
  }
  cout<<max_days<<endl<<p1<<" "<<p2<<endl;
  return 0;
}