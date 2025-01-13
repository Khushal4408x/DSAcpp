#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> m;
    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 50;
    m.insert({"camera", 25});
    m.emplace("frige", 10);
    m.erase("headphones");
    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
    cout << "Count func tells number of values associated with a key: " << m.count("tv") << endl;
    if (m.find("camera") != m.end())
    {
        cout << "found\n";
    }
    else
    {
        cout << "not found\n";
    }

    return 0;
}
