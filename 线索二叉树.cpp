#include <iostream>
using namespace std;
typedef char Elemtype;
typedef enum{Link, Thread} PointerTag;//ö��
//������־�ֱ����0��1��link(0)���������Һ��ӣ�thread(1)������ǰ�����
typedef struct BiNode
{
	Elemtype data;
	struct BiNode *lchild, *rchild;
	PointerTag ltag, rtag;
}BiNode, *BiTree;
BiTree pre;//ȫ�ֱ�����ָ���ϴε�λ��
void Create(BiTree *T)//����һ����������Ĭ�϶������ҽڵ�
{
	char c;
	//cout << "�������У�" << endl;
	cin >> c;
	if ('#' == c)
	{
		*T = NULL;
	}
	else
	{
		*T = (BiTree)malloc(sizeof(BiNode));
		(*T)->data = c; 
		(*T)->ltag = Link;
		(*T)->rtag = Link;
		Create(&(*T)->lchild);
		Create(&(*T)->rchild);
	}
}
void InThreading(BiTree T)//�������������
{
	if (T)
	{
		InThreading(T->lchild);//�ݹ�������
		//����
		if (!T->lchild)//������ӵ��ڿ�
		{
			T->ltag = Thread;//���ñ�־λ
			T->lchild = pre;//ָ������һ���ڵ�
		}
		if (!pre->rchild)//ǰ�����к���û�У���ָ��T�����������ڵ����һ����
		{
			pre->rtag = Thread;
			pre->rchild = T;
		}
		pre = T;//preָ����һ���ڵ�
		InThreading(T->rchild);//�ݹ����Һ���
	}
}
void InorderThread(BiTree *p, BiTree T)
{
	*p = (BiTree)malloc(sizeof(BiNode));
	(*p)->ltag = Link;//����ָ��ͷ�ڵ�
	(*p)->rtag = Thread;//���������������������һ���ڵ��������
	(*p)->rchild = *p;//��ָ����
	if (!T)
	{
		(*p)->lchild = *p;
	}
	else
	{
		(*p)->lchild = T;
		pre = *p;
		InThreading(T);
		pre->rchild = *p;//���һ���ڵ�ָ����ڵ�
		pre->rtag = Thread;
		(*p)->rchild = pre;//���ڵ�ָ�����һ���ڵ�
	}
}
//�����������������
void InorderTraver(BiTree T)
{
	BiTree p;//�൱�ڶ�����
	p = T->lchild;//�ڵ�����ָ��
	while (p != T)//���ǿ���
	{
		while (p->ltag == Link)//һֱ������
		{
			p = p->lchild;
		}
		cout << p->data;
		while (p->rtag == Thread && p->rchild != T)//p������������ָ�Ĳ��Ǹ��ڵ�
		{
			p = p->rchild;
			cout << p->data;
		}
		p = p->rchild;//ָ��ȥ
	}
}
int main()
{
	BiTree P, T = NULL;
	Create(&T);
	InorderThread(&P, T);
	InorderTraver(P);
	system("pause");
	return 0;
}