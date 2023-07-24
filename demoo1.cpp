#include <iostream>
using namespace std;
void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{

    int arr[] = {0, 1, 2, 2, 1, 0};
    int n = sizeof(arr) / sizeof(arr[1]);
    int currindex = 0;
    int left = 0;
    int right = n - 1;
    while (currindex <= right)
    {
        if (arr[currindex] == 0)
        {
            swap(arr[currindex], arr[left]);
            currindex++;
            left++;
            printArray(arr, n);
        }
        else if (arr[currindex] == 1)
        {
            currindex++;
            printArray(arr, n);
        }
        else
        {
            swap(arr[currindex], arr[right]);
            right--;
            printArray(arr, n);
        }
    }
    return 0;
}