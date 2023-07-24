#include <iostream>
using namespace std;

void sortArray(int *arr, int n)
{
    // base case -> Already Sorted
    if (n == 0 || n == 1)
    {
        return;
    }

    // solve 1st case
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    // RECURSIVE CALL
    sortArray(arr, n - 1);
}

int main(int argc, char const *argv[])
{
    int arr[5] = {1, 5, 7, 2, 4};
    sortArray(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}