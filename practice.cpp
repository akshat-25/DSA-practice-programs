#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     char ch = 'A' + n - i;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << ch;
    //     }
    //     cout << endl;
    // }

    // int n;
    // cin >> n;
    // int i = 0;
    // while (i <= n)
    // {
    //     int j = 0;
    //     char ch = 'A' + n - i;
    //     while (j <= i)
    //     {
    //         cout << ch;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     char ch = 'A' + n - i;
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << ch;
    //         ch++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    // cout << (5 ^ 6);

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;

    //     while (j <= n + 1 - i)
    //     {
    //         cout << j;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    int n;
    cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int space = n - i;
    //     while (space)
    //     {
    //         cout << " ";
    //         space--;
    //     }

    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << j;
    //         j++;
    //     }
    // int k = i - 1;
    // while (k)
    // {
    //     cout << k;
    //     k--;
    // }

    //     cout << endl;
    // }
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }
        for (int l = i - 1; l; l--)
        {
            cout << l;
        }

        cout << endl;
    }

    return 0;
}