//ʹ��ָ�����ð�����򣬷�װһ������
//#include <iostream>
//using namespace std;
//void pao(int *p, int len)//�������ָ�룬���������������ʽ��
//{
//	for (int i = 0; i < len - 1; ++i)//������len-1
//	{
//		for (int j = 0; j < len - i - 1; ++j)//���֣���Ϊû����һ����һ��ֵ�͹�λ
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
//	pao(a, 10);//��дһ��a�����׵�ַ
//	
//	system("pause");
//	return 0;
//}