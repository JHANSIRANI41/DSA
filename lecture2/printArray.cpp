#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n,int i)
{
   //base case 
   if(i>=n)
     return ;
   //solve 1 case
   cout<<arr[i]<<" ";
   
   //then,everything will be taken care by recursion
   print(arr,n,i+1);
}
 
int main()
{
  int n;
  cout<<"enter the value of n :";
  cin>>n;
  int i=0;
 
  int arr[10];
  cout<<"enter the elements of array :";
  for(int i=0;i<n;i++)
  {
     cin>>arr[i];
  }

  print(arr,n,i);
 
}
