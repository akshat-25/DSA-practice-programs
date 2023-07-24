#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // int n = 10;

    // int a = 0;
    // int b = 1;
    // cout << a << " " << b << " ";
    // for (int i = 1; i < n; i++)
    // {
    //     int nextnum = a + b;
    //     cout << nextnum << " ";

    //     a = b;
    //     b = nextnum;
    // }

    for (int i = 0; i <= 15; i += 2)
    {
        cout << i << " ";

        if (i & 1)
        {
            continue;
            cout << i;
        }
        i++;
    }

    return 0;
}
