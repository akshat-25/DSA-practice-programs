#include <iostream>
using namespace std;

void f1(int x, int y)
{
	cout << "Call by value " << endl;
	x = 60;
	y = 50;
}

void f2(int *p, int *q)
{
	cout << "Call by address" << endl;
	*p = 60;
	*q = 50;
}

void f3(int &m, int &n) // yaha m and n ki help se a and b ko access kr skte hai no need of *
{
	cout << "Call by refrence" << endl;
	m = 60;
	n = 50;
}
int main()
{
	int a, b;
	a = 5;
	b = 6;

	f1(a, b);
	cout << a << " " << b << endl;
	f2(&a, &b);
	cout << a << " " << b << endl;
	f3(a, b);
	cout << a << " " << b << endl;
	return 0;
}



//Iterator for maps

//unordered_map<int,int> :: iterator it = m.begin();

