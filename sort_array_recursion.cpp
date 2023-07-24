#include <iostream>
using namespace std;

void sortArray(int *arr, int i, int n)
{

    // base case
    if (i > n)
    {
        return;
    }
    if (arr[i] > arr[i + 1])
    {
        swap(arr[i], arr[i + 1]);
    }
    sortArray(arr, i + 1, 5);
}

int main(int argc, char const *argv[])
{
    int arr[5] = {10, 5, 1, 2, 8};
    sortArray(arr, 0, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}