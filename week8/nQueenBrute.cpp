#include<bits/stdc++.h>
using namespace std;
bool isSafe(int row,int col,vector<vector<char>>&board,int n)
{
   //
   int i=row;
   int j=col;
   
   //left row
   
   while(j>=0)
   {
     if(board[i][j]=='Q')
     {
       return false;
     }
     j--;
   }
   i=row;
   j=col;
   
   //left upper diagonal
   while(i>=0&&j>=0)
   {
     if(board[i][j]=='Q')
     {
       return false;
     }
     j--;
     i--;
   }
   i=row;
   j=col;
   
   //left lower diagonal
    while(i<n&&j>=0)
   {
     if(board[i][j]=='Q')
     {
       return false;
     }
     j--;
     i++;
   }
   return true;
 }
   
   
void printSolution(vector<vector<char>>&board,int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      cout<<board[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
}
void solveBoard(vector<vector<char>>&board,int col,int n)
{
//base case 
//if we reach out of columns
if(col>=n)
{
  printSolution(board,n);
  return;
}

//place queen at all rows in the given col
for(int row=0;row<n;row++)
{
  if(isSafe(row,col,board,n))
  { //1 case solve kardo
     board[row][col]='Q';
    
    //baki recursion sambhal lega
    //check all columns
     solveBoard(board,col+1,n);
    
    //backtracking
     board[row][col]='.';
      
   }
}
    
 }   
    
int main()
{
  int n=6;
  //create the board with all 0's
  vector<vector<char>>board(n,vector<char>(n,'.'));
  //we will start with column 0
  int col=0;
  
  solveBoard(board,col,n);
}
  
  
  
