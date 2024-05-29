#include<bits/stdc++.h>
using namespace std;
int findKey(int arr[],int n,int key,int m)
{
  
  if(n==0)
     return -1;
  if(arr[0]==key)
  return (m-n);
  
   return findKey(arr+1,n-1,key,m);
}
  
  
  
int main()
{
  int n;
  cout<<"enter the size of array ";
  cin>>n;
  int m=n;
  
  
  int arr[30];
  cout<<"enter the array element :"<<endl;
  
  for(int i=0;i<n;i++)
  {
     cin>>arr[i];
  }
  int key;
  cout<<"enter the key "<<endl;
  cin>>key;
  int ans=findKey(arr,n,key,m);
  cout<<" index of key is "<<ans<<endl;
  
  
}

