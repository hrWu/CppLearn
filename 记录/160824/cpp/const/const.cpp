#include <iostream>

int main()
{
//定义常量变量
	const int MAX_VAL = 23;
	const double PI = 3.14;
	const char * SCHOOL_NAME = "BJTU";

//定义常量指针
	int m = 7;
	const int *p = &m;
	int *p2;
	//*p = 7;//error:不能通过常量指针修改指向空间的值
	
	p = p2;//right
	//p2 = p;//error:不能讲const*类型指针赋值给int*类型指针
	p2 = (int *)p;//强制类型转换可实现
	

	return 0;
}
