#include <iostream>
using namespace std;

// 3. Write a function that takes TWO parameters to print all the odd numbers between a given range. Input the starting value of the range and ending value of the range. Then, send them as the parameters to your function.

void printOdd(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int start, end;
    cout << "Enter the starting value: ";
    cin >> start;
    cout << "Enter the ending value: ";
    cin >> end;
    printOdd(start, end);
}