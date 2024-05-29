#include<bits/stdc++.h>
using namespace std;
///pass by value 
//output:INT_MIN
/*void findMaxi(int arr[],int n,int i,int maxi)
{
  //base case
   if(i>=n)
   return;
  //1 case solve karo
   if(arr[i]>maxi)
   maxi=arr[i];
   
  //baki recursion sambal lega
   findMaxi(arr,n,i+1,maxi);
}
*/

//using refernece variable
//output: max element 
void findMax(int arr[],int n,int i,int &maxi)
{
  //base case
   if(i>=n)
   return;
  //1 case solve karo
   if(arr[i]>maxi)
   maxi=arr[i];
   
  //baki recursion sambal lega
   findMax(arr,n,i+1,maxi);
}
void findMin(int arr[],int n,int i,int &mini)
{
  //base case
   if(i>=n)
   return;
  //1 case solve karo
   if(arr[i]<mini)
   mini=arr[i];
   
  //baki recursion sambal lega
   findMin(arr,n,i+1,mini);
}
int main()
{
  int n;
  cout<<"enter the value of n :";
  cin>>n;
  int i=0;
  int maxi=INT_MIN;
  int mini=INT_MAX;
  int arr[10];
  cout<<"enter the elements of array :";
  for(int i=0;i<n;i++)
  {
     cin>>arr[i];
  }
  //pass by value 
  findMax(arr,n,i,maxi);
  findMin(arr,n,i,mini);
  
  cout<<"max value is :"<<maxi<<endl;
  cout<<"min value is :"<<mini<<endl;
}
