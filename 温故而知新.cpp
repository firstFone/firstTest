//#include <iostream>
//using namespace std;
//void eat()//³�������ͷ
//{
//	int a[100] = { 0 };//���һ��100�˵�����
//	int m = 99;//99����ͷ
//	for (int i = 0; i < 100; i++)
//	{
//		a[i] = 1;//����1����û�гԵ�
//
//	}
//	int person = 0;
//	int count = 0;
//	while (m)
//	{
//		if (a[person] == 1)
//		{
//			count++;
//			//person++;���д������a[person] = 0֮��ͽ�����if����
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
//void eat1()//��Ҭ��
//{
//	int i = 1;//�������һ��ʣ1��
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