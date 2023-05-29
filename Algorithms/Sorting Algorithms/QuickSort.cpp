#include <bits/stdc++.h>
using namespace std;

void swap(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int i = start - 1;

    for (int j = start; j < end; j++)
    {
        if (arr[j] < pivot)
        {

            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[end]);
    return i + 1;
}

void QuickSort(int arr[], int start, int end)
{

    if (start < end)
    {
        int pi = partition(arr, start, end);

        QuickSort(arr, start, pi - 1);
        QuickSort(arr, pi + 1, end);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    QuickSort(arr, 0, n - 1);
    cout << "Sorted Array:";
    printArray(arr, n);
}
