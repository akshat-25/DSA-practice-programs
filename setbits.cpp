#include <iostream>
#include <math.h>
using namespace std;

int dectobin(int n)
{
    int ans = 0;
    int i = 1;
    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }

    return ans;
}
int main(int argc, char const *argv[])
{
    int n1, n2;
    cin >> n1 >> n2;

    cout << "Answer is " << dectobin(n1);
    return 0;
}
