#include <iostream>

using namespace std;

class Complex{
	public:
		double real,imag;
		void show()
		{
			cout << real << "," <<imag << endl;
		}
		
		Complex(double r,double i):real(r),imag(i)
		{}
		Complex Addone()//编译器等价为Comeplex Addone(Complex *this),
						//即编译器会自动添加一个参数，即cpp的this指针
		{
			this->real++;//等价于real++
			this->show();//等价于show()
			return *this;
		}
};

int main()
{
	Complex c1(1,1),c2(0,0);

	c2 = c1.Addone();

	return 0;
}
