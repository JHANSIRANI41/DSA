#include<bits/stdc++.h>
using namespace std;
bool findKey(string &str,char &key,int &n,int i)
{
  //base case
  if(i>=n)
  return false;
   
   // solve 1 case
  if(str[i]==key)
    return true;
  //baki recursion sambhal lega
  
  return findKey(str,key,n,i+1);
}
int findKeyIndex(string &str,char &key,int &n,int i)
{
  //base case
  if(i>=n)
  return -1;
   
   // solve 1 case
  if(str[i]==key)
    return i;
  //baki recursion sambhal lega
  
  return findKeyIndex(str,key,n,i+1);
}
void findAllOcc(string &str,char &key,int &n,int i)
{
  //base case
  if(i>=n)
  return ;
   
   // solve 1 case
  if(str[i]==key)
   cout<<" found at "<<i<<endl;
  //baki recursion sambhal lega
  
   findAllOcc(str,key,n,i+1);
 }  
void findAllOccStore(string &str,char &key,int &n,int i,vector<int>&arr)
{
    //base case
  if(i>=n)
  return ;
   
   // solve 1 case
  if(str[i]==key)
  arr.push_back(i);
  //baki recursion sambhal lega
  
  findAllOccStore(str,key,n,i+1,arr);
}
void findCount(string &str,char &key,int &n,int i,int &count)
{
   //base case
  if(i>=n)
  return ;
   
   // solve 1 case
  if(str[i]==key)
   ++count;
  //baki recursion sambhal lega
  
  findCount(str,key,n,i+1,count);
}
int main()
{
  string str="lovebabbar";
  int n=str.size();
  int i=0;
  char key='b';
  
  //finding the key
  bool ans1=findKey(str,key,n,i);
  cout<<" ans is "<<ans1<<endl; 
  //finding the index of key
  int ans2=findKeyIndex(str,key,n,i);
  cout<<" ans is "<<ans2<<endl;
  
  //finding the all occurance sof key
  findAllOcc(str,key,n,i);
  //storing in a vector
  vector<int>a;
  findAllOccStore(str,key,n,i,a);
  //printing the array
  for( i=0;i<a.size();i++)
  {  
    cout<<a[i]<<" ";
  }
  cout<<endl;
  int count=0;
  findCount(str,key,n,i,count);
  cout<<"the count is :"<<count<<endl;
}
