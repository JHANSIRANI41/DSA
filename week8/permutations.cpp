#include<bits/stdc++.h>
using namespace std;

void Permutations(string &str,int i)
{
   if(i>=str.length())
   {
     cout<<str<<" ";
     
     return ;
   }
   
   for(int j=i;j<str.length();j++)
   {
      swap(str[i],str[j]);
      Permutations(str,i+1);
      swap(str[i],str[j]);
   }
}
      
   
int main()
{
  string str="xyz";
  int i=0;
  Permutations(str,i);
 }
