#include <iostream>

void fun(int a, int b=2, int c=3)
{}

double Max(double a, double b)//函数重载
{
	return 1.2;
}

int Max(int a, int b, int c)//函数重载
{
	return 1;
}

//内联函数
inline int Max(int a, int b)
{
	return a>b?a:b;
}

int main()
{

	Max(1,2);
	Max(1,2,3);
	Max(1.1,2.2);
	//Max(1.1,2);error:二义性，max(int,int)或max(double,double)

	fun(1);//fun(1,2,3)
	fun(1,4);//fun(1,4,3)
	fun(1,5,5);//fun(1,5,5)
	//fun(1,,2);error:只能函数右侧缺省

	std::cout << Max(1,2) << std::endl;

	return 0;
}
