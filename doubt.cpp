#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[5] = {1, 2, 3, 4, 5};
    for (int start = 0, end = 4; start <= end; start++, end--)
    {
        swap(arr[start], arr[end]);
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }

    return 0;
}