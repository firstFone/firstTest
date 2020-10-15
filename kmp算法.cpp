//#include <iostream>
//using namespace std;
//typedef char * String;
//const int maxsize = 255;
////找到kmp算法中的next数组
//void get_k(String T, int *next)//两个参数，一个是模式串T，一个是next数组
//{
//	int j = 0;//前缀
//	int i = 1;//后缀
//	next[1] = 0;
//	while (i < T[0])//如果J等于零，或者前缀等于后缀
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
//			j = next[j];//如果不相等，j就回溯到next[j]指向的地方
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
//	char t[255] = " abab";//空一格，写字符串长度
//	char s[255] = " abaabab";
//	//int next[255];
//	t[0] = 4;//第一个元素是字符串长度
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