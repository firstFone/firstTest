////99个人，99个馒头。智深也想吃
//#include <iostream>
//using namespace std;
//void eat()
//{
//	int mo = 99;//一共99个馍
//	int a[100] = { 0 };
//	for (int i = 0; i < 100; i++)
//	{
//		a[i] = 1;//1表示还没吃，吃了就表示为0
//	}
//	int person = 0;
//	int count = 0;//计数器，到五置为0
//	while (mo)//馍的数量不等于0
//	{
//		if (a[person] != 0)
//		{
//			count++;//不为零就count加一
//		}
//		if (count == 5)
//		{
//			a[person] = 0;//吃了就置为0
//			count = 0;
//			mo--;
//		}
//		person++;
//		person = person % 100;//环型，取余比如110，其实是10
//	}
//	for (int i = 0; i < 100; i++)
//	{
//		if(a[i] == 1)//剩下几个1，就没吃
//		cout << i << endl;
//	}
//}
//int main()
//{
//	eat();
//	system("pause");
//	return 0;
//}