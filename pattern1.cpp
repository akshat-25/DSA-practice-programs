#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i = 1;
    int n;

    cin >> n;

    while (i <= n)
    {
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j << " ";
            j++;
        }

        int space = 2 * i - 2;
        while (space)
        {
            cout << "*"
                 << " ";
            space--;
        }

        int k = n + 1 - i;
        while (k)
        {
            cout << k << " ";
            k--;
        }

        cout << endl;
        i++;
    }
    return 0;
}