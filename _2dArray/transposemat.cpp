#include <iostream>
using namespace std;
int main()
{
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int tmat[3][3];
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            tmat[i][j] = mat[j][i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << tmat[i][j] << " ";
        }
        cout << endl;
    }
}