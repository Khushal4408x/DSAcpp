#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = vec.size();
    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n; end++)
        {
            for (int i = st; i <= end; i++)
            {
                cout << vec[i];
            }
            cout << " ";
        }

        cout << endl;
    }
}