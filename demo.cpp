#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // int arr[] = {1, 2, 3, 4, 5};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // for (int i = 0; i < n; i++)
    // {
    //     if (i == n - 1)
    //     {
    //         cout << arr[i];
    //     }
    //     else
    //     {
    //         cout << arr[i] << ",";
    //     }
    // }
    int arr[6] = {1, 2, 3, 4, 5};
    int *arr1 = new int[5];

    cout << sizeof(arr) / sizeof(arr[0]);
    return 0;
}