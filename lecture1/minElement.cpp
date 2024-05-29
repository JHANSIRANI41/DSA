#include<bits/stdc++.h>
using namespace std;
int minElement(int arr[],int n,int ans)
{
  //base case
  if(n==0)
  //return min(arr[0],ans);
  return ans;
  //process
  if(arr[0]<ans)
  ans=arr[0];
  //recursive relation
  return minElement(arr+1,n-1,ans);
}
int main()
{
  int n;
  cout<<"enter the size of array ";
  cin>>n;
  int ans=INT_MAX;;
  
  int arr[30];
  for(int i=0;i<n;i++)
  {
     cin>>arr[i];
  }
 ans=minElement(arr,n,ans);
 cout<<"min element in the array is :"<<ans<<endl;
}
