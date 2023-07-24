#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;

        while (j <= n - i + 1)

        {
            cout << j;
            j++;
        }

        int empty = 1;
        while (empty <= 2 * i - 2)
        {
            cout << "*";
            empty++;
        }
        int k = n;
        while (k >= i)
        {
            cout << k;
            k--;
        }

        cout << endl;
        i++;
    }

    return 0;
}
