#include <iostream>
#include <iomanip>
#include <string>

//右对齐八位字符显示输出
using namespace std;

int main()
{
	int a,b,c;

	cin >> a>>b>>c;

	//printf("%8d%8d%8d\n",a,b,c);
	
	cout << right << setw(8) << a <<right << setw(8) <<b<<right << setw(8) <<c<<endl;

	return 0;
}
