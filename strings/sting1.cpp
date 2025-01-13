#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string str1 = "Khushal";
    string str2 = "Singh";
    string strf = str1 + str2;
    cout << strf << endl;
    cout << (str1 < str2) << endl; // lexographical comparision
    cout << str1.length() << endl;
    string str;
    /*cin >> str; /*if we give space in input then
       data before space will be only considered
    cout << str << endl;*/
    string spacestr;
    getline(cin, spacestr);
    cout << spacestr << "  this can have spaces" << endl;
    return 0;
}