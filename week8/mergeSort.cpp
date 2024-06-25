#include<bits/stdc++.h>
using namespace std;
void merge2SortedArrays(int *arr,int s,int e)
{

  int mid=s+(e-s)/2;
 
 //create 2 arrays and copy elements
 int len1=mid-s+1;
 int len2=e-mid;
 
 
 int *left=new int[len1];
 int *right=new int[len2];
 
 //copy elements
 int k=s;
 for(int i=0;i<len1;i++)
 {
   left[i]=arr[k++];
 }
 
 
 k=mid+1;
 for(int i=0;i<len2;i++)
 {
    right[i]=arr[k++];
 }
  
  
 
 //merge 2 sorted arrays
 
 int index=s;
 int leftIndex=0;
 int rightIndex=0;
 
while(leftIndex<len1&&rightIndex<len2)
{
 if(left[leftIndex]<right[rightIndex])
  {
    arr[index++]=left[leftIndex++];
  }
  else
  {
    arr[index++]=right[rightIndex++];
  }
  
  
}
 
//left remaining elements copy

while(leftIndex<len1)
{
   arr[index++]=left[leftIndex++];
}

//right remaining elements copy

while(rightIndex<len2)
{
  arr[index++]=right[rightIndex++];
}
 
}




 
void mergeSort(int *arr,int s,int e)
{
   //s==e base case(single element)
   //s>e  (invalid case)
   
   if(s>=e)
     return ;
     
   int mid=s+(e-s)/2;
   
   //left division and recursion 
   mergeSort(arr,s,mid);
   
   //right division and recursion
   
   mergeSort(arr,mid+1,e);
   
   
   //merge 
   merge2SortedArrays(arr,s,e);
}


int main()
{
  int arr[]={5,2,3,1,9,4};
  int n=6;
  
  int s=0;
  int e=n-1;
  
  mergeSort(arr,s,e);
  
  
  //printing the array
  
  for(int i=0;i<n;i++)
  {
     cout<<arr[i]<<" ";
  }
}
