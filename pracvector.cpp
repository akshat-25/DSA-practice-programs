#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v{45, 65};
    v[0] = 1;
    v[1] = 2;
    v[2] = 3;
    v[3] = 4;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    int n = v.size();
    for (auto i : v)
    {
        cout << v[i] << " ";
    }

    return 0;
}