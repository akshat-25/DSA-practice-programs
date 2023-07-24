#include <iostream>
using namespace std;
void sayDigit(int n, string arr[])
{
    if (n == 0)
        return;

    int digit = n % 10; 
    n = n / 10;

    sayDigit(n, arr);
    cout << arr[digit] << " ";
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout << endl
         << endl
         << endl;
    sayDigit(n, arr);
    return 0;
}