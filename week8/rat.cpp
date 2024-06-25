#include<bits/stdc++.h>
using namespace std;



bool isSafe(int maze[][4],int row,int col,int i,int j,vector<vector<bool>>&visited)
{
   //3 conditions should be checked
   //1.index i,j should in bound
   //2.in current cell there should be 1,path exists
   //3.it shouldn't be visited earlier
   
    if(((i>=0&&i<row)&&(j>=0&&j<col))&&(maze[i][j]==1)&&(visited[i][j]==false))
    {
      return true;
    }
    else
    {
      return false;
    }
}

 void solveMaze(int maze[][4],int row,int col,int i,int j,vector<vector<bool>>&visited, vector<string>&path,string output)
 {
   cout<<output<<endl;
 //base case
 //if we reached the destination
 if(i==row-1&&j==col-1)
 {
     path.push_back(output);
     return;
 }
 //we can move in 4 directions
 //DOWN i+1,j
 //LEFT  i,j-1
 //RIGHT i,j+1
 //UP    i-1,j
 
 
 //Down i+1,j
 if(isSafe(maze,row,col,i+1,j,visited))
 {
    visited[i+1][j]=true;
    solveMaze(maze,row,col,i+1,j,visited,path,output+'D');
     
    //backtrack
    visited[i+1][j]=false;
       
 }
 
 //left i,j-1
 if(isSafe(maze,row,col,i,j-1,visited))
 {
    visited[i][j-1]=true;
    solveMaze(maze,row,col,i,j-1,visited,path,output+'L');
     
    //backtrack
    visited[i][j-1]=false;
       
 }
 
 //right i,j+1
 if(isSafe(maze,row,col,i,j+1,visited))
 {
    visited[i][j+1]=true;
    solveMaze(maze,row,col,i,j+1,visited,path,output+'R');
     
    //backtrack
    visited[i][j+1]=false;
       
 }
 
 //up i-1,j
 if(isSafe(maze,row,col,i-1,j,visited))
 {
    visited[i-1][j]=true;
    solveMaze(maze,row,col,i-1,j,visited,path,output+'U');
     
    //backtrack
    visited[i-1][j]=false;
       
 }
 

  
   
}
int main()
{
   int maze[4][4]={
             {1,0,0,0},
             {1,1,0,0},
             {0,1,1,0},
             {0,1,1,1}
            };
      
   //if src =0      
   if(maze[0][0]==0)
   {
      cout<<"No Path Exists"<<endl;
      return 0;
   }
   
   
   int row=4;
   int col=4;
   vector<vector<bool>>visited(row,vector<bool>(col,false));
   //setting src as true
    visited[0][0]=true;
   vector<string>path;
   string output="";
   solveMaze(maze,row,col,0,0,visited,path,output);
   if(path.size()==0)
   {
     cout<<"No Path Exists"<<endl;
     return 0;
   }
   //print path
   cout<<"Possible paths are :"<<endl;
   for(auto i:path)
   {
     cout<<i<<" ";
   }
}
   
