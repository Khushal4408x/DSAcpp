#include <iostream>
#include <vector>
using namespace std;
void mergesort(vector<int> &A, vector<int> &B, int m, int n)
{
    int indx = m + n - 1;
    int i = m - 1;
    int j = n - 1;
    while (i >= 0 && j >= 0)
    {
        if (A[i] >= B[j])
        {
            A[indx] = A[i];
            indx--;
            i--;
        }
        else
        {
            A[indx] = B[j];
            j--;
            indx--;
        }
    }
    while (j >= 0)
    {
        A[indx] = B[j];
        j--;
        indx--;
    }
}
int main()
{
    vector<int> arr1 = {1, 2, 3, 0, 0, 0};
    vector<int> arr2 = {2, 5, 6};
    int m = 3;
    int n = 3;
    mergesort(arr1, arr2, m, n);
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i];
        return 0;
    }
}