#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};

    int m = 3, n = 3;
    int arr3[3];
    int n1 = 0, n2 = 0;
    int x = 1, y = 1;
    int sum = 0;
    cout << "Processing the problem...." << endl;
    for (int i = m - 1; i >= 0; i--)
    {
        // cout << "Hello";
        n1 += (arr1[i] * x);
        x = x * 10;
    }

    for (int j = m - 1; j >= 0; j--)
    {
        // cout << "Hiii";
        n2 += (arr2[j] * y);
        y = y * 10;
    }

    sum = n1 + n2;
    cout << "The sum is " << endl;
    cout << sum;
    int index = 2;

    while (sum != 0)
    {
        sum = sum % 10;
        arr3[index] = sum;
        sum = sum / 10;
        index--n;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;
}