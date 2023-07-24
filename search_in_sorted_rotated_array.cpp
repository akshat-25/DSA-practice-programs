#include <iostream>
using namespace std;

int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
        cout << "Process is running" << endl;
    }

    return s;
}

int binarySearch(int *arr, int s, int e, int n, int key)
{
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int findPosition(int *arr, int n, int k)
{
    int pivot = getPivot(arr, n);
    if (k >= arr[pivot] && k <= arr[n - 1])
    {
        binarySearch(arr, pivot, n - 1, n, k);
    }
    else
        binarySearch(arr, pivot, n - 1, n, k);
}
int main(int argc, char const *argv[])
{

    int arr[5] = {7, 9, 1, 2, 3};
    int key = 3;
    findPosition(arr, 5, 3);
    return 0;
}