#include <iostream>
using namespace std;
int main()
{
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat1[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int summat[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            summat[i][j] = mat[i][j] + mat1[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << summat[i][j] << " ";
        }
        cout << endl;
    }
}