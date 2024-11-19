#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 4, 6, 7, 66, 77, 5};
    int size = 7, start = 0, end = (size - 1);
    if (size % 2 == 0)
    {
        while (start < end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        cout << "revrse array is = { ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << ",";
        }
        cout << " }" << endl;
    }
    if (size % 2 == 1)
    {
        while (start < end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        cout << "revrse array is = { ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << ",";
        }
        cout << " }" << endl;
    }
    return 0;
}