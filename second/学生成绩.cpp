//#include <iostream>
//using namespace std;
//struct Student
//{
//	int num;
//	char name[20];
//	int score[3];
//}stu[5];//����һ������������飬�ṹ������
////���뺯��
//void input(Student s[], int n)
//{
//	for (int i = 0; i < n; ++i)
//	{
//		cout << "��" << i + 1 << "��ѧ����";
//		cin >> s[i].name;
//		cin >> s[i].num;
//		for (int j = 0; j < 3; j++)
//		{
//			cout << "��" << j + 1 << "���ɼ���";
//			cin >> s[i].score[j];
//		}
//		cout << endl;
//	}
//	system("pause");
//	system("cls");
//}
////��ƽ��ֵ
//void average(Student s[], int n)
//{
//	for (int j = 0; j < 3; j++)
//	{
//		float sum = 0;
//		for (int i = 0; i < 5; i++)
//		{
//			sum += stu[i].score[j];
//		}
//		cout << "��" << j+1 << "���ܷ��� " << sum << " ƽ������ " << sum / 5.0 << endl;
//	}
//}
////�ҵ����ֵ
//void findmax(Student s[], int n)
//{
//	int sum[5] = { 0 };
//	int max = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		int n = 0;
//		for (int j = 0; j < 3; j++)
//		{
//			n += stu[i].score[j];
//		}
//		sum[i] = n;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "��"  << i+1 << "���˳ɼ���" << sum[i] << endl;
//	}
//	max = sum[0];
//	int i = 0;
//	int m = 0;
//	while (i < 5)
//	{
//		if (max < sum[i])
//		{
//			max = sum[i];
//			m = i;
//		}
//		i++;
//	}
//	cout << "�ɼ���õ�ѧ���ǣ�" << stu[m].name << " ѧ�ţ�" << stu[m].num
//		<< "�ɼ���" << max << endl;
//}
//int main()
//{
//	input(stu, 5);
//	for (int i = 0; i < 5; i++)
//	{
//		cout << stu[i].name << " " << stu[i].num << " ";
//		for (int j = 0; j < 3; j++)
//		{
//			cout << stu[i].score[j] << " ";
//		}
//		cout << endl;
//	}
//	average(stu, 5);
//	findmax(stu, 5);
//	system("pause");
//	return 0;
//}