#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char const *argv[])
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout << "The size of the Queue is " << q.size() << endl;
    cout << "Front of the Queue is " << q.front() << endl;

    return 0;
}