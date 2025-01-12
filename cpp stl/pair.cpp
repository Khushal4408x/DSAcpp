#include <iostream>
#include <vector>
#include <string> //because of this we can we can we can store "Khushal" string in p
// double inverted comma = STRING
// SINGLE inverted comma = CHAR(char can store only one letter, num, symbol)
using namespace std;
int main()
{
    pair<int, string> b1 = {18, "Khushal"};
    pair<int, char> b2 = {16, 'kunal'}; // something's wrong here figure it out
    cout << b1.second << " is " << b1.first << endl;
    cout << b2.second << " is " << b2.first << endl;
    pair<pair<int, string>, int> b1st = {b1, 2006};
    cout << b1st.first.second << " " << b1st.second << endl;
    vector<pair<string, int>> f = {{"Navaneet", 48}, {"Kumud", 47}, {"Kunal", 16}, {"Khushal", 18}};
    for (auto member : f)
    {
        cout << member.first << " ";
    }
    cout << endl;
    f.push_back({"mai", 2010});       // push back assumes the given data has not to be changed before insertion
    f.emplace_back("papa&mai", 2025); // emplace back creates a pair at the time of insertion by itself
    for (pair<string, int> member : f)
    {
        cout << member.first << " ";
    }
}
