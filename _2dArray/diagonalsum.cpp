#include <iostream>
#include <vector>
using namespace std;
int diagsum(int n, vector<vector<int>> &mat)
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == j || i + j == n - 1)
      {
        sum = sum + mat[i][j];
      }
    }
  }
  if ((n) % 2 == 0)
  {
    sum = sum - mat[n / 2][n / 2];
  }
  return sum;
}
int main()
{
  int n;
  cout << "Enter the num of rows of sqre mat ";
  cin >> n;
  vector<vector<int>> mat(n, vector<int>(n));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "Enter the (" << i << "," << j << "): ";
      cin >> mat[i][j];
    }
  }
  int sum = diagsum(n, mat);
  cout << "sum is:  " << sum;
}