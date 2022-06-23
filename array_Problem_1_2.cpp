#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // 1. Initialize an array of 10 elements and print the array elements both in normal and reverse order.
    //  print the arrry
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // reverse the array
    for (int i = 0; i < 10; i++)
    {
        cout << arr[9 - i] << " ";
    }
    // 2. Initialize an integer array of 10 elements and print how many numbers are odd and how many numbers are even.

    int odd = 0;
    int even = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << endl;
    cout << "There are " << odd << " odd numbers and " << even << " even numbers." << endl;
}