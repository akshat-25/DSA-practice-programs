#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int note;
    cin >> note;
    int n;
    switch (1)
    {

    case 1:
        note = n / 100;
        cout << "itne 100 k note: " << note << endl;
        n = n % 100;
    case 2:

        if (n >= 50)
        {
            note = n / 50;
            cout << "itne 50 k note: " << note << endl;
            n = n % 50;
        }

    case 3:
        if (n >= 20)
        {
            note = n / 20;
            cout << "itne 20 k note: " << note << endl;
            n = n % 20;
        }
    case 4:
        if (n >= 1)
        {
            note = n / 1;
            cout << "itne 1 k note: " << note << endl;
            n = n % 1;
        }
    }

    return 0;
}
