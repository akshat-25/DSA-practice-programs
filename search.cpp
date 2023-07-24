#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return 1;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int arr[5] = {5, 78, 54, 1, 45};
    int key;
    cin >> key;

    bool found = search(arr, 5, key);
    if (found)
    {
        cout << "Key is present" << endl;
    }
    else
    {
        cout << "Key is absent" << endl;
    }
    return 0;
}
