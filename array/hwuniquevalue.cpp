#include <iostream>
using namespace std;

void finduniqueelements(int arr[], int size, int unique[], int &uniqueSize)
{
    uniqueSize = 0;
    for (int i = 0; i < size; i++)
    {
        bool isunique = true; // Assume the element is unique initially
        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isunique = false;
                break;
            }
        }
        if (isunique == true)
        {
            unique[uniqueSize++] = arr[i];
        }
    }
}

int main()
{
    int arr[] = {1, 1, 3, 4, 5, 5};
    int size = 6;
    int unique[100];
    int uniqueSize;
    finduniqueelements(arr, size, unique, uniqueSize);

    cout << "Unique elements are: ";
    for (int i = 0; i < uniqueSize; i++)
    {
        cout << unique[i] << " ";
    }
    cout << endl;

    return 0;
}
