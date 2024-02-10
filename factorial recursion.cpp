//Factorial programme using recursion
#include<iostream>
using namespace std;
int Factorial(int n)
{
   //This is base condition
   if(n==0)
     return 1;
   int smallproblem=Factorial(n-1);
  int bigproblem=n*smallproblem;
  return bigproblem;

}
int main()
{
   int n;
   cout<<"Enter any number"<<endl;
   cin>>n;
   //function call 
    int ans = Factorial(n);
    cout<<"The factorial of "<<n<<" number is "<<ans;
    return 0;
}
