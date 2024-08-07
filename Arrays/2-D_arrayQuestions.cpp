//* Q1. transpose of a matrix (867)
#include <iostream>
using namespace std;

//* for square matrices only.......
void transpose1(int (&a)[4][4], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i > j)
            {
                swap(a[i][j], a[j][i]);
            }
        }
    }
}

//*for all matrices..........
void transpose2(int (&arr)[3][4], int r, int c)
{
    int a[c][r];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            a[i][j] = arr[j][i];
        }
    }
    cout << "Transpose of array: " << endl;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    // int arr[3][4];
    int arr[4][4];
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

    cout << "Enter the element on array: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }

    cout << "element of array: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // transpose2(arr, rows, cols);
    transpose1(arr, rows, cols);

    cout << "Transpose of array: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}