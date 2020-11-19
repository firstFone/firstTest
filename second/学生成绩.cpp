//#include <iostream>
//using namespace std;
//struct Student
//{
//	int num;
//	char name[20];
//	int score[3];
//}stu[5];//声明一个五个数的数组，结构体数组
////输入函数
//void input(Student s[], int n)
//{
//	for (int i = 0; i < n; ++i)
//	{
//		cout << "第" << i + 1 << "个学生：";
//		cin >> s[i].name;
//		cin >> s[i].num;
//		for (int j = 0; j < 3; j++)
//		{
//			cout << "第" << j + 1 << "个成绩：";
//			cin >> s[i].score[j];
//		}
//		cout << endl;
//	}
//	system("pause");
//	system("cls");
//}
////求平均值
//void average(Student s[], int n)
//{
//	for (int j = 0; j < 3; j++)
//	{
//		float sum = 0;
//		for (int i = 0; i < 5; i++)
//		{
//			sum += stu[i].score[j];
//		}
//		cout << "第" << j+1 << "科总分是 " << sum << " 平均数是 " << sum / 5.0 << endl;
//	}
//}
////找到最大值
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
//		cout << "第"  << i+1 << "个人成绩：" << sum[i] << endl;
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
//	cout << "成绩最好的学生是：" << stu[m].name << " 学号：" << stu[m].num
//		<< "成绩：" << max << endl;
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