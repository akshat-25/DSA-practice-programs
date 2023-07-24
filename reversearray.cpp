#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(int argc, char const *argv[])
{

    int arr[] = {5, 10, 15, 20, 25};
    int arr1[] = {5, 10, 15, 20, 25, 30};
    int n = 5;
    reverseArray(arr, 5);
    cout << endl;
    reverseArray(arr1, 6);
    return 0;
}