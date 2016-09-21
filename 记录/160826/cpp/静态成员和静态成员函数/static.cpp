#include <iostream>
using namespace std;

//该类有缺陷：在函数中Rectangle作为参数或者返回值存在时，
//				系统会调用复制构造函数，复制构造函数没有调用构造函数增加矩阵的数量和
//				总面积，但是在变量消亡时却会调用析构函数，此时矩阵的总数和总面积会减
//				少！出现问题
//				解决方案：自己写一个复制构造函数
class Rectangle{
	int w,h;
	static int nTotalArea;//矩形总面积，静态成员变量，全部对象共享
	static int nTotalNum;//矩形总数
public:
	Rectangle(Rectangle &rec)
	{
		w = rec.w;
		h = rec.h;
		nTotalNum++;
		nTotalArea += (w * h);
	}
	Rectangle(int w_, int h_)//构造函数,添加矩形面积，记录矩形数量
	{
		w = w_;
		h = h_;
		nTotalNum++;
		nTotalArea += (w * h);
	}
	~Rectangle()//析构函数，减少矩形数量，减去矩形面积
	{
		
		nTotalNum--;
		nTotalArea -= (w * h);
	}
	static void show()//静态成员函数，显示矩形数量及总面积
	{
		cout << nTotalNum << "个矩阵，总面积为：" << nTotalArea << endl;
	}
};
int Rectangle::nTotalNum  = 0;//可以不初始化
int Rectangle::nTotalArea = 0;

int main()
{
	Rectangle c1(2,3),c2(4,5),c3(3,10);

	cout << "sizeof(Rectangle) = " << sizeof(Rectangle) <<endl;

	Rectangle::show();
	c1.show();

	return 0;
}
