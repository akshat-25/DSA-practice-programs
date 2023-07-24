#include <iostream>
#include <unordered_map>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {2, 3, 5, 1, 1, 1, 5, 3, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }

    for (auto x : m)
    {
        cout << x.first << " " << x.second << endl;
        ;
    }

    return 0;
}