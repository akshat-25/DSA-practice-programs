#include <iostream>
using namespace std;

int nthterm(int n)
{
    int num = 3 * n + 7;
    return num;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    cout << "nth term if the AP is " << nthterm(n);
    return 0;
}
