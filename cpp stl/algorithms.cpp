#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
bool comparator(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second > p2.first)
        return false;
    if (p1.second < p2.first)
        return true;
    if (p1.first < p2.first)
        return true;
    else
        return false;
}
int main()
{
    int arr[5] = {3, 5, 63, 0, 1};
    vector<int> vec = {3, 5, 63, 0, 1};

    sort(arr, arr + 5);
    sort(vec.begin(), vec.end());
    for (int a : arr)
    {
        cout << a;
    }
    cout << endl;
    for (int v : vec)
    {
        cout << v;
    }
    cout << endl
         << "if a vector has pairs then by default sorting happens for firs pair of element";
    // for custom logic we can create custom comparator(bool type function)
    vector<pair<int, int>> vec1 = {{4, 1}, {5, 0}, {1, 0}, {9, 1}};
    sort(vec1.begin(), vec1.end());
    cout << endl;
    for (auto p : vec1)
    {
        cout << p.first << " " << p.second << endl;
    }
    sort(vec1.begin(), vec1.end(), comparator);
    cout << "use of custom comparator" << endl;
    for (auto p : vec1)
    {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}