#include<bits/stdc++.h>
using namespace std;
int findKey(int arr[],int n,int key,int count)
{
  
  if(n==0)
     return count;
  if(arr[0]==key)
  count++;
  
   return findKey(arr+1,n-1,key,count);
}
  
  
  
int main()
{
  int n;
  cout<<"enter the size of array ";
  cin>>n;
  int count=0;
  
  
  int arr[30];
  cout<<"enter the array element :"<<endl;
  
  for(int i=0;i<n;i++)
  {
     cin>>arr[i];
  }
  int key;
  cout<<"enter the key "<<endl;
  cin>>key;
  int ans=findKey(arr,n,key,count);
  cout<<" index of key is "<<ans<<endl;
  
  
}
