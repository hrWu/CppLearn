#include <iostream>
#include <string.h>
class CArray{
	private:
		int size;//数组元素的个数
		int *ptr;//指向动态分配的数组
	public:
		CArray(int n = 0);//s带包数组元素个数
		CArray(CArray &a);//复制构造函数.若没有，会造成浅拷贝，CArray a4(a)会指向同一片内存
		~CArray();//析构函数释放内存

		void push_back(int v);//在数组尾部追加一个元素v
		CArray & operator=(const CArray &);//用于对象之间的赋值
		int length() const{ return size; }//返回数组元素个数
		int & operator[](int i)//用来支持根据下标访问数组元素
		{
			//考虑n = a[i]和a[i] = n这样的语句
			return ptr[i];
		}
};

CArray::CArray(int n):size(n)
{
	if(0 == n){
		ptr = NULL;
	}else{
		ptr = new int[n];
	}
}

CArray::CArray(CArray & a)
{
	if(NULL == a.ptr){//若复制的a中没有元素，则直接使ptr为NULL，size为0
		ptr = NULL;
		size = 0;
		return;
	}
	ptr = new int[a.size];
	memcpy(ptr,a.ptr,sizeof(int)*a.length());
	size = a.length();
}

CArray::~CArray()
{
	if(ptr)
		delete [] ptr;
}

CArray & CArray::operator=(const CArray &a)//赋值号的作用是使得凉拌数组大小和内容一致，而不占用同一片内存，不发生浅拷贝
{
	if(ptr == a.ptr){
		return * this;
	}else{
		if(a.ptr == NULL){
			if(ptr)
				delete [] ptr;
			ptr = NULL;
			size = 0;
			return * this;
		}
		if(size < a.length()){//如果原有的空间足够大，不用再分配新的空间
			if(ptr)
				delete [] ptr;
			ptr = new int[a.length()];
		}
		memcpy(ptr,a.ptr,sizeof(int)*a.length());
		size = a.length();
		return * this;
	}
}	

void CArray::push_back(int v)
{
	if(ptr){
		int * tmp = new int[size+1];
		memcpy(tmp,ptr,sizeof(int)*size);
		delete [] ptr;
		ptr = tmp;
	}else{
		ptr = new int [1];
	}
	ptr[size++] = v;
}

using namespace std;

int main()
{
	CArray a;//开始的数组是空的

	for(int i = 0; i < 5;i++){
		a.push_back(i);//需要动态内存分配存放数组成员变量，即一个指针成员变量
	}

	CArray a2,a3;
	a2 = a;//需要重载=
	for(int i=0; i < a.length(); i++){
		cout << a2[i] << ' ';//需要重载[]
	}
	a2 = a3;//a2变成空的
	for(int i=0; i < a2.length(); i++){//a2.length返回0
		cout << a2[i] << ' ';
	}
	cout << endl;
	a[3] = 100;
	
	CArray a4(a);//自己写复制构造函数
	for(int i=0; i < a4.length(); i++){
		cout << a4[i] << ' ';
	}
	cout << endl;
	return 0;
}
