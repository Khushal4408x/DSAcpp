#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int size = 5;
    int nums[] = {88, 9, 7, 158, -4};
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (smallest > nums[i])
        {
            smallest = nums[i];
        }
        if (largest < nums[i])
        {
            largest = nums[i];
            /* code */
        }
    }
    cout << "smallest number is = " << smallest << endl;
    cout << "largest number is = " << largest << endl;
    return 0;
}