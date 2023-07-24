#include <iostream>
#include <limits>
using namespace std;

// int maxarr(int arr[], int size)
// {
//     int max = INT_MIN;

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i + 1];
//         }
//     }
//     return max;
// }
// int minarr(int arr[], int size)
// {
//     int min = INT_MAX;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }
//     return min;
// }
// int main(int argc, char const *argv[])
// {
//     int arr[] = {10, 50, 20, 77, 21};
//     int n = 5;
//     cout << "Max is " << maxarr(arr, n);
//     return 0;
// }

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int space = n - i; space--;)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
