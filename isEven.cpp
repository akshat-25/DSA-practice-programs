#include <iostream>
using namespace std;

// 1 -> Even
// 0 -> Odd
bool isEven(int a)
{
    if (a & 1)
        return 0;

    return 1;
}
int main(int argc, char const *argv[])
{
    int num;
    cin >> num;
    if (isEven(num))
    {
        cout << "Number is Even" << endl;
    }
    cout << "Number is Odd" << endl;
    return 0;
}
