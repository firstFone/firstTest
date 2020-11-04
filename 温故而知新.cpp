//#include <iostream>
//using namespace std;
//void eat()//鲁智深吃馒头
//{
//	int a[100] = { 0 };//设计一个100人的数组
//	int m = 99;//99个馒头
//	for (int i = 0; i < 100; i++)
//	{
//		a[i] = 1;//等于1就是没有吃的
//
//	}
//	int person = 0;
//	int count = 0;
//	while (m)
//	{
//		if (a[person] == 1)
//		{
//			count++;
//			//person++;如果写在里面a[person] = 0之后就进不到if里了
//			if (count == 5)
//			{
//				a[person] = 0;
//				m--;
//				count = 0;
//			}
//		}
//		person++;
//		person = person % 100;
//	}
//	for (int i = 0; i < 100; i++)
//	{
//		if (a[i] == 1)
//		{
//			cout << i << endl;
//		}
//	}
//}
//void eat1()//分椰子
//{
//	int i = 1;//假设最后一次剩1个
//	int sum = 0;
//	while (1)
//	{
//		int j;
//		sum = i;
//		for (j = 0; j < 5; j++)
//		{
//			sum = sum * 5;
//			if (sum % 4 != 0)
//			{
//				break;
//			}
//			if (sum % 4 == 0)
//			{
//				sum = sum / 4;
//				sum = sum + 1;
//			}
//		}
//		i++;
//		if (j == 5)
//		{
//			break;
//		}
//	}
//	cout << sum << endl;
//}
//int main()
//{
//	//eat();
//	eat1();
//	system("pause");
//	return 0;
//}