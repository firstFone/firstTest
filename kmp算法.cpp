//#include <iostream>
//using namespace std;
//typedef char * String;
//const int maxsize = 255;
////�ҵ�kmp�㷨�е�next����
//void get_k(String T, int *next)//����������һ����ģʽ��T��һ����next����
//{
//	int j = 0;//ǰ׺
//	int i = 1;//��׺
//	next[1] = 0;
//	while (i < T[0])//���J�����㣬����ǰ׺���ں�׺
//	{
//		if (0 == j || T[i] == T[j])
//		{
//			i++;
//			j++;
//			if (T[i] != T[j])
//			{
//				next[i] = j;
//			}
//			else
//			{
//				next[i] = next[j];                                      
//			}
//		}
//		else
//		{
//			j = next[j];//�������ȣ�j�ͻ��ݵ�next[j]ָ��ĵط�
//		}
//	}
//}
//int find_k(String S, String T, int pos)
//{
//	int i = pos;
//	int j = 1;
//	int next[255];
//	get_k(T, next);
//	while (i <= S[0] && j <= T[0])
//	{
//		if (S[i] == T[j])
//		{
//			i++;
//			j++;
//		}
//		else
//		{
//			j = next[j];
//		}
//	}
//	if (j > T[0])
//	{
//		return i - T[0];
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char t[255] = " abab";//��һ��д�ַ�������
//	char s[255] = " abaabab";
//	//int next[255];
//	t[0] = 4;//��һ��Ԫ�����ַ�������
//	s[0] = 7;
//	int pos = 1;
//	int p = find_k(s, t, pos);
//	cout << p << endl;
//	/*int i = 1;
//	get_k(t, next);
//	for (i = 1; i < 10; i++)
//	{
//		cout << next[i] << " ";
//	}
//	cout << endl;*/
//	system("pause");
//	return 0;
//}