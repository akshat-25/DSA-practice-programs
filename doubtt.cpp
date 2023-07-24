#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 20;
    int b = 10;

    if (a == 10 || b == 10)
    {
        cout << "In if stmt" << endl;
        return 1;
    }

    else
    {
        cout << "In else stmt" << endl;
        return 0;
    }

    cout << "Outside the function";

    return 0;
}