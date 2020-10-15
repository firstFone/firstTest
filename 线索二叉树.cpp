#include <iostream>
using namespace std;
typedef char Elemtype;
typedef enum{Link, Thread} PointerTag;//枚举
//线索标志分别代表0和1，link(0)代表有左右孩子，thread(1)代表有前驱后继
typedef struct BiNode
{
	Elemtype data;
	struct BiNode *lchild, *rchild;
	PointerTag ltag, rtag;
}BiNode, *BiTree;
BiTree pre;//全局变量，指向上次的位置
void Create(BiTree *T)//创建一个二叉树，默认都有左右节点
{
	char c;
	//cout << "输入序列：" << endl;
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
void InThreading(BiTree T)//中序遍历线索化
{
	if (T)
	{
		InThreading(T->lchild);//递归找左孩子
		//处理
		if (!T->lchild)//如果左孩子等于空
		{
			T->ltag = Thread;//设置标志位
			T->lchild = pre;//指向它上一个节点
		}
		if (!pre->rchild)//前驱的有孩子没有，就指向T，这样两个节点就连一起了
		{
			pre->rtag = Thread;
			pre->rchild = T;
		}
		pre = T;//pre指向下一个节点
		InThreading(T->rchild);//递归找右孩子
	}
}
void InorderThread(BiTree *p, BiTree T)
{
	*p = (BiTree)malloc(sizeof(BiNode));
	(*p)->ltag = Link;//左孩子指向头节点
	(*p)->rtag = Thread;//右子树是线索，方便最后一个节点跟它相连
	(*p)->rchild = *p;//先指向本身
	if (!T)
	{
		(*p)->lchild = *p;
	}
	else
	{
		(*p)->lchild = T;
		pre = *p;
		InThreading(T);
		pre->rchild = *p;//最后一个节点指向根节点
		pre->rtag = Thread;
		(*p)->rchild = pre;//根节点指向最后一个节点
	}
}
//中序遍历线索二叉树
void InorderTraver(BiTree T)
{
	BiTree p;//相当于二叉树
	p = T->lchild;//节点左孩子指向
	while (p != T)//不是空树
	{
		while (p->ltag == Link)//一直有左孩子
		{
			p = p->lchild;
		}
		cout << p->data;
		while (p->rtag == Thread && p->rchild != T)//p是线索，而且指的不是根节点
		{
			p = p->rchild;
			cout << p->data;
		}
		p = p->rchild;//指回去
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