#include<bits/stdc++.h>
using namespace std;
void solveBrackets(vector<string>&ans,int open,int close,string output)
{
   cout<<output<<endl;
  //base case
  if(open==0&&close==0)
  {
     ans.push_back(output);
     return;
  }
  
  //include the open bracket 
  if(open>0)//if open brackets are available to add
  {
    output.push_back('(');
    solveBrackets(ans,open-1,close,output);
    
    //backtrack
    output.pop_back();
  }
  
  //include the closed bracket
  if(close>open)
  {
     output.push_back(')');
    solveBrackets(ans,open,close-1,output);
    
    //backtrack
    output.pop_back();
  }
}
    
    
     
int main()
{
  
  int n=2;
  int open=n;
  int close=n;
  vector<string>ans;
  string output="";
  solveBrackets(ans,open,close,output);
  cout<<"the ans is "<<endl;
  for(auto i:ans)
  {
    cout<<i<<" ";
  }
}
  
