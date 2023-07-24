#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    rotate(v.begin(), v.begin() + 2, v.end());
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << binary_search(v.begin(), v.end(), 2) << endl;

    string s = "abcdef";
    reverse(s.begin(), s.end());
    cout << "String " << s << endl;
    return 0;
}