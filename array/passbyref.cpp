#include <iostream>
using namespace std;
void changearray(int arr[], int Size)
{

    for (int i = 0; i < Size; i++)
    {
        arr[i] = 2 * (arr[i]);
    }
    return;
}
int main()
{
    int array[] = {1, 2, 3};
    int size = 3;
    changearray(array, size);
    for (int i = 0; i < size; i++)
    {
        cout << array[i];
    }
    return 0;
}