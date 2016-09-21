#include <iostream>

using namespace std;

class CTyre{
	public:
	CTyre()
	{
		cout << "ctyre contructor" <<endl;
	}
	~CTyre()
	{
		cout << "ctyre destructor" << endl;
	}
};

class CEngine{
	public:
	CEngine()
	{
		cout << "cengine contructor" << endl;
	}
	~CEngine()
	{
		cout << "cengine destructor" << endl;
	}
};

class CCar{
	private:
		CTyre   tyre;
		CEngine engine;
	public:
		CCar()
		{
			cout << "ccar contructor" << endl;
		}
		~CCar()
		{
			cout << "ccar destructor" << endl;
		}
};

int main()
{
	CCar car;

	return 0;
}
