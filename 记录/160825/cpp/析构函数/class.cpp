#include <iostream>

class A{
	int id;
	public://必须有，不然error
	A(int id = 1);
	~A();
};

A::A(int i)
{
	id = i;
}

A::~A()
{
	std::cout << "id:" << id << std::endl;
}

int main()
{
	A *p = new A[2];
	p[0] = 1;
	p[1] = 2;
	A *q = new A(3);
    A a(4);	


	delete [] p;
	delete q;

	return 0;
}
