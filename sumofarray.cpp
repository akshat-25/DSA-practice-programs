#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {5, 78, 54, 1, 45};
    int n = 5;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = arr[i] + sum;
    }
    cout << "Sum is " << sum;

    return 0;
}
