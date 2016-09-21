#include <iostream>
using namespace std;
class A {
	public:
		virtual ~A()//delete基类时，要考虑虚析构函数
		{
			cout << "destructor A" <<endl;
		}
};
class B:public A {
    public:
        ~B() { cout << "destructor B" << endl; }
};
int main() {
    A * pa;
    pa = new B;
    delete pa;
    return 0;
}
