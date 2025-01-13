#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> um;
    um.insert({"tv", 100});
    um.emplace("fridge", 50);
    um.emplace("laptop", 25);
    for (auto p : um)
    {
        cout << p.first << " " << p.second << endl;
    }
}