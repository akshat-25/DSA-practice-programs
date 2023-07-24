#include <iostream>
using namespace std;
void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void sort012(int *arr, int n)
{
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        while (arr[i] == 0 && i < j)
        {
            i++;
        }
        while (arr[j] == 2 && i < j)
        {
            j--;
        }
        while (arr[i] == 1 && arr[j] == 1 && i < j)
        {
            i++;
        }

        if (arr[i] == 2 && arr[j] == 0 && i < j)
        {
            swap(arr[i], arr[j]);
        }
        else if (arr[i] == 2 && arr[j] == 1 && i < j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        else if (arr[i] == 1 && arr[j] == 0 && i < j)
        {
            swap(arr[i], arr[j]);
            i++;
        }

        else
        {
            swap(arr[i], arr[j]);
            j--;
        }
    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {0, 1, 2, 1, 2, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    sort012(arr, n);
    cout << endl;
    printArray(arr, n);
    return 0;
}