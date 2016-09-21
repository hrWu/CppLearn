#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

enum Warror_num{
	DRAGON	= 0,
	NINJA	= 1,
	ICEMAN	= 2,
	LION	= 3,
	WOLF	= 4,
};//0-5表示五种战士
const char WARRIOR[5][10] = {
	"dragon",
	"ninja",
	"inceman",
	"lion",
	"wolf"
};

class Warrior{//战士
	public:
		int No;			//编号
		int LifeValue;	//生命值
		int ATK;		//攻击力
		Warrior(int n,int l,int a=0):No(n),LifeValue(l),ATK(a){};
};

class Warrior_Attribute{//战士属性
	public:
		int SortNum;//生产顺序编号
		int LifeValue;//生命值
		int Count;//战士数量
		Warrior_Attribute(int w=0,int c=0,int s=0):LifeValue(w),Count(c),SortNum(s){};
};

class HeadQuarters{		//司令部
	int life;						//生命元数量
	//int ManuNum;					//生产编号
	int Count;
	Warrior_Attribute warrior[5];		//战士个数
	int MinLifeValue;
	public:
		HeadQuarters(int e,int ):life(e){};
		void Init(int e,int d,int n, int i, int l, int w){//初始化生命元
			life = e;
			int a[5];
			int k  = 0;
			a[0] = d;a[1] = n;a[2] = i;a[3] = l;a[4]=w;
			warrior[0].LifeValue = a[warrior[0].SortNum];
			warrior[1].LifeValue = a[warrior[1].SortNum];
			warrior[2].LifeValue = a[warrior[2].SortNum];
			warrior[3].LifeValue = a[warrior[3].SortNum];
			warrior[4].LifeValue = a[warrior[4].SortNum];
			int min = d,j = 0;
			for(;j<5;j++){
				if(min > warrior[j].LifeValue)
					min = warrior[j].LifeValue;
			}
			MinLifeValue = min;
		};//初始化生产顺序
		HeadQuarters(int sd,int sn, int si, int sl, int sw){//初始化顺序
			warrior[0].SortNum = sd;
			warrior[1].SortNum = sn;
			warrior[2].SortNum = si;
			warrior[3].SortNum = sl;
			warrior[4].SortNum = sw;
		};
		int Manufacture(int num);//开始生产
};
//非负为正常，0为停止
int HeadQuarters::Manufacture(int num)
{
	int i = 0;
	int n = num % 5;
	int ok = 0;
	
	while(ok == 0){
		//if(n ==  warrior[i].SortNum){
			if(life >= warrior[n].LifeValue){
				warrior[n].Count++;
				life -= warrior[n].LifeValue;
				Count++;
				cout << WARRIOR[warrior[n].SortNum] << ' ' << Count << " born with strenth " << warrior[n].LifeValue << ',' << warrior[n].Count << ' ' << WARRIOR[warrior[n].SortNum]; 

				return 1;
			}else if(life >= MinLifeValue){
				n++;
			}else{
				cout << "headquarter stops making warrior" <<endl;
				return 0 ;
			}
	}
	return 0;
}

int main()
{
	int Case = 0;
	int life = 0;
	int WarriorLifeValue[5];
	HeadQuarters red(ICEMAN,LION,WOLF,NINJA,DRAGON);
	HeadQuarters blue(LION,DRAGON,NINJA,ICEMAN,WOLF);//初始化生产顺序

	
	cin >> Case;
	cin >> life;

	scanf("%d %d %d %d %d", &WarriorLifeValue[0],&WarriorLifeValue[1],&WarriorLifeValue[2],&WarriorLifeValue[3],&WarriorLifeValue[4]);

	red.Init(life,WarriorLifeValue[0],WarriorLifeValue[1],WarriorLifeValue[2],WarriorLifeValue[3],WarriorLifeValue[4]);
	blue.Init(life,WarriorLifeValue[0],WarriorLifeValue[1],WarriorLifeValue[2],WarriorLifeValue[3],WarriorLifeValue[4]);

	cout << "Case:" << Case << endl;

	int i = 0,redok=1,blueok=1;
	for(;redok || blueok;i++){
		if(redok)
			cout <<setw(3)<< setfill('0') << i << " red ";
		if(redok && (redok = red.Manufacture(i))){
			cout << " in red headquarter" <<endl;
		}
		if(blueok)
			cout <<setw(3)<< setfill('0') << i << " blue ";
		if(blueok && (blueok = blue.Manufacture(i))){
			cout << " in blue headquarter" <<endl;
		}
	}

	return 0;
}
