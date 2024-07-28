//! basics of 2D array.........

#include <iostream>
using namespace std;

void userInput(int a[][3], int outer, int inner)
{
    cout << "-----------Enter the elements of an array----------- \n"
         << endl;
    for (int i = 0; i < outer; i++)
    {
        cout << "enter the " << i + 1 << "th row elements:-" << endl;
        for (int j = 0; j < inner; j++)
        {
            cin >> a[i][j];
        }
    }
}

void printArray_row(int a[][3], int outer, int inner)
{
    cout << "--------Element inside an array are----------\n"
         << endl;
    for (int i = 0; i < outer; i++)
    {
        cout << "elements of " << i + 1 << "th row are------" << endl;
        for (int j = 0; j < inner; j++)
        {
            cout << "element arr[" << i << "]" << "[" << j << "] is " << a[i][j] << endl;
        }
        cout << endl;
    }
}
void printArray_col(int a[][3], int outer, int inner)
{
    cout << "--------Element inside an array are----------\n"
         << endl;
    for (int i = 0; i < inner; i++)
    {
        cout << "elements of " << i + 1 << "th col are------" << endl;
        for (int j = 0; j < outer; j++)
        {
            cout << "element arr[" << i << "]" << "[" << j << "] is " << a[j][i] << endl;
        }
        cout << endl;
    }
}

int printRowwiseSum(int a[][3], int outer, int inner)
{
    int sum = 0;
    for (int i = 0; i < outer; i++)
    {
        int old_sum = sum;
        for (int j = 0; j < inner; j++)
        {
            sum += a[i][j];
        }
        cout << "sum of " << i + 1 << "th row is " << sum - old_sum << endl;
    }
    return sum;
}
int printColwiseSum(int a[][3], int outer, int inner)
{
    int sum = 0;
    for (int i = 0; i < inner; i++)
    {
        int old_sum = sum;
        for (int j = 0; j < outer; j++)
        {
            sum += a[j][i];
        }
        cout << "sum of " << i + 1 << "th column is " << sum - old_sum << endl;
    }
    return sum;
}

int main()
{
    //* initialisizing the 2D array..........
    // int arr[2][3]={
    // {1,2,3},
    // {23,4,5}
    // };

    int arr[2][3];
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

    //!-> how to take input from user for an 2-D array.
    userInput(arr, rows, cols);
    cout << endl;

    //!-> how to print element of an array....
    // printArray_row(arr, rows, cols);
    //!-> print sum rowWise..........
    // cout << "---------print sum Rowwise-------------"
    //      << endl;
    // int result_row = printRowwiseSum(arr, rows, cols);
    // cout << "\ntotal sum= " << result_row;
    // cout << endl;

    printArray_col(arr, rows, cols);
    //!-> print sum colWise..........
    // cout << "\n\n---------print sum colwise-------------"
    //      << endl;
    // int result_col = printColwiseSum(arr, rows, cols);
    // cout << "\ntotal sum= " << result_col;

    return 0;
}