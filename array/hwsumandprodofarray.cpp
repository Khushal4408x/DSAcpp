#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6, prod = 1;
    for (int i = 0; i < size; i++)
    {
        prod = prod * arr[i];
    }
    cout << "product of all values of array= " << prod << endl;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout << "sum of all values of array= " << sum << endl;
    return 0;
}