#include <iostream>
#include <utility>
using namespace std;
pair<int, int> twoDarr(int mat[][3], int rows, int col, int key)
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (mat[i][j] == key)
                return pair<int, int>(i, j);
        }
    }
    return pair<int, int>(-1, -1);
}
int main()
{
    int mat[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    pair<int, int> Pair = twoDarr(mat, 4, 3, 9);
    cout << Pair.first << endl
         << Pair.second;
}