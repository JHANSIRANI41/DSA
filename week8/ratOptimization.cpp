#include<bits/stdc++.h>
using namespace std;
 //DOWN i+1,j
 //LEFT  i,j-1
 //RIGHT i,j+1
 //UP    i-1,j
 
int dx[4]={1,0,0,-1};
int dy[4]={0,-1,1,0};
string dir = "DLRU";

bool isSafe(int maze[][4],int row,int col,int i,int j,vector<vector<bool>>&visited)
{
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
 //base case
 
 if(i==row-1&&j==col-1)
 {
     path.push_back(output);
     return;
 }
 //we can move in 4 directions
 //int dx[]={1,0,0,0};
//int dy[]={0,-1,1,0};
//char dir[]={'D','L','R','U'};
 //DOWN i+1,j
 //LEFT  i,j-1
 //RIGHT i,j+1
 //UP    i-1,j
 
 
 //OPTIIZATION
 for(int k=0;k<4;k++)
 {
    //main logic
    int newx=i+dx[k];
    int newy=j+dy[k];
    if(isSafe(maze,row,col,newx,newy,visited))
 {
    visited[newx][newy]=true;
    solveMaze(maze,row,col,newx,newy,visited,path,output+dir[k]);
     
    //backtrack
    visited[newx][newy]=false;
       
 }
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
   for(auto i:path)
   {
     cout<<i<<" ";
  }
}
   
