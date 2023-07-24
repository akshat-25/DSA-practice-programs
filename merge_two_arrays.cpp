#include <iostream>
using namespace std;

void merge(int arr1[], int m, int arr2[], int n, int arr3[])
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }

    while (i < m)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}

void printArray(int *arr, int k)
{
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int m = 6;
    int arr2[] = {2, 4, 5};
    int n = 3;

    int arr3[9];
    merge(arr1, m, arr2, n, arr3);
    printArray(arr3, 9);
    return 0;
}