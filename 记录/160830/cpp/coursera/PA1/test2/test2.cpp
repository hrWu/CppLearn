#include <iostream>
#include <cstdlib>
using namespace std;
class Sample{
public:
    int v;
    Sample(int n):v(n) { }
	Sample(Sample &s){
		v = 2 * s.v;
	}
};
int main() {
    Sample a(5);
    Sample b = a;//调用复制构造函数<=>b(a)
    cout << b.v;
    return 0;
}
