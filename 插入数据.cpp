//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	int b = 8;
//	int a[10] = {1,2,3,4,5,6,7,9,10,0};//��ǰ���úÿ�λ��
//	int size = sizeof(a) / sizeof(a[0]);
//	cout << size << endl;
//	cout << "����ǰ��" << endl;
//	for (int i = 0; i < size - 1; ++i)
//	{
//		cout << a[i] << " ";
//	}
//	cout << endl;
//	//������
//	for (int i = size - 2; i > 0; --i)
//	{
//		if (b < a[i])
//		{
//			a[i + 1] = a[i];
//		}
//		else
//		{
//			a[i + 1] = b;
//			break;
//		}
//	}
//	cout << "�����" << endl;
//	for (int i = 0; i < size; ++i)
//	{
//		cout << a[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}