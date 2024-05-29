#include<bits/stdc++.h>
using namespace std;
int noOfWays(int n)
{
  if(n==0||n==1)
  return 1;
  
  
  return noOfWays(n-1)+noOfWays(n-2);}
  
int main()
{
  int n;
  cout<<"enter the size of array ";
  cin>>n;
  int ans= noOfWays(n);
  cout<<"no of ways to solve it "<<ans<<endl;
}
