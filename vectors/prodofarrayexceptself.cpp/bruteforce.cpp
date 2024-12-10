#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> vec = {1, 2, 3, 4};
    vector<int> vec1;
    for (int i = 0; i < vec.size(); i++)
    {
        int finalelement;
        int prod = 1;
        for (int j = 0; j < vec.size(); j++)
        {

            prod = prod * vec[j];
            finalelement = prod / (vec[i]);
        }
        vec1.push_back(finalelement);
    }
    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << " ";
    }
}