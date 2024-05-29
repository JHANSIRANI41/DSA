#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
   cout<<"value of n of function :"<<n<<endl;
   //base case(mandatory case)
   if(n==1)
   return 1;

   int smallProblem=factorial(n-1);
   int bigProblem=n*smallProblem;
   
   return bigProblem;
}


int main()
{
  int n;
  cout<<"enter the value of n :"<<endl;
  cin>>n;
  
  int ans=factorial(n);
  
  cout<<"Answer is :"<<ans<<endl;
}
