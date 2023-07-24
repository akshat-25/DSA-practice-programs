#include <iostream>
using namespace std;

void altswap(int arr[], int size)
{
    int i = 0;
    int j = 1;
    for (int i = 0, j = 1; j <= size - 1; i = i + 2, j = j + 2)
    {
        swap(arr[i], arr[j]);
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(int argc, char const *argv[])
{

    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    altswap(arr, 6);
    return 0;
}
