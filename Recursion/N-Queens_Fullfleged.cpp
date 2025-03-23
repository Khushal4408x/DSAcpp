#include<iostream>
#include <vector>
using namespace std;
bool issafe(vector<string>chessboard,int row ,int col,int n){
//same column attack;
    for(int i=0;i<row;i++){
        if(chessboard[i][col]=='Q'){
            return false;
        }
    }
    //left diagonal attack
    for(int i=row,j=col;i>0&&j>0;i--,j--){
        if(chessboard[i-1][j-1]=='Q'){
return false;
        }
    }
    //right diag attack;
    for (int i = row,j=col; i >0&&j<n-1; i--,j++)
    {
      if(chessboard[i-1][j+1]=='Q'){
        return false;
      }
    }
    return true;
    
}
void solveNqueens(vector<string>&chessboard,int row,int n ,vector<vector<string>>&sollutions){
    if(row>=n){
        sollutions.push_back(chessboard);
        return;
    } 
    
    for(int col=0;col<n;col++){

        if(issafe(chessboard,row,col,n)){
            chessboard[row][col]='Q';
           solveNqueens(chessboard,row+1,n,sollutions);
           chessboard[row][col]='.';
        }

    }
   
}
void printoutput(vector<string>&chessboard,int n){
    for (int  i = 0; i <n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cout<<chessboard[i][j]<<" ";
      }
      cout<<endl;
      
    }
    
}
int main(){
    int n=5;
    vector<string>chessboard;
    vector<vector<string>>sollutions;
    
    

    chessboard.assign(n,string(n,'.'));
    solveNqueens(chessboard,0,n,sollutions);
    for(auto boards:sollutions){
        printoutput(boards,n);
        cout<<"==============="<<endl;
    } 
        


}