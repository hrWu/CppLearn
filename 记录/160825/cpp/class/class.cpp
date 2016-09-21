#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

//类的定义
class juzhen{
public:
	int w,h;

	void init(int w_, int h_);

};

void juzhen::init(int w_, int h_)
{
	w = w_;
	h = h_;
}

int main(int ac, char **av)
{
	juzhen a;
	juzhen b  = a;
	juzhen &c = b;

	a.init(atoi(av[1]), atoi(av[2]));

	cout << a.w << ' ' << a.h << endl;

	return 0;
}
