#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {1, -2, 3, 34, 5, 6};
    int size = 6;
    int max = INT_MAX;
    int maxindex;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < max)
        {
            max = arr[i];
            maxindex = i;
        }
    }
    int min = INT_MIN;
    int minindex;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > min)
        {
            min = arr[i];
            minindex = i;
        }
    }
    swap(arr[maxindex], arr[minindex]);
    cout << "swapped array=";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }

    return 0;
}