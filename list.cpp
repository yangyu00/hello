#include <iostream>
using namespace std;

typedef struct node{
	int data;//数据域 
	node * next;//指针域 
}LNode, *LinkList;//LinkList是指向LNode类型数据的指针类型定义

struct lklist{
	struct node;
	int size;
};

//初始化链表 
LinkList init_list() 
{
	LinkList L=new LNode;
	if(!L)
		return NULL;
	L->next=NULL;//指针域置空 
	return L;	
}
//打印链表
void Printf_list(LinkList &L)
{
	LinkList temp=L->next;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
 } 
 //插入数据（头插）
void create_LinkList(LinkList &L,int n)
{	
	while(n--)
	{
		LinkList s=new LNode;
		cin>>s->data;
		s->next=L->next;
		L->next=s;	
	} 		
} 
//插入数据（尾插）
void create_LinkList_back(LinkList &L,int n)
{
	LinkList r=L;
	while(n--)
	{
		LinkList s=new LNode;
		cin>>s->data;
		s->next=NULL;
		r->next=s;
		r=s;
		
	}
}

int main()
{
	LinkList myList = init_list();
	create_LinkList(myList, 3);
	Printf_list(myList);
	return 0;
}

