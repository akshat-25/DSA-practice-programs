#include <iostream>
#include <array>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <unordered_map>

using namespace std;

int main(int argc, char const *argv[])
{
  // array<int, 4> a = {1, 2, 3, 4};
  // int size = a.size();
  // for (int i = 0; i < size; i++)
  // {
  //     cout << a[i] << " ";
  // }
  // vector<int> v;

  // v.push_back(5);
  // cout << "Capacity is " << v.capacity() << endl;
  // cout << "Size is " << v.size() << endl;
  // v.push_back(6);
  // cout << "Capacity is " << v.capacity() << endl;
  // cout << "Size is " << v.size() << endl;
  // v.push_back(7);
  // cout << "Capacity is " << v.capacity() << endl;
  // cout << "Size is " << v.size() << endl;
  // v.push_back(8);
  // cout << "Capacity is " << v.capacity() << endl;
  // cout << "Size is " << v.size() << endl;
  // v.push_back(8);
  // cout << "Capacity is " << v.capacity() << endl;
  // cout << "Size is " << v.size() << endl;

  // cout << "BEFOR POP" << endl;
  // for (int i : v)
  // {
  //     cout << i << " ";
  // }
  // cout << endl;

  // v.pop_back();
  // cout << "Capacity is " << v.capacity() << endl;
  // cout << "Size is " << v.size() << endl;
  // v.pop_back();
  // cout << "Capacity is " << v.capacity() << endl;
  // cout << "Size is " << v.size() << endl;

  // cout << "AFTER POP" << endl;
  // for (int i : v)
  // {
  //     cout << i << " ";
  // }
  // cout << endl;

  // stack<string> s;
  // s.push("Akshat");
  // s.push("Parakh");

  // cout << "Top element is " << s.top() << endl;
  // cout << "Size of stack " << s.size() << endl;
  // cout << "Empty or not " << s.empty() << endl;

  // priority_queue<int> maxi;

  // priority_queue<int, vector<int>, greater<int>> mini;

  // maxi.push(1);
  // maxi.push(2);
  // maxi.push(3);
  // maxi.push(4);
  // maxi.push(5);

  // cout << "Size -> " << maxi.size() << endl;
  // int n = maxi.size();
  // for (int i = 0; i < n; i++)
  // {
  //     cout << maxi.top() << " ";
  //     maxi.pop();
  // }
  // cout << endl;

  // mini.push(1);
  // mini.push(2);
  // mini.push(3);
  // mini.push(4);
  // mini.push(5);

  // int m = mini.size();
  // for (int i = 0; i < m; i++)
  // {
  //     cout << mini.top() << " ";
  //     mini.pop();
  // }
  // cout << endl;

  // set<int> s;

  // s.insert(5);
  // s.insert(5);
  // s.insert(5);
  // s.insert(15);
  // s.insert(52);
  // for (auto i : s)
  // {
  //   cout << i << endl;
  // }
  // set<int>::iterator it = s.begin();
  // it++;
  // s.erase(it);
  // for (auto i : s)
  // {
  //   cout << i << endl;
  // }

  map<int, string> m;

  m[1] = "akshat";
  m[2] = "parakh";
  m[3] = "mitika";
  m.insert({24, "rathi"});

  for (auto i : m)
  {
    cout << i.first << " " << i.second << endl;
  }

  cout << "Finding 2 -> " << m.count(2) << endl;
  cout << "Finding 12 -> " << m.count(12) << endl;
  return 0;
}