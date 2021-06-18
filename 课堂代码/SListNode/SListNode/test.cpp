#include"test.h"
//头指针存储的是第一个节点的地址,之后plist->next存储的是第二个节点的地址
//动态申请一个节点
SListNode* BuySListNode(SLTDataType x){
	SListNode*newNode = (SListNode*)malloc(sizeof(SListNode));
	newNode->data = x;
	newNode->next = NULL;
	return newNode; 
}
//打印单链表
void SListPrint(SListNode* plist){
	SListNode *cur = plist;
	while (cur != NULL){
		printf("%d,",cur->data);
		cur = cur->next;
	}
}
//单链表头插
void SListPushFront(SListNode**pplist, SLTDataType x){
	SListNode*newnode = BuySListNode(x);
	newnode->next = *pplist;
	*pplist = newnode;
}
//单链表头删
void SListPopFront(SListNode**pplist){
	//空
	if (*pplist=NULL){
		return;
	}
	//一个及以上的节点
	else{
		SListNode* next = (*pplist)->next;
		free(*pplist); //释放原来头指针的存储的内容
		*pplist = next;
	}
}
//单链表尾插
void SListPushBack(SListNode**pplist, SLTDataType x){
	SListNode* newnode = BuySListNode(x);
	if (*pplist==NULL){
		*pplist = newnode;
	}
	else{
		SListNode* tail = *pplist;
		while (tail->next != NULL){
			tail = tail->next;
		}
		tail->next = newnode;
	}
}
//单链表尾删
void SListPopBack(SListNode**pplist){
	//空
	if (*pplist==NULL){
		return;
	}
	//一个节点
	else if((*pplist)->next==NULL){
		free(*pplist);
		*pplist = NULL;
	}
	//多个节点
	else{
		SListNode* pve = NULL;
		SListNode* tail = *pplist;
		while (tail->next!=NULL){
			pve = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;
		pve->next = NULL;
	}
}
//单链表查找
SListNode* SListFind(SListNode*plist, SLTDataType x){
	SListNode* cur = plist;
	while (cur!=NULL){
		if (cur->data == x){
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
//单链表在pos位置之后插入
void SListInsertAfter(SListNode*pos, SLTDataType x){
	SListNode*newnode = BuySListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}
//删除单链表在pos位置之后的值
void SListEraseAfter(SListNode*pos){
	SListNode* next = pos->next;
	SListNode* nextnext = next->next;
	pos->next = nextnext;
	free(next);
}