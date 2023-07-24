#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int sum = 0;    
    while (n != 0)
    {
        sum += n % 10;
        n = n / 10;
    }

    cout << "The sum is " << sum;
    return 0;
}