#include <iostream>
#include <map>
using namespace std;
int main()
{
    multimap<string, int> m;
    m.insert({"tv", 100});
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
    // it erases all the data with tv key :-m.erase("tv")
    m.erase(m.find("tv"));
    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
}