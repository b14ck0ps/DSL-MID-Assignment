#include <iostream>
using namespace std;
int main()
{
    // 9. Initialize two integer arrays of different sizes. Merge the input arrays and create a new array. Then print the new array in reverse order
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int arr3[10];

    int size1 = 5;
    int size2 = 5;
    int size3 = size1 + size2;

    // merging array
    for (int i = 0; i < size3; i++)
    {
        if (i < size1)
        {
            arr3[i] = arr1[i];
        }
        else
        {
            arr3[i] = arr2[i - size1];
        }
    }
    // printing in reverse
    for (int i = size3 - 1; i >= 0; i--)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
    return 0;
}