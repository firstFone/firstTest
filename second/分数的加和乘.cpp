#include <iostream>
using namespace std;
struct Fraction
{
	int fenzi;
	int fenmu;
};
void yuefen(Fraction f)
{
	int a = 0, b = 0, x = 0;
	if (f.fenzi < f.fenmu)
	{
		a = f.fenmu;
		b = f.fenzi;
	}
	else
	{
		a = f.fenzi;
		b = f.fenmu;
	}
	while (b != 0)
	{
		x = b;
		b = a % b;
		a = x;
	}
	f.fenzi = f.fenzi / a;
	f.fenmu = f.fenmu / a;
	cout << "(" << f.fenzi << "," << f.fenmu << ")" << endl;
}
void add(Fraction f1, Fraction f2)
{
	Fraction f;
	f.fenzi = f1.fenzi * f2.fenmu + f2.fenzi * f1.fenmu;
	f.fenmu = f1.fenmu * f2.fenmu;
	cout << "求两数之和：" << endl;
	cout << "约分前：";
	cout << "(" << f.fenzi << "," << f.fenmu << ")" << endl;
	cout << "约分后：";
	yuefen(f);
	system("pause");
	system("cls");
}
void sub(Fraction f1, Fraction f2)
{
	Fraction f;
	f.fenzi = f1.fenzi * f2.fenmu - f2.fenzi * f1.fenmu;
	f.fenmu = f1.fenmu * f2.fenmu;
	cout << "求两数之和：" << endl;
	cout << "约分前：";
	cout << "(" << f.fenzi << "," << f.fenmu << ")" << endl;
	cout << "约分后：";
	yuefen(f);
	system("pause");
	system("cls");
}
void mul(Fraction f1, Fraction f2)
{
	Fraction f;
	f.fenzi = f1.fenzi * f2.fenzi;
	f.fenmu = f1.fenmu * f2.fenmu;
	cout << "求两数之积：" << endl;
	cout << "约分前：";
	cout << "(" << f.fenzi << "," << f.fenmu << ")" << endl;
	cout << "约分后：";
	yuefen(f);
	system("pause");
	system("cls");
}
void div(Fraction f1, Fraction f2)
{
	Fraction f;
	f.fenzi = f1.fenzi * f2.fenmu;
	f.fenmu = f2.fenzi * f1.fenmu;
	cout << "求两数之积：" << endl;
	cout << "约分前：";
	cout << "(" << f.fenzi << "," << f.fenmu << ")" << endl;
	cout << "约分后：";
	yuefen(f);
	system("pause");
	system("cls");
}
void menu()
{
	cout << "1, 求和" << endl;
	cout << "2, 求差" << endl;
	cout << "3, 求积" << endl;
	cout << "4, 求除" << endl;
	cout << "0, 退出" << endl;

}
int main()
{
	Fraction f1,f2;
	int select = 0;
	cout << "input first number: ";
	cin >> f1.fenzi;
	cin >> f1.fenmu;
	cout << "input second number: ";
	cin >> f2.fenzi;
	cin >> f2.fenmu;
	
	while (1)
	{
		cout << "(" << f1.fenzi << "," << f1.fenmu << ")" << " ";
		cout << "(" << f2.fenzi << "," << f2.fenmu << ")" << endl;
		menu();
		cout << "请选择：";
		cin >> select;
		switch (select)
		{
		case 1:
			add(f1, f2);
			break;
		case 2:
			sub(f1, f2);
			break;
		case 3:
			mul(f1, f2);
			break;
		case 4:
			div(f1, f2);
			break;
		case 0:
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
		default:
			break;
		}
	}
	//add(f1, f2);
	//mul(f1, f2);
	system("pause");
	return 0;
}