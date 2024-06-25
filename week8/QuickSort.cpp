#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int s,int e)
{
   //step1: choose the pivot element
   int pivotIndex=s;
   int pivotElement=arr[s];
   
   //step 2:place the pivotElement at the right position in the array
   int count=0;
   for(int i=s+1;i<=e;i++)
   {
     if(arr[i]<=pivotElement)
     {
       count++;
     }
   }
   
   //step 3: swap to the right position 
   int rightIndex=s+count;
   swap(arr[pivotIndex],arr[rightIndex]);
   pivotIndex=rightIndex;
   
   //step 4: place smaller to left and bigger to right of pivotElement
   int i=s;
   int j=e;
   
   while(i<pivotIndex&&j>pivotIndex)
   {
      while(arr[i]<=pivotElement)
      {
        i++;
      }
       while(arr[j]>pivotElement)
      {
        j--;
      }
   //2 cases 
   //A.elements are not in correct position
   //B.elements are already in correct position
   
   if(i<pivotIndex&&j>pivotIndex)
   {
      swap(arr[i],arr[j]);
   }
 }
 return pivotIndex;
}
   
      
void quickSort(int arr[],int s,int e)
{
  //base case
  if(s>=e)
  {
   return;
  }
  
  //partition logic
  int p=partition(arr,s,e);
  
  //recursion calls
  
  //left
  quickSort(arr,s,p-1);
  
  //right
  quickSort(arr,p+1,e);
}
  
int main()
{
  int arr[]={8,3,4,20,1,1,1,5,50,50,1,50,30};
  int n=13;
  int s=0;
  int e=n-1;
  
  quickSort(arr,s,e);
  
  //printing the array
  
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  
}
