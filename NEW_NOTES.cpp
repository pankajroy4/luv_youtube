/*
RANGE:
-10^9 < int < 10^9
-10^12 < long int < 10^12
-10^18 < long long int < 10^18
int max= INT_MAX;  <--- max defined value 
*/
// --------------------------------------------

int a=100000;
int b=100000;
long long c=a* 1LL *b; this is right expression
------------------------------------------------
double x=c;
cout<<fixed<<c<<endl; the keyword "fixed" convert
 scientific notation in to power of 10.
cout<<fixed<<setprecision(0)<<c<<endl; controling 
precision. 0 means no decimial
--------------------------------------------------

while checking prime, after finding sqrt , always 
do plus 1 in it.
  n=sqrt(N)+1;  //<-----Always do plus 1.
--------------------------------------------------
int l,b;
cout<< l* 1LL * b;  do multiply with 1LL if 
range of 1*b is beyond 10^9  
---------------------------------------------------
To get last n digit of a number num:
  num%10^n
To remove last n digits of a number num:
  num /10^n
--------------------------------------------------
cin --> stop accepting input as it see space or 
new line. it do not capture new line character or 
space
getline() -->when it see new line,it capture and 
store new line and stop taking input. if we want 
to not consider a patricular new line then we can
use cin.ignore() just before getline().
--------------------------------------------------
Never add a charcater in a string . Instead of 
adding a character in string we can use 
str.push_back(ch) function.Example- reverse a 
string.
-------------------------------------------------
To take a number as input which is beyond the 
range of long long int i.e greater than 10^18,
then take such number as string input.to perform 
any operation on this number first convert each
character in int by substracting it by 48 or '0' 
i.e ASCII of zero. 
-------------------------------------------------
# Arrays always passed as reference by default to a 
function.
Array size can be:
Globally:Created in data Segment
  By default all cell initialished with default 
  value of data type.
  Size can be in order of 10^7 i.e 2*10^7,6*10^7 etc.
  NOTE:
    int arr[1e7]; this is wrong beacuse 1e7 is a 
    value of type double.
    so , to solve it we have two option:
      int arr[(int)1e7]
      or
      const int N=1e7;
      int arr[N]
  ex:
    const int N= 5*1e7;
    int arr[N]
    const int M=1e7;
    int brr[M];
Locally: Created in Stack
  Do't get initialied automatically.so garbage value.
  Size can of order of 10^5 i.e 2*10^5 , 6*10^5 etc.
  ex:
    arr[(int)1e5];
    brr[(int)5*1e5];
    const int N= 8*1e5;
    int arr[N];
We shold always avoid to pass array to a function 
which is created in main().
Instead of this we should declare that array 
globally according to given constraints.So, we 
can directly acces them anywhere.
2-D Array:
when we pass 2-D array to a function then in 
the argument , column size is necessary.
----------------------------------------------
#4.
c++ swap() function. it swap the two given value
ex:int a=5; int b= 8;
  cout<<a<<" "<<b<<endl;
  swap(a,b);
  cout<<a<<" "<<b<<endl;
----------------------------------------------
TIME COMPLEXITY:
Iteration in 1 sec , generally on cp platform:
in range of (10^7)
so total iteration i.e time complexity of our 
code should be less than equal to 10^7
Q.What is the time complexity of following?
  N<10^5
  int main(){
    int n;
    cin>>n;
    while(n>0){
        n=n/2;
    }
  }
  Ans: O(LogN).
  it means how many times we can time n by 2 
  to reduce it to zero.
  let that we can divide it a times,this means:
            2^a=N
            taking log with base 2 both side.
            (a)Log(2)=Log(N)  (with base 2)
            so:
              a=log(N)
            so, total iteration i.e a= Log(N),
            so it will be time complexity of 
            above code.
---------------------------------------------
#5.
Print the answer Modulo M i.e( ans % M)
M=  10^9+7 ,it is a prime number , so we can 
find multiplicative inverse of all number 
between 1 to M.
Formulas:
        (a+b)%M = {(a % M) + (b % M )} % M
        (a*b)%M = {(a % M) * (b % M )} % M
        (a-b)%M = {(a % M) - (b % M ) + M } % M
        (a+/b)%M = {(a % M) * (b^-1)%M } % M
                          Note:b^-1 ,it means 
                          multiplicative inverse
-----------------------------------------------
Precomputation Techniques:
#include<bits/stdc++.h>
using namespace std;
const long long M=1e9+7;
const long long N=1e5+10;
long long fact[N];
int main(){
  fact[0]=fact[1]=1;
  for(int i=2;i<N;i++){
    fact[i]=fact[i-1]*i %M;
  }
  int t;
  cin>>t;
  while(t--){
    long long x;
    cin>>x;
    cout<<fact[x]<<"\n";
  }
  return 0;
}
-----------------------------------------------
#6.
erase() function
when we pass value then it erase all occurence 
of that value.When we pass iterator
(can get by find() function) then it delete that
value only. 
for vector ,we can only pass iterator,but for
set,map ,multimap,multiset etc, we can pass 
value(i.e Key) as well.
------------------------------------------------
Lambda Function;
syntax:
[](args list){return ......body;}(call)
         or
auto fun =[](args list){return...body;};
fun(5); <--- call
example:
1.cout<<[](int x){return x+2;}(4);  ---> output:6
2. auto myFun=[](int x,int y){return x+y;};
   cout<<myFun(2,4)<<endl  ----> output: 6
3. auto check=[](int x){return (x%2==0?"Even":"odd");};
   cout<<check(5);  ------>output: Odd
---------------------------------------------------
all_of(stating add.end add,func_name);
any_of(stating add.end add,func_name);
none_of(stating add.end add,func_name);
These function return true/false i.e. 1 or 0.
these function call the function fun_name for each 
vale in the given range and return the value.
#7.
all_of()
--> it returns true if the function  func_name
  returns true for all value of the given range,
  otherwise return flase
any_of()
--> it returns true if the function  func_name
 returns true for any one value of the given range,
 otherwise return flase
none_of()
--> it returns true if the function  func_name
 returns false for all of  value of the given range,
 otherwise return flase.
NOTE: in place of fun_name ,we can also define lambda
 functiom
 EG:
 vector<int> v={2,4,5};
 bool is_pos(int x){
  return x>0;
 }
 cout<<all_of(v,begin(),v.end(),is_pos); -->output: true
     or
 cout<<all_of(v.begin(),v.end(),[](int x){return x>0;});
  -->output: true
 eg:
  cout<<all_of(v.begin(),v.end(),[](int x){return x<0;});
   -->output: true
-------------------------------------------------------
#8.
#BINARY SEARCH:
Binary search alwyas implemented on monotonic 
function/series.
Monotonic Function/series always maintains a given
order.So we can can say,A sorted array is monotonic.
A function is return True for some value ans after
that it retuns False for reamining value. then it
will call as monotinic function. Example:
1 2 3 6 7 9  <-----Monotonic series, it maintains
a order of increasing
9 8 7 6 4 2 1 <------ Maintains a order of decreasing.
Lets Returned Value of Function is:
T T T F F F F F  >>>Monotonic function(T means true and
                                         F means false)
We use the concept of Mid index hi index and low index.
Condition: while(high-low>1)
  By this condition we only have to check only two 
  value,i.e value at indexes high and low.
  mid=(low+high)/2
SEARCH SPACE /SP`
  lets take a sorted increasing array:
  [1,2,3,4,5,6,7];
  we have to search 5
  at first, low=0,high=size_of_array-1;
  so this is our SP. now we calculate mid=(0+6)/2=3
  if arr[mid] >5: then our new SP willl be 
                      left of mid element,
  i.e 0 to mid-1 ,so high=mid-1
  else our sp will be left of mid(inclusive)
  so low=mid and so  on.
  In last we only have to compare with two element
  arr[low] and arr[high] with 5;
  ------------------------------------------------
  #9.
  NUMBER THEORY
  Binary Number:
  #.How binary number get evaluated?
  eg:
    Binary of 5 is 101
    101
     (2^2)*1 + (2^1)*0 + (2^0)*1
       4     +   0     +    1    =5

  * last bit of every odd numebr is always 1
  eg: 3->11, 5->101
  * last bit of every even number is always 0
  eg: 2->10, 4->100
  Operators for Binary manipulation:
   input1  |  input2  |  &(and)   | |(or) |  ^(XOR)
      0    |    0     |     0     |  0    |     0       
      0    |    1     |     0     |  1    |     1    
      1    |    0     |     0     |  1    |     1   
      1    |    1     |     1     |  1    |     0   
For XOR(if both bit is same then result will be 0,
                                       otherwise 1) 

!(NOT)
it convert 1 to 0 and 0 to 1
<< (left shift)
>> (right shift)
eg:
 5>>1=10
 5>>2=1
 beacuse binary of 5 is 101 ,so 101>>1=10 and 101>>2=1
 in right shift as many right-most bit is dropped 
                     by which it is shifted right
 in left shift as many 0 bit is added in last by 
                        which it is shifted left
eg:
5<<1=1010
5<<2=10100
#10.
In CPP ,int is of 32 bit,in which 1 bit is reserved
 for sign(for signed integer),so 31 bit is 
 available to store bits.So we can store the 
 maximum possible number of 31 bit.
INT_MAX is a maximum possible number that can be
 stored in 31 bit.
For unsinged integer all 32 bit is available to 
store bits.So we can store the maximum possible 
number of 32 bit.

#. In n bit ,the maximum possible number that can
 be stored is 2^n -1.
for eg.
In 4 bit,the maximum possible number that can be
 stored is 15,(2^4=16-1=15).
16 is 5 bit number.

in signed integer( in c++) we can use 31 bit, 
one bit is for sign(+/-).
in unsigned integer( in c++) we can use 32 bit 

Calculating power of 2 using left shift(<<):
1<<0=1     -- 1=2^0
1<<1=10    -- 2=2^1
1<<2=100   -- 4=2^2
1<<3=1000  -- 8=2^3 
and so on
#. So we can say, 
2^n=1<<n
----------------------------------------------
#11.
Operations on Binary Number:
Indexing(Starting from 0) of binary number is 
done from right to left, we call this nth position.
LSB(Least significant bit): it is the right-most 
bit. i.e. bit at 0th position 
MSB(Most significant bit): it is the left-most bit.
 i.e bit at nth position.
Bit is set or not set:
A bit is said 'Set' if it is 1.
A bit is said 'unset' if it is 0.

# Check that nth bit of a number is set or unset?
To solve this we have to find a number in which only nth bit is set.
* HOW WE WILL GET THIS NUMBER:
-->simple,
if we want a number which has only 0th bit as set,
                              we get it by 1<<0=1
if we want a number which has only 1st bit as set,
                              we get it by 1<<1=10
if we want a number which has only 2nd bit as set,
                              we get it by 1<<2=100
if we want a number which has only 3rd bit as set,
                              we get it by 1<<3=1000
After that we perform AND operation on the given 
number and this number.
By this we will get either non-zero or zero.
If we get Non-zero, then nth bit of the given
number is set.
If we get zero ,then nth bit of the given number is unset.
#12.
EXAMPLE:
Q.Check whether 1st bit of 5 is set or unset.
int ans=5&(1<<1);
if(ans!=0){
  cout<<"set"<<endl;
}
else
  cout<<"unset"<<endl;
Explanation:
  5=101
  1<<1=10 (only 1st bit is set) .NOTE 10 ,010, 
  0000010,00010 are same.
  101 & 10=000  -->so unset.

Q.check 2nd bit of 12 is set or unset?.
Binary of 12 is 1100.
int ans=12&(1<<2);
if(ans!=0){
  cout<<"set"<<endl;
}
else
  cout<<"unset"<<endl;

Explanation:

  12=1100
  1<<2=100 (only 2nd bit is set) .
  NOTE 100 and 00000100,000100 are same.
  1100 & 100=0100(non-zero)  -->so set.
----------------------------------------------
#13.
As we know,
if we want a number which has only nth bit as 
set,we get it by 1<<n,
But how can we get a n bit number which has all
bit set.
Solution:
#.we get it by (1<<n)-1
Reason: 1<<n  is a power of 2, and all bit of any
 number just before the number which is power of 2 is 1.
Eg:Get a 2 bit number whose all bit is set.ie.1.
  =>(1<<2)-1
  =>100-1    ,i.e(4-1)  
  =>100-001 (because 1,001,00001,000001 all are same)
  =>11 (binary of 3)
  =here all 2 bit are set.

Eg:Get a 3 bit number whose all bit is set.ie.1.
  =>(1<<3)-1
  =>1000-1 ,i.e(8-1) 
  =>1000-001 (because 1,001,00001,000001 all are same)
  =>111  (binary of 7)
  =here all 3 bit are set.

NOTE:
All number just before the number of 2^n has all bit 1.
eg. 8 is the power of 2.
    7 is just before number of 8
    all bit of 7 is 1
    7=111
------------------------------------------------------
#14.
Setting and unsetting nth bit of a number.
#setting bit.
Q.How can be set nth bit of a number x.
if nth bit a number is unset and we want it to set then
first we have to find a number which has only nth bit as 
set, after that we perform OR operation between the 
number X and this number.
So,General formula: x|(1<<n)
EG:
Q.set 2nd bit of 9.
Ans:
  =>9 |(1<<2)
  Explanation:
            =>9=1001
            =>1<<2=100
            =>1001 | 100
            =>1100, we get 2nd bit as set 

#Unsetting bit.
Q.How can be unset nth bit of a number x.
if nth bit a number is set and we want it to unset then 
first we have to find a number which has all bit set 
except  nth bit.
We can get such number by getting a number whose only 
nth bit is set(by 1<<n) and then invert them using 
~ operator. So we we get such number by ~(1<<n).
After geting this number we perform AND operation between
the given number x and this number.
So,General formula: x & (~(1<<n))
#15.
EG:Q.unset 2nd bit of 15.
Ans:
  =>15 & (~(1<<2))
  Explanation:
            =>15=1111
            =>(1<<2)=0100   
      (100,000100,00000000100,0000000000100 all are same)
            =>~(1<<2)=1011  
            =>1111 & 1011 
            =>1011
            here we unset the 2nd bit. 
--------------------------------------------------------
Toggle a bit:
Toggle means on/off ,if bit is 1 then it wiil coverted 
to 0 or vice versa.

Q.Toggle nth bit of a number x?
Ans:To to togle nth bit of a number, we have to find a 
   number which has only nnth bit as set (by 1<<n) and 
   perform XOR operation between the given number x and
  this number.
EG:Toggle 3 bit of 15
  ans: 15 ^ (1<<3)
  Explanation:
    =>15=1111
    =>1<<3=1000
    =>1111^1000=0111
    As we know,in XOR operation, if both bit is same 
    then resultanat bit is 0, otherwise 1.
------------------------------------------------------
#16.
#.Counting total number of set/unset bits in a given 
Number.
Q.You a given a 32 bit number 5, count the total 
number of set bits in it?
Solution:
        int x=5,count=0;
        for(int i=31;i>=0;i--){
              if((1 & (x>>i))!=0)
                  count++;
        }
        cout<<count<<endl;

       OR

       int x=5,count=0;
        for(int i=31;i>=0;i--){
              if((x & (1<<i))!=0)
                  count++;
        }
        cout<<count<<endl;
Explanation:
  32 bit representation of 1 is:
    00000000000000000000000000000001
  Here in each iteration, ith bit of x becomes 
  0th bit(LSB),ans then we perform AND operation
   with binary of 1.
  if ith bit(LSB) bit of x is set then we get 
  non-zero and count increases,otherwise, we got
  0 and count do not increases.

#17.
Binary of 5 is 101 i.e
0000000000000000000000000000101
STEPS 1: i=31
00000000000000000000000000000001 & 0=0
STEPS 2: i=30
00000000000000000000000000000001 & 00=0
STEPS 3: i=29
00000000000000000000000000000001 & 000=0 ,similarly:
STEPS 30: i=2
00000000000000000000000000000001 & 000000000000000000000000000001=1 
                           so,count++;
STEPS 31: i=1
00000000000000000000000000000001 & 0000000000000000000000000000010=0
STEPS 32: i=0
00000000000000000000000000000001 & 00000000000000000000000000000101=1 
                          so,count++;
So,Total count of set bit is 2.
--------------------------------------------------------------
#.Counting total number of set/unset bits in a given Number.
Q.You a given a 32 bit number 5,count the total number of unset bits?
Solution: int x=5; int count=0;
          for(int i=31;i>=0;i--){
            if((1&(~(x>>i)))!=0)
              count++;
          } cout<<endl<<"Total unset bits are "<<count;
          OR  
          int x=5; int count=0
          for(int i=31;i>=0;i--){
          if((~x & (1<<i))!=0)
            count++;
          } cout<<endl<<"Total unset bits are "<<count;

-------------------------------------------------
#18.
#.Printing Binary form of a number without using 
any predefined function:
    void printBinary(int x){
        for(int i=31;i>=0;i--){
            cout<<(1&(x>>i));
        }
    }  
Predefined function for counting set bits in integer 
and long long integer
1.__builtin_popcount(x)
2.__builtin_popcountll(x)
---------------------------------------------------
#.Bit Manipulation:
Checking even/odd number with bit: As we know:
  0th bit of every odd number is 1 and
  0th bit of every even number is 0. So,
 we simply perform AND operation of that number with 1.
 If result is 0, then number is even
 If result is 1, then number is odd. EG:
 int x=10;
 for(int i=0;i<=10;i++){
    if(i&1) cout<<"odd\n";
    else cout<<"Even\n";
 }
 #. We can use bit for any operation where we required
  num*2 or num/2 i.e integer division
  For multiplication: we use ,num<<1
  For Division: we use ,num>>1
  EG: int x=5;
      cout<<(x<<5);--->10
      cout<<(x>>5);--->2
------------------------------------------------
#19.
#.Converting character from upper case to lower 
case:
  First understand the pattern of Uppercase letter
  and corresponding lower case later:
  A -->1000001
  a -->1100001
  B -->1000010
  b -->1100010 

  In upper case ,the bit present just before the 
  MSB in not set i.e unset.
  In Lower case ,the bit present just before the
  MSB in set.
  We can see that 5th bit is set/unset.
  This is the pattern.

  So, to convert Upper case to lower case or 
  vice versa , we just have to Set/Unset the 
  5th bit of that character .
  Eg:
  1.Convert upper case 'C' to lower case?
    char in='C';
    char result= in |(1<<5);
    cout<<result; --->'c'

  2.Convert lower case 'b' to upper case?
    char in='b';
    char result=in &(~(1<<5));
    cout<<result; --->'B'
  #20.
  NOTE:We can simplify it more.
    As we know: 1<<5=100000, this is the binary of 32
    As we know 32 is the ASCII of Space bar.
    So, 1<<5 in charcter form is ' ' i.e Space.
    But, we can find character form of ~(1<<5),
    So, instead of (1<<5),we can also use ' ' i.e. 
    space to convert Upper case to lower case,but
    we can not  use ~(' ') instead of ~(1<<5) to 
                convert lower case to upper case.
    So, To convert lower case to Upper case , we 
    need a number in which upto 6th bit , all bit
     is set and 5th bit is unset 
     i.e. 1011111 (or 000001011111 etc)
    and we perfrom AND operation of Given char with
    this number.
    The number 1011111 or (0001011111, 0000001011111)
    is the binary form of underscore i.e. _
    So to convert a Lower case to upper case , 
    we can use underscore('_') instead of ~(1<<5) 
    and perform AND operation.
    Basically we do AND operation to unset 5th bit.
  EG:1. Convert Upper case 'N' to lower case.
     char ch='N';
     char result= ch | ' ';  //this is or operation
     cout<<result;  --> 'n'
  2. Convert Lower case 'm' to Upper Case.
     char ch='m';
     char result= ch & '_';
     cout<<result;
  3. Convert  Upper Case 'R' to lower case.
     char ch='R';
     cout<<char(ch | ' ');
  4. Convert  Lower Case 'R' to Upper case.
     char ch='r';
     cout<<char(ch & '_');
--------------------------------------------------
#21.
#.Unset all Least significant bit up to nth bit.
This means that if we have a number 111011 i.e 59,
then if we want to unset all LSB up to 4th bit,
i.e we want 111011 -> 100000.
Q.How can wo do this?
ans->We can do it by for loop and using: x & (~(1<<n)) as
    int x=59;
    printBinary(x); -->111011
    for(int i=0;i<5;i++){
      x=x & (~(1<<i));
    }
    printBinary(x);  ->>100000
But we want to convert in one operation.
So, for converting 111011 to 100000, we need a number 
whose all bits upto 4th bit is unset ,rest all bit 
may or may not be set/unset .i.e we want 100000 or 
111100000 etc and perform AND operation.  
The number 100000 or  111100000 are inversion of 011111 
or 000011111.
Moreover the number 011111 or 000011111 can we obtained 
by 100000-1 or 00000100000-1. As we know,
100000 is 1<<5 and 100000-1=11111 is: ~((1<<5)-1)
So,if we want to unset all LSB up to nth bit then:
GENERAL FORMULA: num & (~ (1<<(n+1)-1)) 

Q.Unset the all LSB of 59 upto 4th bit.
  int num=59;
  printBinary(num); -->111011
  int i=4;
  int b=num & (~((1<<(i+1))-1));
  printBinary(b);  -->100000
----------------------------------------------------
#22.
#.Unset all Most significant bit up to nth bit.
This means that if we have a number 111011 i.e 59,
then if we want to unset all MSB up to 3rd bit(exclusive),
i.e we want 111011 -> 001011.
To convert 111011 to 001011 we will require a number 
1111 or(001111 ect) and perorm and operation.
The number 1111 is 10000-1 i.e (1<<4)-1

So,if we want to unset all MSB up to nth bit then:
GENERAL FORMULA: num & ((1<<(n+1))-1),nth bit exclusive.
                 num & ((1<<n)-1) ,nth bit inclusive.
Q.Unset the all MSB of 59 upto 3rd bit.
  int num=59,i=3;
  printBinary(num); -->111011
  int b=num & ((1<<(i+1))-1);
  printBinary(b);  -->001011
------------------------------------------------------
#. Check Power of 2.
How we can check that a given number is 
power of 2 or not.
Logic:
as we know any number which is power of 2 
have only one bit set, rest all bit are unset. 
for eg : 4 -> 100.
We just have have to do AND operation with num-1:
                    4 ->100
                4-1=3 ->011
                ______________
                        000 ->0
So,if the result is Zero, then it is power of 2.
If result in non-zero,then it is not power of two.
#23.
Q. Check num=15 is power of two or not?
  int num=15;
  if(num & (num-1) )
      cout<<"Not power of 2"<<endl;
  else
      cout<<"Power of 2"<<endl;
------------------------------------------------
XOR (^) operator:
 1^0 =1
 1^1=0
 0^0=0
 0^1=1
PRPPERTIES OF XOR:
  1. XOR of two same nuumber is always zero. 
     eg, 5^5=0
  2. XOR of any number with zero is the number
     itself. eg, 8^0=8
  3. XOR is associative i.e 
                     X^Y^Z == X^Z^Y == Y^X^Z
#. Swapping two number using XOR operator:
    int main(){
      int a=4,b=6;
      cout<<a<<","<<b<<endl; ==>4,6
   1. a = a^b;               //a1=a^b
   2. b = b^a;               //b1=b^a1   ==>b=b1
   3. a = a^b;              //a=a1^b1
      cout<<a<<","<<b<<endl; ==>6,4
    }
  #24. 
  LOGIC EXPLANATION:
    1.a=a^b  ......equation1.
    2.b=b^a
      from eq1 , line2 can also be written as
      b=b^(a^b)
      b=b^a^b
      b=b^b^a  (using associative)
      b=0^a    (XOR of two same number is zero)
      b=a;    (XOR of any number with zero is 
                            the number itself)
    So,line2 becomes:
    2.b=a;     .........equation2
    3.a=a^b
      a=(a^b)^a    from eq1,and eq2
      a=a^b^a
      a=a^a^b   (using associative)
      a=0^b     (XOR of two same number is zero)
      a=b       (XOR of any number with zero is 
                              the number itself)
    so,line3 becomes
    3.a=b
    HENCE SWAPPED.
  EXAMPLE EXPLANATION:
    a=4,b=6;
    a=a^b  i.e 4^6 ==> 100^110=010==>2, 
             so now value of a become 2,Now
    b=b^a  i.e 6^2 ==> 110^010=100==>4 , 
                so now value of b become 4,Now
    a=a^b  i.e 2^4 ==> 010^100=110==6, 
    so now value of a become 6 ,hence swapped.
    cout<<a<<b;==>6,4
-----------------------------------------------
#25. BIT MASKING:
Q. There are N≤5000 workers. Each worker is available 
during some days of this month (which has 30 days). 
For each worker, you are given a set of numbers, each 
from interval [1,30], representing his/her availability.
You need to assign an important project to two workers 
but they will be able to work on the project only when 
they are both available. Find two workers that are 
best for the job — maximize the number of days.
#include<bits/stdc++.h>
int main(){
  int no_emp; cin>>no_emp;
  int www=no_emp;
  vector<int> masks;
  while(www--){
    int n,mask=0,day;  cin>>n;
    for(int i=0;i<n;i++){
      cin>>day;
      mask=mask|(1<<day);
    }
    masks.push_back(mask);
  }
  int max_days=0,p1=-1,p2=-1;
  for(int i=0;i<no_emp;i++){
    for(int j=i+1;i<no_emp;j++){
        int intersection= masks[i] & masks[j];
        int common_day= __builtin_popcount(intersection);
        if(common_days>max_days){
            max_days=common_days;
            int p1=i; int p2=j;
        }
    }
  }
  cout<<max_common_days<<endl<<p1<<" "<<p2<<endl;
}
-------------------------------------------------------

#26. Subset Generation using bit masking:
If an Array has N element, then there will be 2^N subsets.
Eg: [1,4,3] => it wil have 2^3 =8 subsets
Subsets: [],[1],[4],[3],[1,4],[1,3],[4,3],[1,4,3]
Using bit masking:
As array has 3 element, so it will have 8 subset:
All the set bits represent ith element of the Array in subset
0 =>000 , no bit is set => []
1 => 001 ,0th bit is set => [1]
2 => 010 ,1st bit is set => [4]
3 => 011 ,0th and 1st bit is set => [1,4]
4 => 100 ,2st bit is set => [3]
5 => 101 ,0th and 2nd bit is set => [1,3]
6 => 110 ,1st and 2nd bit is set => [4,3]
7 => 111 ,0th ,1st and 2nd bit is set => [1,4,3]
So, we get all the possible subset.
NOTE: Subset and SubArray is different.
#. GCD and LCM:
In GCD we take  minimum power of common prime factor:
eg: Calculate GCD/HCF of 4 and 12?
   4  = 2^2 * 3^0
   12 = 2^2 * 3^1 =2^2 * 3^1 * 3^0
   Here minimum common power is 2^2 and 3^0 => 4*1=4
In LCM we take  maximum power of common prime factor:
eg: Calculate LCM of 4 and 12?
   4  = 2^2 * 3^0
   12 = 2^2 * 3^1 =2^2 * 3^1 * 3^0
   Here maximum common power is 2^2 and 3^1 => 4*3=12
eg:Calculate GCD and LCM  of 12 and 18?
 12 = 2^2 * 3^1
 18 = 2^1 *3^2
 GCD= 2^1 *3^1=6  , LCM= 2^2 * 3^2=36
---------------------------------------------------
#27.
 #. Relationship between GCD and LCM (V.V.I)
  if we have two number num1 and num2, then
   (num1*num2)/GCD(num1,num2) = LCM(num1,num2)
  eg: 
   if num1=12 and num2=18,then
   find LCM of 12 and 18. GCD of 12, 18 is given 6?
   Solution:
    LCM=(12*18)/6=36 ans.
#. Euclid's Algorithm  for GCD/HCF:
   it is same thing that we have learned in school. 
   i.e Long division
   First we divide greater num by smaller num, if 
   remainder is zero then samller num is GCD. If 
   remainder is not zero, then this remainder becomes
  divisor and Smaller num i.e previse divisior 
  become divident, ans so on untill remainder 
  comes zero.
  -------
  Inbuit function for GCD:
   __gcd(a,b); for two num
   __gcd(gcd(a,b),c); for three num ans so on...
-----------------------------------------------------------
#.Finding minimum fraction of a given fraction a/b: for eg: 
minimum fraction of 12/18 =2/3 because(12/18=6/9=2/3)
We can find is using GCD:
Formula:
  minimum fraction = [a/(gcd(a,b))] / [b/(gcd(a,b))] 
Q. Find minimum fraction of 12/18. Given GCD(12,18) is 6?
 minimum Fraction= (12/6) / (6/12) => 2/3
--------------------------------------------------------

#28. Binary Exponentiation:
  It is nothing but simply a algorith to calculate power
  like pow(a,b);
  Why we need Binary Exponentiation although we have 
  pow() function?
  As we know pow() retuns double  data type value. As
  double do not store exect value.It has some precision 
  error.So ,to
  calculate exact power we use Binary Exponentiation.Eg:
  #.if power is EVEN:
    2^16=2^8 * 2^8
    2^8=2^4 * 2^4
    2^4=2^2 * 2^2
    2^2=2^1 * 2^1
    2^1=2^1 * 2^0
  #.if power is ODD:
    2^13=2* 2^12
    2^12=2^6 * 2^6
    2^6=2^3 * 2^3
    2^3=2 * 2^2
    2^2=2^1 * 2^1 
    2^1=2^1 * 2^0 
  What we have done here:
  GENERAL FUNCTION:(recursive formula)
  1. f(a,b) = f(a,b/2) * f(a,b/2)  => power is even
  2. f(a,b) = a * f(a,b/2) * f(a,b/2) =>power is odd
    int fun(int a,int b){
      if(b==0) return 1;
      if(b&1)
        return a*fun(a,b/2)*fun(a,b/2); =>calling same
      else                              function twice 
        return fun(a,b/2)*fun(a,b/2); => calling same 
    }                                   function twice   
  #29.
    But, above code have to much call, so take more time.
    As we are calling same function twice, so, 
    first we call it, and store it''s return value, 
    then pass this value.
    int fun(int a,int b){
      if(b==0) return 1;
      long long res=fun(a,b/2);
      if(b&1)
        return a*res*res;
      else
        return res*res;   
    }
  GENERAL FUNCTION:(Iterative method):
  As we know, each bits in binary number represent 
  some power of two.
  For example: 3^13
  13=1101
   0th bit represent : 1*(2^0) =1 =>3^1
   1st bit represent : 0*(2^1) =0 => 3^1 * 3^0 =>3^1
   2nd bit represent : 1*(2^2) =4 =>3^1 * 3^4  =>3^5
   3rd bit represent : 1*(2^3) =8 =>3^5 * 3^8  =>3^13 
  Calculate 3^13?
  binary of 13=1101
  so,=>3^1101
     =>3^(8+4+0+1)
  To calculate answer, we check for 0th bit, if 
  0th bit is 1 then in answer , we multiply the
   current power of a .After this ,increase the 
   power and right shift the b;
  #30.
eg:a=3,b=13 , calculate a^b ? a,b<=10^9
  int fun(int a,int b){
    int ans=1;
    while(b>0){
      if(b&1)
        ans=ans*a;
      a=a*a;
      b=b>>1;
    }
    return ans;
  }
 eg:
  a=3,b=13 , calculate a^b ?. a,b<=10^9.Print
  result %M ,M=1e9+7
#include<iostream>
using namespace std;
const int M=1e9+7;
int fun(int a,int b){
    int ans=1;
    while(b>0){
      if(b&1)
        ans=(ans*1ll*a) % M;
      a=(a*1ll*a) % M;
      b=b>>1;
    }
    return ans;
  }
int main(){
  int a=3,b=13;
  cout<<fun(a,b);
}
--------------------V.V.I-----------------------------
#.31
#.1.Large Exponentiation using Binary Multiplication:
  (base<=10^18).
  Given a^b, what happen if a<=10^18?,M<=10^9, b<=10^9. 
  In such case above solution will not work.

  NOTE: (a^b) % M == ((a % M)^b) %M
  Here we will have to first take mudulo M of a, so, 
  value of a becomes less than equal to M.

  eg:a=3,b=13 , calculate a^b ?. a >=10^18 ,b<=10^9.
  Print result %M ,M=1e9+7

    #include<iostream>
    using namespace std;
    const int M=1e9+7;
    int fun(int a,int b){
      a=a % M;
      int ans=1;
      while(b>0){
        if(b&1)
          ans=(ans*1ll*a) % M;
        a=(a*1ll*a) % M;
        b=b>>1;
      }
    return ans;
    }
  int main(){
    int a=3,b=13;
    cout<<fun(a,b);
  }
#32.
#.2.Large Exponentiation using Binary Multiplication:
  (M<=10^18)
  Given a^b, what happen if a<=10^18?,M<=10^18, 
  b<=10^18.

  As , Now M is <=10^18, so a can be 10^18, when we 
  do a*a,then overflow occur.
  To deal such case we use Binary Multiplication. 
  We use this because be can not do direct multiplication. 

  Consider: a<=10^18
    => a * a
    => a+a+a+a+a+a......+a times.
    Here in each step we can take %M
   =>a+a < 2*(10^18) 
         if we take mudulo M,then (a+a) %M < 10^18
         So, by taking mudulo M in each step , 
                            we are abe to find a*a.
    =>(a+a) %M <10^18
    =>(a+a+a) %M <10^18
      .
      . 
      .
    =>(a+a+a....+a times) % M <10^18.
  
  We  can do it simply by for loop, but it take O(N),
  so, to calculate it in log(N)^2 times we use 
  Binary Multiplication/ Exponentiation.
  When we calculated a^b then we do multiply(a*a), 
  but here we do plus(a+a).
  #33.
  eg:
  a=3,b=13 , calculate a^b ?. a <=10^18 ,b<=10^18.
  Print result %M ,M=1e18+7

  b = 13 = 1    1    0    1
          2^3 ,2^2, 2^1, 2^0
           8    4    2    1

            ans=0
  at fist a=3, 

          3=3*1 ,(as 1 set in 13,so we add 3 in ans)       
            ans=0+3=3      
  a=3+3  

    6=3*2,(as 2 is not set in 13,so we not add 6 in ans)
           ans=3
  a=6+6

    12=3*4 ,(as 4 set in 13,so we add 12 in ans)
          ans=3+12=15
  a=12+12

    24= 3*8, (as 8 set in 13,so we add 24 in ans)
          ans=15+24=39.
  now all will be unset(16,32 etc)

  So,ans=39.
#34.
// Code: 
  int helper(long long a,long long b){                  
    int ans=0;
    while(b>0){
      if(b&1){
        ans=(ans+a)%M;
      }
      a=(a+a)%M;
      b= b>>1;
    }
    return ans;
  }  

  int fun(long long a,long long b){
    int ans=1;
    while(b>0){
      if(b&1){
        ans=helper(ans,a);
      }
      a=helper(a,a);
      b=b>>1;
    }
    return ans;
  }

  int main(){
    int a=3,b=13;
    cout<<fun(a,b)<<endl;
    return 0;
  }
----------------------------------------------------------
#35.
#.3.Large Exponentiation using ETF & Euler's theorem:'
  (value of b is very large):
  a^b-> In this b  can be very large. for eg b greater
  than 10^18.
  For any large vale of b ,this code will run perfectly:
  #include<iostream>
  using namespace std;
  const int M=1e9+7;
  int fun(int a,int b){
    int ans=1;
    while(b>0){
      if(b&1)
        ans=(ans*1ll*a) % M;
      a=(a*1ll*a) % M;
      b=b>>1;
    }
    return ans;
  }
  int main(){
    int a=3,b=13;
    cout<<fun(a,b);
  }
  But, the problem is that we can not asign very lage 
  value to b. Maximum we can assing upto 10^18.
  How can we represent those value of b which is greater
  than 10^18?
  For value of b greater than 10^18,b can be represented
  indirectly as: b=b^x , so a^b^x . 
  But,when a is very large then we took a%M, but we can 
  not take mudulo on power i.e for a^b^x , we can not do:
  [(a%M)^(b^x)%M]%M, this is mathematically inncorrect.

#36.
# So, how can be calculate a^b^x ?. 
--------------------------------------------------------
#.Coprime Numbers: Two or more numbers are said 
  coprime if all of them have 1 as maximum common
  factor/divisor. In simple words if GCD of them 
  is 1 ,then they are said coprime to each other.

  eg. 10,7 are coprime, 2,5,7 are coprime.
#.ETF(Eular Totient Function)
  Count of K , such that 1 <= K <N ; K,N are coprime.
  Means For any number N, the 'ETF value' is count of
  numbers from 1 to N which are coprime with N.
  eg: ETF value of 10?
  all number from 1 to 10 which are coprime with 10 are:
        1,3,7,9
        count=4,So, ETF of 10 is 4.ans 

NOTE: 
if N is a prime number, then their ETF value is N-1.
  eg.ETF of 7 ?
    as 7 is prime so, ETF=7-1=6 ans.
    Explanation:
    all number from 1 to 7 which are coprime with 7.
          1,2,3,4,5,6
          count=6, so ETF is 6 ans.
  mathematically ETF is denoted by phi symbol φ.
  As symbol of summation is Σ, similarly
  symbol of multiplication is ∏.
#37. 
Mathematical Formula to calculate φ(n) i.e ETF(n):

      φ(n)=n * ∏(1-1/p), where p is the all 
                      unique prime factor of n.
  eg:
    calulate φ(14)?
    Solution:
             φ(14)= 14* ∏(1-1/p)
            prime factors of 14 are: 7,2
            so, φ(14)= 14* (1-1/7)* (1-1/2)
                     = 14*  6/7 *  1/2
                     =6 ans

    calulate φ(9)?
    Solution:
        φ(9)= 9* ∏(1-1/p)
        prime factors of 9 are: 3,3 , 
        but only unique is considered i.e 3.
    so, φ(9)= 9* (1-1/3)
            = 9*  2/3
            =6 ans

    NOTE: if N is a prime number, then their 
    ETF value is N-1. So, we do not need 
    to use Mathematical formula.
  eg.  φ(7)?
       as 7 is prime so, φ(7)=7-1=6 ans.
#38.
#.Eular's 'Theorem:
  According to this theorem:

   a^b ≅ [a^(b mod φ(n))] mod(n)  i.e
   a^b ≅ [a^(b % φ(n))] %(n)

  It states that if we divide a^b by n,then
  remainder will be  a^(b % φ(n)).
  if a ≅ b % (n) => it means, if we divide
  a by n, then remainder will be b. 
  
  NOTE:(V.V.I):
   a^b ≅ [a^(b % φ(m))] %(m)
 =>  For m is any number:
     (a^b) %m = (a^(b % φ(m))) % m  

 =>  if m is prime
     (a^b) %m = (a^(b % (m-1))) % m   , 
     because φ(prime_number)=prime_number-1

This is all we require to solve a^b^x.
-------------------------------------------------- 
#. Calculate (50^64^32) % m, m is prime m=1e9+7 ?
Solution:We can write 64^32 as:
        (64(32%(m-1)))%m 
      so,
        (50^64^32) % m = (50^((64(32%(m-1)))%m))%m
#39.
code:
Calculate (50^64^32) % m, m is prime m=1e9+7 ?
#include<iostream>
using namespace std;
  int fun(int a,long long b ,int m){
    int ans=1;
    while(b>0){
      if(b&1)
        ans=(ans*1ll*a) % m;
      a=(a*1ll*a) % m;
      b=b>>1;
    }
    return ans;
  }

  int main(){
    int a=50;
    long long b=64;
    int c=32;
    const int m=1e9+7;
    cout<<fun(a,fun(b,c,m-1),m);
  }

Question: Super pow LeetCode Your task is to calculate
a^b mod 1337 where a is a positive integer and b is an 
extremely large positive integer given in the form of an
array. 1337 is not a prime number.
Example 1:
Input: a = 2, b = [3]
Output: 8
#40.
Input: a = 2, b = [1,0]
Output: 1024
Constraints:
1 <= a <= 231 - 1
1 <= b.length <= 2000
0 <= b[i] <= 9 :b does not contain leading zeros.
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
        }return ans;
    }
    int superPow(int a, vector<int>& b) {
        int num=0;
        for(int x:b)
            num=(num*10+x)%1140;//1140 is the ETF of 1337  
        return binexp(a,num,1337);
    }
};
int main(){
  int vector<int> v={1,0};
  int a=2;
  solution s;
  int x=s.superPow(a,v);
}
--------------------------------------------------------------
#41.
#.DIVISOR
Find all divisor of 36, their sum and their count?
#include<iostream>
using namespace std;                 //output
int main(){                             //1
  int n=36;                             //2
  int sum=0,count=0;                    //3
  for(int i=1;i<=36;i++){               //4
    if(n%i==0){                         //6
      cout<<i<<endl;                    //9
      sum+=i;                           //12
      count+=1;                         //18
    }                                   //36
  }                                     
  cout<<sum<<endl<<count<<endl;         //91
}                                       //9
Here time complexity is O(N).
This is not the optimize way to calculate the divisor.
what is happening here, we can see that after sometime 
divisor are repeated.for eg:
1*36
2*18
3*12
4*9
6*6
-----Now repeating
9*4
12*3
18*2
36*1
#42.
So,We only have to check upto sqrt(N).
In each step when n%i==0,then we will have 2 divisor
first: i, second: n/i 

Note: As we know,
if i<= √N ,then we can write i*i <= N

Optimized code:(This is wrong.)
#include<iostream>                    //output
using namespace std;                  //1
int main(){                           //36
  int n=36;                           //2
  int sum=0,count=0;                  //18
  for(int i=1;i*i<=36;i++){           //3
    if(n%i==0){                       //12
      cout<<i<<endl<<n/i<<endl;       //4
      sum+=i;                         //9
      sum+=n/i;                       //6
      count+=2;                       //6
    }                                  
  }                                   //97
  cout<<sum<<endl<<count<<endl;       //10
}
As we can see, 6 is counted and added two times,
which is wrong,because 36 is perfect square,although
this code wiil run perfectly in non-perfect square case.


#43.
#.Optimized code:  

#include<iostream>
using namespace std;                 //output
int main(){                             //1
  int n=36;                             //36
  int sum=0,count=0;                    //2
  for(int i=1;i*i<=36;i++){             //18
    if(n%i==0){                         //3
      cout<<i<<endl;                    //12
      sum+=i;                           //4
      count+=1;                         //9
      if(n/i !=i){                      //6
        cout<<n/i<<endl;                         
        sum+=n/i;                      //91   
        count+=1;                      //9
      }                      
    }
  } 
  cout<<sum<<endl<<count<<endl;         
}   
                                 
Time complexity of above code is √N.This is not so
optimized. We can make it more optimized using formula.
----------------------------------------------
#44.
#.NUmber of DIVISOR (Using Prime factorization):

  x=(p1)^n1 * (p2)^n2 * (p3)^n3 *...*(pt)^nt ->this is
                                     prime factorization
  where p is a prime number. 
  A divisior will be a subset of the prime factorization.
  x=p1*p1*p1*...upto n1 times * p2*p2*p2*...upto n2 times * 
             ...pt*pt*...upto nt times.

  Using P & C,(No. of subset)
  choices for p1=(n1+1)
  choices for p2=(n2+1)
  choices for pt=(nt+1)

  So,total count of divisor:
  no. of divisor=(n1+1)*(n2+1)*(nt+1)   

eg:36=2^2 * 3^2  
     =2*2*3*3
     choices for 2=(2+1)=3
     choices for 3=(2+1)=3
     So total divisor of 36 will be 3*3=9 

     Any divisor will be a subset of the prime factorization.
subset:[2],[2*2],[2*3],[2*2*3],[2*2*3*3],[3],[3*3],[2*3*3],[1]
      Any divisor will be a subset

So, GENERAL FORMULA FOR COUNT OF DIVISOR:
    x=(p1)^n1 * (p2)^n2 * (p3)^n3 *...*(pt)^nt
    count=(n1+1)*(n2+1)*(n3+1)*...(nt+1)
------------------------------------------------------------
#45.
#.Sum of all the Divisor:
  If we add each choices of a prime numbers and then multiply
  all the addition value, we will get sum.
eg:
  x=(p1)^n1 * (p2)^n2 * (p3)^n3 *...*(pt)^nt
    where p is a prime number
  sum=(1 + p1 + p1^2 + p1^3 +...+p1^n1) * 
                      (1 + p2 + p2^2 + p2^3 +...+p2^n1) *...
  Here, (1 + p1 + p1^2 + p1^3 +...+p1^n1) is a GP
  As we know sum of n terms in GP is:
  (1 + p1 + p1^2 + p1^3 +...+p1^n1)= [{p1^(n1+1)}-1] /(p1-1)
  so, sum of all divisor can be written as:
  sum=  [{(p1^(n1+1))-1}/(p1-1)] * [{(p2^(n2+1))-1}/(p2-1)] * 
                                  [{(p1^(n1+1))-1}/(p1-1)] ...
eg:
  36=2^2 * 3^2
  sum=(2^(2+1) -1)/(2-1)  *  (3^(2+1) -1)/(3-1)
  sum=((2^3)-1)/1   * ((3^3)-1)/2
  sum=7 *(26/2)
  sum=7*13=91 
  so sum of all divisor=91
eg:
  x=24 , find count and sum of all divisor.
  24 = 2^3 * 3
  no.of divisor=(3+1)*(1+1)=4*2=8
  sum =((2^4)-1)/1 * ((3^2)-1)/2
  sum =15*4=60
When we will learn 'How to calculate prime factorization
in optimized way',then we will use this formula
to calculte count of divisor, sum of divisors.

--------------------------------------------------------------
#46.
#.Primes:
we only have to check only up to √n
Q.check 17 is prime or not?
#include<iostream>
using namespace std;
int main(){
  int n=17;
  bool flag=true;
  if(n==1){
    cout<<"Not prime"<<endl;
    return 0;
  }
  for(int i=2;i*i<=n;i++){
    if(n%i==0){
      cout<<"Not prime"<<endl;
      flag=false;
      break;
    }
  }
  if(flag)
    cout<<"Prime"<<endl;
  return 0;
}
------------------------------------------------------
#47.
#Prime factorization:
NOTE:
     The smallest divisor(except 1) of any number will 
     always be a prime number.
     eg:smallest divisor of 91 is 7 which is prime
        smallest divisor of 36 is 2 which is prime
        smallest divisor of 12 is 3 which is prime 
#.How we calculate prime factorization?

  First we find smallest divisor(except 1) of the given 
  number and do continue division of that number by that 
  divisor untill it become not divisible.
  we repeat this untill be get 1 

  eg:
    calculate prime factoriztion of 36?
    Smallest divisor of 36 is 2,now we conitnuosly divide
    36 by 2 untill it become undivisible by 2.
    Keep in  mind that , smallest divisor of any number 
    is always a prime number.
      36/2=18/2=9, now it is not divisible by 2.
      now we find smallest divisor of 9 and repeat the 
      process.Smallest divisor of 9 is 3.
      9/3=3/3=1, as we get 1, so ,stop. 

      36=2*2*3*3*1 ans 
#48. 
code:
    #include<iostream>
    #include<vector>
    using namespace std;
    int main(){
      int n=36;
      vector<int> prime_factors;
      for(int i=2;i<=n;i++){
        while(n%i==0){
          prime_factors.push_back(i);
          n=n/i;
        }
      }
      for(int x :prime_factors){
        cout<<x<<endl;
      }
    }
  Time complexity: O(N)
we can make it more optimized.

NOTE:
    For any composite number N, there will
    always be a prime factor before √N. i.e,
    there will always be a prime factor 
    which is less than √N.
For eg: 16
        √16=4,
      There will always be a prime factor
      of 16 before 4 i.e less than 4.
      That prime factor is 2.
So,we can optimise the above code by running loop upto √n
#49.
code:
    #include<iostream>
    #include<vector>
    using namespace std;
    int main(){
      int n=36;
      vector<int> prime_factors;
      for(int i=2;i*i<=n;i++){
        while(n%i==0){
          prime_factors.push_back(i);
          n=n/i;
        }
      }
      for(int x :prime_factors){
        cout<<x<<endl;
      }
    }
But, there a something wrong in above code.
for eg: 24
        24/2=12
        12/2=6
        6/2=3
      As 3 is not a composite number, so for it ,
      there will not be a prime factor before √3,
      and thus the loop condition becomes false,
      and we will not get 3 included. 
      So, in such situation where at last n>1,then
      that last n will always be a prime factor and
      we have to include it separately.
#50.
code:
    #include<iostream>
    #include<vector>
    using namespace std;
    int main(){
      int n=24;
      vector<int> prime_factors;
      for(int i=2;i*i<=n;i++){
        while(n%i==0){
          prime_factors.push_back(i);
          n=n/i;
        }
      }
      if(n>1){
        prime_factors.push_back(n);
      }
      for(int x :prime_factors){
        cout<<x<<endl;
      }
    }
Time complexity: √N
#51.
#.Sieve Algorithm to find prime numbers optimally. 
Find prime numbers between 1 to 30(inclusive)
Solution:
First we exclude 1 and write 2 to 30:
2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 
18 19 20 21 22 23 24 25 26 27 28 29 30 

First we assume all the number 2-30 is prime number.
we pick one number, check it is prime or not , if it
is prime then pick it and marked all its multiple as non-prime,

2 3 4M 5 6M 7 8M 9 10M 11 12M 13 14M 15 16M 17 
18M 19 20M 21 22M 23 24M 25 26M 27 28M 29 30M

Now, we pic next unmarked number as it will surely we a prime
number,because if it is non prime then it should get marked
by its any previous number as non-prime.
so,we next unmarked number i.e 3 and marked all its multiple
as non-prime
2 3 4M 5 6M 7 8M 9M 10M 11 12M 13 14M 15M 16M 17 
18M 19 20M 21M 22M 23 24M 25 26M 27M 28M 29 30M
Now again pic next unmarked number and repeat the process:
2 3 4M 5 6M 7 8M 9M 10M 11 12M 13 14M 15M 16M 17 
18M 19 20M 21M 22M 23 24M 25M 26M 27M 28M 29 30M
Next unmarked number is 7:
2 3 4M 5 6M 7 8M 9M 10M 11 12M 13 14M 15M 16M 17 
18M 19 20M 21M 22M 23 24M 25M 26M 27M 28M 29 30M
Next unmarked number is 11:
2 3 4M 5 6M 7 8M 9M 10M 11 12M 13 14M 15M 16M 17 
18M 19 20M 21M 22M 23 24M 25M 26M 27M 28M 29 30M
After all : we will get un marked number:
2 3 5 7 11 13 17 19 23 29, which are the prime numbers 
between 1 to 30.
This algorithm is called sieve algorithm 

Q.For all the number between 1 to 100, output prime or not prime. 
For prime output 1, for non-prime output 0.

#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
vector<bool> prime(N,1); //assume all num as prime.
int main(){
  prime[0]=prime[1]=false;
  for(int i=2;i<N;i++){  // we can also run upto i*i<=N
    if(prime[i]){
      for(int j=2*i;j<N;j+=i){ //marks all multiple 
        prime[j]=false;       
      }
    }
  }
  for(int i=1;i<100;i++){
    cout<<prime[i]<<endl;
  }
}

Time complexity:n/2 + n/3 +n/4 ...(if condition removed)
              => nLog(N)
                n/2 + n/3 + n/7 ...(due to if condition)
              => n(log(log(n)))  

Q. You are Given Q queries, in each query there will a N,
   check it is prime or not.
   CONSTRAINTS:
    Q<=100
    N<=1e7

  Solution: 
  #include<bits/stdc++.h>
  using namespace std;
  const int N=1e7+10;
  vector<bool> prime(N,1); //assume all num as prime.
  int main(){
    prime[0]=prime[1]=false;
    for(int i=2;i<N;i++){
      if(prime[i]){
        for(int j=2*i;j<N;j+=i){ //marks all multiple 
          prime[j]=false;
        }
      }
    }
    int q;
    cin>>q;
    while(q--){
      int n;
      cin>>n;
      if(prime[n])
        cout<<"Prime"<<endl;
      else
        cout<<"Not Prime"<<endl;
    }
  }
  -----------------------------------------------------------------
  Variations on Sieve algorithm:
  Finding lowest and highest prime factor of a Number:
  eg: Lowest prime factor of 18 is 2,and highest is 3 
    as 18=2*3^2
  code:
  #include<bits/stdc++.h>
  using namespace std;
  const int N=1e7+10;
  vector<bool> prime(N,1); //assume all num as prime.
  vector<int> highest_prime(N,0);
  vector<int> lowest_prime(N,0);
  int main(){
    prime[0]=prime[1]=false;
    for(int i=2;i<N;i++){
      if(prime[i]){
        lowest_prime[i]=highest_prime[i]=i;
        for(int j=2*i;j<N;j+=i){ //marks all multiple 
          prime[j]=false;
          highest_prime[j]=i;
          if(lowest_prime[j]==0)
            lowest_prime[j]=i;
        }
      }
    }
    for(int i=1;i<100;i++){
      cout<<lowest_prime[i]<<" "<<highest_prime[i]<<endl;
    }
  }
#55.
  #Using Variation on sieve,we can easily calculate 
  prime factorisation in log(n);
  eg:calculate prime factorisation of 24:

  #include<bits/stdc++.h>
  using namespace std;
  const int N=1e7+10;
  vector<bool> prime(N,1); //assume all num as prime.
  vector<int> highest_prime(N,0);
  vector<int> lowest_prime(N,0);
  int main(){
    prime[0]=prime[1]=false;
    for(int i=2;i<N;i++){
      if(prime[i]){
        lowest_prime[i]=highest_prime[i]=i;
        for(int j=2*i;j<N;j+=i){ //marks all multiple 
          prime[j]=false;
          highest_prime[j]=i;
          if(lowest_prime[j]==0)
            lowest_prime[j]=i;
        }
      }
    }
    int x;
    cin>>x;
    vector<int> prime_factorization;
    while(x>1){
      int pf=highest_prime[x];
           //or
      //int pf=lowest_prime[x];
      while(x%pf==0){
        x=x/pf;
        prime_factorization.push_back(pf);
      }
    }
    for(int factor:prime_factorization){
      cout<<factor<<" ";
    }
  }  

    Time complexit: Log(N)
--------------------------------------------------
#56.we can also count the factors:
  #include<bits/stdc++.h>
  using namespace std; const int N=1e7+10;
  vector<bool> prime(N,1); //assume all num as prime.
  vector<int> highest_prime(N,0);
  vector<int> lowest_prime(N,0);
  int main(){
    prime[0]=prime[1]=false;
    for(int i=2;i<N;i++){
      if(prime[i]){
        lowest_prime[i]=highest_prime[i]=i;
        for(int j=2*i;j<N;j+=i){ //marks all multiple 
          prime[j]=false;
          highest_prime[j]=i;
          if(lowest_prime[j]==0)
            lowest_prime[j]=i;   //Sample input:
        }                        //24
      }                          //Sample output:
    }                            //2 3 -->means 2^3
    int x; cin>>x;               //3 1 -->means 3^1
    unordered_map<int,int> prime_factorization;
    while(x>1){
      int pf=highest_prime[x]; //or
      //int pf=lowest_prime[x];
      while(x%pf==0){
        x=x/pf;
        prime_factorization[pf]++;
      }
    }
    for(auto factor:prime_factorization)
      cout<<factor.first<<" "<<factor.second<<endl;
  }
  Time complexit: O(1)
#57.
#.Calculating all Divisor using sieve:
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> divisor[N];
int main(){
  for(int i=2;i<N;i++){
    for(int j=i;j<N;j+=i){
      divisor[j].push_back(i);
    }
  }
  for(auto i=1;i<100;i++){
    for(auto x:divisor[i]){
            cout<<x<<" ";
    }
    cout<<endl;
  }
  return 0;
}
#58.
#.Along with divisors we can also calulate sum 
of the divisors of each number.

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> divisor[N];
int sum[N];
int main(){
  for(int i=1;i<N;i++){
    for(int j=i;j<N;j+=i){
      divisor[j].push_back(i);
      sum[j]+=i;
    }
  }
  for(auto i=1;i<=10;i++){
    for(auto x:divisor[i]){
            cout<<x<<" ";
    }
    cout<<endl;
  }
  cout<<"SUM"<<endl;
  for(int i=1;i<=10;i++){
    cout<<"sum of divisor of "<<i<<":"<<sum[i]<<endl;
  }
  return 0;
}
-------------------------------------------
#59.
#.Modular multiplicative inverse(MMI):
Modular multiplicative inverse of A with M is only exist,
when M and A are co-prime.In other words, Modular 
multiplicative inverse of A and M are only defined 
when A and M are co-prime.
Co-prime means GCD(A,M)==1.

=>(a/b) % M = ?
Formula:
=>(a/b)%M = (a * (b^-1))%M  //b inverse.
=>(a/b)%M = {(a % M) * (b^-1)%M } % M
          Here (b^-1)%M is called MMI of b i.e 
          modular multiplicative inverse of b. 
#.How we can calculate b^(-1) % M ?
  from elementry math we know,
  if a*b=1,then b is multiplicative inverse of a. 
Similarly,
  if (a*b)%M=1,then b is Mudulo multiplicative 
               inverse of a.
        Here, 1 <= b <= (M-1) ,because
  we can write (a*b)%M=1 as:
               =>(a*b)%M = 1 
               =>{(a % M) * (b%M) } % M = 1
  here we are taking mudulo M of b , so b will
  always be smaller than M    

As b lies in  1 <= b <= (M-1), so can we get value of b. 
We simply run a loop from 1 to M-1 and check (a*b)%M==1, 
when we get it true so we get b as modular multiplicative 
inverse(MMI). This is not an optimise way to find MMI. 
-----------------------------------------------------------
#60.
#.Optimize Way to calculate MMI:

#.Fermat's theorem':

  A^(M-1) ≅ 1 mod(M), where M is a prime Number and A in not
                       a multiple of M. 
=> it states that if we take mudulo/divide A^(M-1) by M then 
   remiander will be 1. 
Eg:
  A=11,M=3,
  remainder=11^(3-1)%3
           =121%3=1

=> A^(M-1) ≅ 1 mod(M)
   multiplying both side by A^(-1) i.e A inverse, we get 
=>  A^(M-2) = A^(-1) mod(M)
  as it means,if we divide A^(M-2) by M,remainder will be A^(-1)
so,
  A^(M-2) % M = A^(-1), this is what we want. 
  Further as we know A^(M-2) % M can be calculated by binary 
  Exponentiation. As fun(A,M-2)
So, we can find MMI using binary Exponentiation in log(n)

#.When M is non prime where M and A are co-prime, then MMI is 
  Calculted by ExtendEuclid Algorithm.
#61.
CODE:Calculate MMI of 2 ?
    #include<iostream>
    using namespace std;
    const int M=1e9+7;
    int fun(int a,int b,int m){
      int ans=1;
      while(b>0){
        if(b&1)
          ans=(ans*1ll*a) % m;
        a=(a*1ll*a) % m;
        b=b>>1;
      }
      return ans;
    }
    int main(){
      int a=2;
      cout<<fun(a,M-2,M);
    }
----------------------------------------------------------
#.Application of MMI:
Q.There are N students and K toffees such that K<N. Count
  the number of ways to distribute toffee among N students  
  Such that each student get 1 toffee only. Ans %M for each 
  query. 
  M=10^9+7
  K<N<10^6.
  Solution:We can solve this question by nCr method.
  nCr= n! / [(n-r)! * r!]     ,! it means factorial
  Here we have to print %M, so we can not divide,so we will 
  have to take MMI of [(n-r)! * r!] and multiply it with n!

#62.
  #include<iostream>                               
  using namespace std;
  const int N=1e6+7;
  int fact[N];
  int fun(int a,int b,int m){
      int ans=1;
      while(b>0){
        if(b&1)
          ans=(ans*1ll*a) % m;
        a=(a*1ll*a) % m;
        b=b>>1;
      }
      return ans;
    }
  int main(){
    fact[0]=1;
    for(int i=1;i<N;i++){
      fact[i]=(fact[i-1]*1ll*i)%M;
    }
    int q; cin>>q;
    while(q--){
      int n,k;
      cin>>n>>k;
      int ans=fact[n];
      int den=(fact[n-r]*1ll*fact[r])%M;
      ans=ans*fun(den,M-2,M);
      cout<<ans<<endl;
    }
    return 0;
  }

--------------------------------------------------------------

                   
  