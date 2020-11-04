////迭代式y1 = 5/4 * y2 + 1
//#include <iostream>
//using namespace std;
//int main()
//{
//	int i = 1;//假设最后剩了一个
//	int sum = 0;
//	while (1)
//	{
//		int j;
//		sum = i;
//		for (j = 0; j < 5; ++j)
//		{
//			sum = sum * 5;
//			if (sum % 4 != 0)//不能整除4，就退出
//				break;
//			sum = sum / 4;
//			sum = sum + 1;
//		}
//		if (j == 5)//五个水手
//			break;
//		i++;//如果i不合适就加加
//	}
//	cout << sum << endl;
//	system("pause");
//	return 0;
//}