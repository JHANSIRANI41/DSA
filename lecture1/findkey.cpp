#include<bits/stdc++.h>
using namespace std;
bool findKey(int arr[],int n,int key)
{
  
  if(n==0)
     return false;
  if(arr[0]==key)
  return true;
  
   return findKey(arr+1,n-1,key);
}
  
  
  
int main()
{
  int n;
  cout<<"enter the size of array ";
  cin>>n;
  
  
  int arr[30];
  cout<<"enter the array element :"<<endl;
  
  for(int i=0;i<n;i++)
  {
     cin>>arr[i];
  }
  int key;
  cout<<"enter the key "<<endl;
  cin>>key;
  bool ans=findKey(arr,n,key);
  cout<<" ans is "<<ans<<endl;
  
  
}

  
  
