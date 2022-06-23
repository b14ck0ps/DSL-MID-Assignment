#include <iostream>
using namespace std;
// 11.Write a code that will create custom ciphers (encoded words) on strings.

// a. Write a function named encode that takes TWO parameters, a string s and an integer j.
string encode(string s, int j)
{
    string encoded_string = "";
    for (int i = 0; i < s.length(); i++)
    {
        // b. Skip j number of characters in the string and increase the ASCII value of the next character by 2.
        if (i >= j)
            encoded_string += (char)(s[i] + 2);
        else
            encoded_string += s[i];
    }
    // d. Return the converted string from encode function.
    return encoded_string;
}

int main()
{
    string s = "Hello World";
    int j = 2;
    cout << encode(s, j);
    return 0;
}