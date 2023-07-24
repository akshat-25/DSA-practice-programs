#include <iostream>
using namespace std;

int merge(int *arr, int s, int e)
{
    int invCnt = 0;
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // merge 2 sorted array
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 <= len1 && index2 <= len2)
    {
        if (first[index1] < second[index2])
            arr[mainArrayIndex++] = first[index1++];

        else
        {
            arr[mainArrayIndex++] = second[index2++];
            invCnt += ((len1 + len2) / 2) - s;
        }
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }
    return invCnt;
}

int mergeSort(int *arr, int s, int e)
{
    int invCnt = 0;
    // base case
    if (s >= e)
    {
        return 0;
    }

    int mid = (s + e) / 2;

    invCnt += mergeSort(arr, s, mid);
    invCnt += mergeSort(arr, mid + 1, e);
    invCnt += merge(arr, s, e);
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 20, 6, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << mergeSort(arr, 0, n - 1);

    return 0;
}