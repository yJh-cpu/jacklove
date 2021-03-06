#include<stdio.h>
#include<stdlib.h>
typedef int SLTDataType;
typedef struct SListNode{
	SLTDataType data;
	struct SListNode *next;
}SListNode;
//动态申请一个节点
SListNode* BuySListNode(SLTDataType x);
//打印单链表
void SListPrint(SListNode* plist);
//单链表头插
void SListPushFront(SListNode**pplist, SLTDataType x);
//单链表头删
void SListPopFront(SListNode**pplist);
//单链表尾插
void SListPushBack(SListNode**pplist, SLTDataType x);
//单链表尾删
void SListPopBack(SListNode**pplist);
//单链表查找
SListNode* SListFind(SListNode*plist, SLTDataType x);
//单链表在pos位置之后插入
void SListInsertAfter(SListNode*pos, SLTDataType x);
//单链表在pos位置之后的值
void SListEraseAfter(SListNode*pos);