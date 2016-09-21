#include <iostream>


using namespace std;

int l = 4;
int & SetValue()
{
	return l;
}

void swap(int &a, int &b)
{
	a ^= b;
	b ^= a;
	a ^= b;

	cout << "交换咯:" << endl;
}
int main()
{
	int n = 7;
	int &m = n;
	int a = 1, b = 2;

	SetValue() = 40;

	cout << "l = " << l << endl;

	void ( &func)(int &,int &) = swap;

	func(a,b);

	cout << a << ' ' << b << endl;

	cout << n << endl;
	
	cout << m << endl;

	m = 100;
	
	cout << n << endl;
	
	cout << m << endl;

	return 0;
}
