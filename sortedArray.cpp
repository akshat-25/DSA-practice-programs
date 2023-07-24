#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
        return true;

    // base case
    if (arr[0] > arr[1])
        return false;

    else
    {
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {2, 4, 16, 8, 10};
    int size = 5;

    int ans = isSorted(arr, size);

    if (ans)
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Array is not sorted" << endl;
    }
    return 0;
}