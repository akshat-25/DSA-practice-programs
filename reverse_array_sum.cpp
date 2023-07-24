#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {502, 142, 453, 784, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0, j = n - 1;
    do
    {
        arr[i] = arr[i] + arr[j];
        arr[j] = arr[i];
        i++;
        j--;
    } while (i <= j);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}