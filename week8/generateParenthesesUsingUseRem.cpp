#include<bits/stdc++.h>
using namespace std;
//using used_open,used_close,rem_open,rem_close
void solveBrackets(vector<string>&ans,int used_open,int used_close,int rem_open,int rem_close,string output)
{
   cout<<output<<endl;
  //base case
  if(rem_open==0&&rem_close==0)
  {
     ans.push_back(output);
     return;
  }
  
  //include the open bracket 
  if(rem_open>0)//if open brackets are available to add
  {
    output.push_back('(');
    solveBrackets(ans,used_open+1,used_close,rem_open-1,rem_close,output);
    
    //backtrack
    output.pop_back();
   
  }
  
  //include the closed bracket
  if(used_open>used_close)
  {
     output.push_back(')');
     solveBrackets(ans,used_open,used_close+1,rem_open,rem_close-1,output);
    
     //backtrack
     output.pop_back();
     
     
  }
}
    
    
     
int main()
{
  
  int n=2;
  int used_open=0;
  int used_close=0;
  int rem_open=n;
  int rem_close=n;
  vector<string>ans;
  string output="";
  solveBrackets(ans,used_open,used_close,rem_open,rem_close,output);
  cout<<"the ans is "<<endl;
  for(auto i:ans)
  {
    cout<<i<<" ";
  }
}
  
