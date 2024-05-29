#include<bits/stdc++.h>
using namespace std;

void digits(int n)
{
  //base case
  if(n==0)
  return ;
  
  //1 case mei solve karunga
  int rem=n%10;
  
  //cout<<rem<<" ";//for reverse order
  
  //baki recursion sambhal lega
  digits(n/10);
  cout<<rem<<" ";//for correct order
}
int main()
{
  int n;
  cout<<"enter the n value :";
  cin>>n;
  digits(n);
}
