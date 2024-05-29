#include<bits/stdc++.h>
using namespace std;
int maxElement(int arr[],int n,int ans)
{
  //base case
  //if(n==1)
  //return max(arr[0],ans);
  if(n==0)
  return ans;
    //process
  if(arr[0]>ans)
  ans=arr[0];
   //recursive relation
  return maxElement(arr+1,n-1,ans);
  

}
int main()
{
  int n;
  cout<<"enter the size of array ";
  cin>>n;
  int ans=INT_MIN;
  
  int arr[19];
  for(int i=0;i<n;i++)
  {
     cin>>arr[i];
  }
 ans=maxElement(arr,n,ans);
 cout<<"max element in the array is :"<<ans<<endl;
}
