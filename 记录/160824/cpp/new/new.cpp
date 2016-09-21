#include <iostream>

int main()
{
	int *p;
	p = new int;
	*p = 5;

	delete p;

	p = new int[5];
	p[0] = 10;

	std::cout << p[0] << std::endl;
	
	delete []p;
	//delete p;发生异常，不能释放两次


	return 0;
}
