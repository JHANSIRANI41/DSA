#include<bits/stdc++.h>
using namespace std;


int fib(int n)
{
 //base case
  if(n==1)//first term
  return 0;
  if(n==2)//second term
  return 1;
  
   int ans=fib(n-1)+fib(n-2);
   return ans;
} 
int main()
{
  int n;
  cout<<"enter the n value :";
  cin>>n;
  
  int ans=fib(n);
  cout<<n<<" the answer is :"<<ans<<endl;
}
  
