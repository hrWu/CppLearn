#include <iostream>
#include <string.h>
#include <cstdlib>


using namespace std;

class student{
	private:
		char *	name	;
		int		age		;
		char *	stuID	;
		int		grade_1	;
		int		grade_2	;
		int		grade_3	;
		int		grade_4	;
		int		average	;
	public:
		student(){
			name	= new char[20];
			stuID	= new char[20];
		}
		~student(){
			delete [] name	;
			delete [] stuID	;
		}
		void stu_input(char *n,int a,char *s, int g1,int g2, int g3, int g4);
		void stu_show();
};

void student::stu_input(char *n,int a,char *s, int g1,int g2, int g3, int g4)
{
	strcpy(name,n);
	age = a;
	strcpy(stuID,s);
	grade_1 = g1;
	grade_2 = g2;
	grade_3 = g3;
	grade_4 = g4;

	if(age <=  0 || grade_1 < 0 ||grade_2 < 0 || grade_3 < 0 || grade_4 < 0)
		cout << "error" << endl;
	average = grade_1 + grade_2 + grade_3 + grade_4;
	average /=4;
}

void student::stu_show()
{
	cout << name << ',' << age << ','<<stuID<<','<<average<<endl;
}

void tokbuf(char (*tok)[20],char *buf)
{
	int i = 0,j = 0,k = 0;
	while(buf[i]){
		if(buf[i] == ','){
			buf[i] = '\0';
			strcpy(tok[k++], buf+j);
			j = i+1;
		}
		i++;
	}
	strcpy(tok[k++], buf+j);
}

int main()
{
	char *buf	= new char[80];
	char (*tok)[20]	= new char[7][20];
	student stu;
	
	cin >> buf;

	tokbuf(tok,buf);

	stu.stu_input(tok[0],atoi(tok[1]),tok[2],atoi(tok[3]),atoi(tok[4]),atoi(tok[5]),atoi(tok[6]));
	stu.stu_show();
	//cout << tok[0] << ',' << tok[1] << ',' << tok[2] << ',' << tok[3] << ',' << tok[4] << ',' << tok[5] << ',' << tok[6] <<endl;

	delete [] buf;
	delete [] tok;
	return 0;
}
