#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int maxarea = 0;

    vector<int> vec = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = vec.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= (n - i) + 1; j++)
        {
            int area;
            int length = min(vec[i], vec[j]);
            int width = j - i;
            area = length * width;
            maxarea = max(maxarea, area);
        }
    }
    cout << maxarea;
    return 0;
}