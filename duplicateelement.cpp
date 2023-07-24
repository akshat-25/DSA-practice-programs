#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 3};
    int ans = 0;
    for (int i = 0; i < 5; i++)
    {
        ans = ans ^ arr[i];
        cout << ans << " ";
    }
    cout << endl;
    for (int i = 1; i < 5; i++)
    {
        ans = ans ^ i;
        cout << ans << " ";
    }
    cout << endl;
    cout << ans;
    return 0;
}