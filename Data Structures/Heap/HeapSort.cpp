#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int N, int i)
{
    int largest = i;
    int left = i * 2;
    int right = i * 2 + 1;

    if (left < N && arr[left] > arr[largest])
        largest = left;

    if (right < N && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, N, largest);
    }
}

void heapSort(int arr[], int N)
{
    int initial = N / 2;

    for (int i = initial; i >= 0; i--)
    {
        heapify(arr, N, i);
    }

    for (int i = N - 1; i > 0; i--)
    {
        swap(arr[i], arr[0]);
        heapify(arr, i, 0);
    }
}

void printArray(int arr[], int N)
{
    cout << "SORTED ARRAY: ";
    for (int i = 0; i < N; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int N = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, N);
    printArray(arr, N);
}