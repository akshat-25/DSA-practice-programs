#include<iostream>
using namespace std;
 
int main(int argc, char const *argv[])
{
    int a = 5;
    int *ptr = NULL;
    ptr = &a;
    cout << *ptr << endl;
    cout << ptr << endl;
    int *q = ptr; // copying a pointer.
    cout << q << endl;
    cout << *q << endl;
    
    int i = 4;
    int *t = &i;
    cout << (*t)++ << endl;
    cout << *t << endl;
    cout << "Before t = " << t << endl;
    t = t + 1;
    cout << "After t = " << t << endl;
 
    return 0;
}