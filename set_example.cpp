#include <iostream>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{
    set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(6);
    s.insert(53);
    s.insert(40);
    auto it = s.find(6);
    s.erase(it, s.end());
    for (auto x : s)
    {
        cout << x << " ";
    }
    /* auto it = s.find(20);
     if (it == s.end())
     {
         cout << "Element "
              << " Not found" << endl;
     }
     else
     {
         cout << "Element "
              << " Found" << endl;
     }*/
    return 0;
}