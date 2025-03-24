#include<iostream>
#include <vector>
using namespace std;
bool issafe(vector<vector<char>>&sudoku,int row ,int col,char trial){
    //vertical
    for (int i = 0; i < row; i++)
    {
        if (sudoku[i][col]==trial){
            return false;
        }
    }
    for (int i = row+1; i < 9; i++)
    {
        if (sudoku[i][col]==trial){
            return false;
        }
    }
    //Horizontal
    for( int  i = 0; i < col; i++)
    {
        if(sudoku[row][i]==trial){
            return false;
        }
    }
    for (int i = col+1; i < 9; i++)
    {
        if(sudoku[row][i]==trial){
            return false;
        }
    }
    // Small squares
//upper right square-:
    if(row<=2&&col<=2){
        for (int  i = 0; i <= 2; i++)
        {
            for (int j= 0; j<=2; j++)
            {
             if (sudoku[i][j]==trial)
             {
                return false;
             }
             
            }
            
        }
     }
     //upper middle square 
    if(row<=2&& col>2&&col<6){
        for (int  i = 0; i <=2; i++)
        {
            for (int j = 3; j <6; j++)
            {
                if (sudoku[i][j]==trial)
                {
                    return false;
                }
                
            }
            
        }
        
    }
    //upper right square 
    if(row<=2&& col>5&&col<=8){
        for (int  i = 0; i <=2 ; i++)
        {
            for (int j = 6; j <=8; j++)
            {
                if (sudoku[i][j]==trial)
                {
                    return false;
                }
                
            }
        }
    }
    //middle left square
    if(row<=5&&row>=3&& col<=2){
        for (int  i = 3; i <=5; i++)
        {
            for (int j = 0; j <=2; j++)
            {
                if (sudoku[i][j]==trial)
                {
                    return false;
                }
                
            }
            
        }
        
    }
    //middle middle square
    if(row<=5&&row>=3&& col>2&&col<=5){
        for (int  i = 3; i <=5 ; i++)
        {
            for (int j = 3; j <=5; j++)
            {
                if (sudoku[i][j]==trial)
                {
                    return false;
                }
                
            }
        }
    }
//middle right square 
if(row<=5&&row>=3&& col>5&&col<=8){
    for (int  i = 3; i <=5 ; i++)
    {
        for (int j = 6; j <=8; j++)
        {
            if (sudoku[i][j]==trial)
            {
                return false;
            }
            
        }
    }
}
//lower left square
if(row<=8&&row>=6&& col>=0&&col<=2){
    for (int  i = 6; i <=8 ; i++)
    {
        for (int j = 0; j <=2; j++)
        {
            if (sudoku[i][j]==trial)
            {
                return false;
            }
            
        }
    }
}
//lower middle square
if(row<=8&&row>=6&& col>2&&col<=5){
    for (int  i = 6; i <=8 ; i++)
    {
        for (int j = 3; j <=5; j++)
        {
            if (sudoku[i][j]==trial)
            {
                return false;
            }
            
        }
    }
}
//lower right 
if(row<=8&&row>=6&& col>5&&col<=8){
    for (int  i = 6; i <=8 ; i++)
    {
        for (int j = 6; j <=8; j++)
        {
            if (sudoku[i][j]==trial)
            {
                return false;
            }
            
        }
    }
}
return true;
}
bool sudokusolver(vector<vector<char>>&sudoku,int row ,int col){
    if(row==9){
        return true;
    }
    int nextrow=row;
    int nextcol=col+1;
    if(nextcol==9){
        nextcol=0;
        nextrow=row+1;
    }
    if(sudoku[row][col]!='.'){
       return sudokusolver(sudoku,nextrow,nextcol);
    }
    for(char dig='1';dig<='9';dig++){
        if(issafe(sudoku,row,col,dig)){
            sudoku[row][col]=dig;
            if(sudokusolver(sudoku,row,col)){
                return true;
            }
            sudoku[row][col]='.';
        }

    }
    return false;
}
void sudokuprint(vector<vector<char>>&sudoku){
for (int  i = 0; i < 9; i++)
{
   for (int j = 0; j < 9; j++)
   {
    cout<<"  "<<sudoku[i][j];
   }
   
}
cout<<endl;

}
int main (){
vector<vector<char>>sudoku={{'5','3','.','.','7','.','.','.','.'},{'6','.','.','1','9','5','.','.','.'},{'.','9','8','.','.','.','.','6','.'},{'8','.','.','.','6','.','.','.','3'},{'4','.','.','8','.','3','.','.','1'},{'7','.','.','.','2','.','.','.','6'},{'.','6','.','.','.','.','2','8','.'},{'.','.','.','4','1','9','.','.','5'},{'.','.','.','.','8','.','.','7','9'}};
if (sudokusolver(sudoku, 0, 0)) {
    sudokuprint(sudoku);
} else {
    cout << "No solution exists." << endl;
}
}