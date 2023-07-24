#include <iostream>
using namespace std;
int partition(int *arr, int s, int e)
{
    int pivot = arr[s];

    int count = 0;

    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < arr[s])
        {
            count++;
        }
    }

    // placing pivot element at right position.
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // Handling the left and right part of the array
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    // Partition
    int p = partition(arr, s, e);

    // left part
    quickSort(arr, s, p - 1);

    // right part
    quickSort(arr, p + 1, e);
}

int main(int argc, char const *argv[])
{
    int arr[] = {2, 4, 1, 6, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}