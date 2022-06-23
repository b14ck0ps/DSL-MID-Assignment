#include <iostream>
using namespace std;

int main()
{
    // 8. Write a function to calculate factorial of a given integer number if that number is a prime number. If it is not, it will give an error.

    int number;
    cout << "Enter a number: ";
    cin >> number;
    int factorial = 1;
    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
    }
    cout << "The factorial of " << number << " is " << factorial << endl;

    // check if prime
    bool isPrime = true;
    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    isPrime ? cout << "The number is prime" << endl : cout << "ERROR! The number is not prime" << endl;
}