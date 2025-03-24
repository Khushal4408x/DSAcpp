#include <iostream>
#include <vector>
using namespace std;
void helper (vector<vector<int >>&maze,int row ,int col,int n,vector<string>&ans,string str,vector<vector<bool>>&vis){
    if(row<0||col<0||row>=n||col>=n||maze[row][col]==0||vis[row][col]==true){
        return;
    }
    if(row==n-1&&col==n-1){
        ans.push_back(str);
        return ;
    }
    vis[row][col]=true;
    //U
    helper(maze,row-1,col,n,ans,str+"U",vis);
    //D
    helper(maze,row+1,col,n,ans,str+"D",vis);
    //L
    helper(maze,row,col-1,n,ans,str+"L",vis);
    //R
    helper(maze,row ,col+1,n,ans,str+"R",vis);
    vis[row][col]=false;
    

}
void mazesolver(vector<vector<int>>&maze,int row ,int col){
    int n=maze.size();
    if(maze[0][0]==0||maze[n-1][n-1]==0){
        cout<<"NO PATHS FOUND";
        return;
    }
    vector<string>ans;
    string str;
    vector<vector<bool>>vis(n,vector<bool>(n,false));

    helper(maze,row ,col, n,ans,str,vis);
   if(ans.empty()){
    cout<<"NO PATHS FOUND";
   }
   else{
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i];
        cout<<endl;
    }
}
}
int main(){
    vector<vector<int>>maze=
        {
            {1, 1, 1, 0},
            {1, 1, 0, 1},
            {1, 1, 0, 0},
            {1, 1, 1, 1}
          };
          mazesolver(maze,0,0);
          
          
}