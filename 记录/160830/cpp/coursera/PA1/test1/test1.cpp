#include <iostream>
#include <cstdlib>
using namespace std;
class A {
public:
    int val;

	A(int n = 0){// 类型转换构造函数，使得赋值时右值临时类型转换为A类，调用类型转换构造函数
		val = n;
	}

	A & GetObj(){//返回this指针指向对象的引用，若未引用，赋值结果交给临时申请返回值
					//则返回对象调用复制构造函数，结果为0 0 而非0 5
		return * this;
	}
};

int main()  {
    A a;
    cout << a.val << endl;
    a.GetObj() = 5;//5类型转换为A并调用类型转换构造函数，复制给a的this指针指向对象引用，即是a
    cout << a.val << endl;
}
