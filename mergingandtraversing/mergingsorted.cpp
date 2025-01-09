#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSortedArrays(vector<int> &arr1, vector<int> &arr2)
{
    int i = 0, j = 0;
    vector<int> merged;

    // Compare elements from both arrays and merge them
    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] < arr2[j])
        {
            merged.push_back(arr1[i]);
            i++;
        }
        else
        {
            merged.push_back(arr2[j]);
            j++;
        }
    }

    // If elements are left in arr1
    while (i < arr1.size())
    {
        merged.push_back(arr1[i]);
        i++;
    }

    // If elements are left in arr2
    while (j < arr2.size())
    {
        merged.push_back(arr2[j]);
        j++;
    }

    return merged;
}

int main()
{
    vector<int> arr1 = {1, 3, 5};
    vector<int> arr2 = {2, 4, 6};

    vector<int> result = mergeSortedArrays(arr1, arr2);

    cout << "Merged Array: ";
    for (int i : result)
    {
        cout << i << " ";
    }
    return 0;
}
