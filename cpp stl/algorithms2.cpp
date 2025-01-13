#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {4, 3, 2, 1};
    string s = "abc";
    reverse(vec.begin(), vec.end()); // if we want to reverse specific part then we can replace vec.end(),begin() by vec.begin+ some value
    for (int v : vec)
    {
        cout << v << " ";
    }
    next_permutation(s.begin(), s.end()); // it can be used with vec,arr,string
    cout << "next permut  " << s << endl;
    prev_permutation(s.begin(), s.end());
    cout << "prev prmut" << s << endl;
    int a = 5;
    int b = 10;
    swap(a, b);
    cout << "after swaping a,b " << "a= " << a << "b= " << b << endl;
    cout << *(max_element(vec.begin(), vec.end())) << endl;
    cout << binary_search(vec.begin(), vec.end(), 8) << endl; // will search for 8 lin vec
    // count set bits in 8 bit for eg "00000011"3 has 2 set bits
    int c = 3;
    cout << __builtin_popcount(c) << endl;
    cout << __builtin_popcountl(c) << endl;  // if c in long int
    cout << __builtin_popcountll(c) << endl; // if c is long long int
    return 0;
}