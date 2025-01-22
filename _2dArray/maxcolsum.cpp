#include <iostream>
#include <climits>
using namespace std;
int maxcolsum(int mat[][2], int row, int col)
{
    int maxsum = INT_MIN;
    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += mat[j][i];
        }
        if (sum > maxsum)
        {
            maxsum = sum;
        }
    }
    return maxsum;
}
int main()
{
    int mat[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int maxsum = maxcolsum(mat, 3, 2);
    cout << maxsum;
}