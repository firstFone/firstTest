//使用指针进行冒泡排序，封装一个函数
//#include <iostream>
//using namespace std;
//void pao(int *p, int len)//传入的是指针，但可以用数组的形式做
//{
//	for (int i = 0; i < len - 1; ++i)//总轮数len-1
//	{
//		for (int j = 0; j < len - i - 1; ++j)//单轮，因为没进行一个，一个值就归位
//		{
//			if (p[j] > p[j + 1])
//			{
//				int temp = p[j];
//				p[j] = p[j + 1];
//				p[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < 10; ++i)
//	{
//		cout << *p << " ";
//		p++;
//	}
//	cout << endl;
//}
//int main()
//{
//	int a[10] = { 8,9,7,4,3,5,6,10,2,1 };
//	//cout << *p << endl;
//	pao(a, 10);//单写一个a就是首地址
//	
//	system("pause");
//	return 0;
//}