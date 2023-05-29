// Create a Maxheap from a given array

#include <iostream>
using namespace std;

void heapify(int arr[], int N, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left < N && arr[left] > arr[largest])
        largest = left;

    if (right < N && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, N, largest);
    }
}

void buildHeap(int arr[], int N)
{
    int initial = N / 2;

    for (int i = initial; i >= 0; i--)
    {
        heapify(arr, N, i);
    }
}

void printHeap(int arr[], int N)
{
    cout << "Maxheap after sorting:" << endl;
    for (int i = 0; i < N; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};
    int N = sizeof(arr) / sizeof(arr[0]);

    buildHeap(arr, N);
    printHeap(arr, N);
}