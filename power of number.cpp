//2^n (Power of 2) using recursion
#include<bits/stdc++.h>
using namespace std;
int powerr(int n,int p)
{
// This is the Base case
    if(p==0)
      return 1;
//This is the Recursive relation
   int smallproblem= powerr(n-1);
  int ans = n*smallproblem;
  return ans;
}
int main()
{
    int n,p;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"Enter 2^n "<<endl;
     cin>>p;
     int answer = powerr(n,p);
     cout<<"The power is : "<<answer;
   return 0;
}
