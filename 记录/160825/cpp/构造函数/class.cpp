#include <iostream>

using namespace std;

class Complex{
	double real, imag;

	public:
	Complex(double real=3,double imag = 4);
	void show();
};

void Complex::show()
{
	cout << real << ' ' << imag << endl;
}

Complex::Complex(double r,double i)
{
	real = r;
	imag = i;
}

int main()
{
	Complex a(1,2);
	Complex b[3] = {1, Complex(1,2)};//构造函数数组的初始化方法

	a.show();
	b[0].show();
	b[1].show();
	b[2].show();

	return 0;
}
