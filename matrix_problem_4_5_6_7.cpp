#include <iostream>
using namespace std;

// print 2d array
void print_array(int array[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int matrix1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int matrix2[3][3] = {
        {5, 2, 3},
        {5, 4, 6},
        {3, 8, 9}};
    int matrix3[3][3] = {
        {2, 4, 5},
        {1, 3, 4},
        {1, 0, 9}};
    int sum[3][3];

    // 4. Write a program to perform matrix addition between 3 matrices
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j] + matrix3[i][j];
        }
    }
    cout << "The sum of the three matrices is: " << endl;
    print_array(sum);

    // 5. Write a program to perform matrix subtraction between 2 matrices.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    cout << "The difference of the two matrices is: " << endl;
    print_array(sum);

    // 6. Write a program to perform matrix multiplication between 2 matrices.

    int product[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            product[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    cout << "The product of the two matrices is: " << endl;
    print_array(product);

    // 7. Write a program to perform traverse matrix.
    cout << "The matrix is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix1[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}