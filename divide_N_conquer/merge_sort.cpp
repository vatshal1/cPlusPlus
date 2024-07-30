#include <iostream>
using namespace std;

void combine(int *ar, int sI, int eI)
{
    int mid = sI + (eI - sI) / 2;

    int len1 = mid - sI + 1;
    int len2 = eI - mid;

    //* creating left and right array
    int *left = new int[len1];
    int *right = new int[len2];

    //* copying left array
    int k = sI; //* why k is not equal to zero, because sI can be any number
    for (int i = 0; i < len1; i++)
    {
        left[i] = ar[k];
        k++;
    }
    //* copying right array
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        right[i] = ar[k];
        k++;
    }

    //* merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = sI;
    while ((leftIndex < len1) && (rightIndex < len2))
    {
        if (left[leftIndex] < right[rightIndex])
            ar[mainArrayIndex++] = left[leftIndex++];
        else
            ar[mainArrayIndex++] = right[rightIndex++];
    }

    //*copying remaining elements
    //*copy remaining elements of left array
    while (leftIndex < len1)
        ar[mainArrayIndex++] = left[leftIndex++];
    //*copy remaining elements of right array
    while (rightIndex < len2)
        ar[mainArrayIndex++] = right[rightIndex++];
}

void mergeSort(int *a, int start, int end)
{
    //*base case
    if (start >= end)
        return;

    int mid = start + (end - start) / 2;
    //* sort left side array
    mergeSort(a, start, mid);

    //* sort right side array
    mergeSort(a, mid + 1, end);

    //* merge both left and right side array
    combine(a, start, end);
}

int main()
{
    int arr[] = {3, 1, 2, 5, 7, 4, 10, 11, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int s = 0;
    int e = size - 1;

    mergeSort(arr, s, e);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}