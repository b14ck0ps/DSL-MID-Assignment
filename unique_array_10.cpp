#include <iostream>
using namespace std;
int main()
{
    // 10.Initialize an array. Size should be more than FIVE. Write you program to change the
    // array in such a way so that there cannot be any duplicate element in the array
    // anymore. Print the changed array. If the initialized array already had no duplicate
    // elements from the beginning, output a message saying “Array already unique!”;
    int arr[] = {1, 10, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    bool isUnique = true;

    // checking for duplicate elements
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                isUnique = false;
                arr[j] = arr[j] + 1; // if match found, increment the element by 1 , so that it is unique
            }
        }
    }
    isUnique ? cout << "Array already unique!" : cout << "Array is now unique!";
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}