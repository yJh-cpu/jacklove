#include"test.h"
//ͷָ��洢���ǵ�һ���ڵ�ĵ�ַ,֮��plist->next�洢���ǵڶ����ڵ�ĵ�ַ
//��̬����һ���ڵ�
SListNode* BuySListNode(SLTDataType x){
	SListNode*newNode = (SListNode*)malloc(sizeof(SListNode));
	newNode->data = x;
	newNode->next = NULL;
	return newNode; 
}
//��ӡ������
void SListPrint(SListNode* plist){
	SListNode *cur = plist;
	while (cur != NULL){
		printf("%d,",cur->data);
		cur = cur->next;
	}
}
//������ͷ��
void SListPushFront(SListNode**pplist, SLTDataType x){
	SListNode*newnode = BuySListNode(x);
	newnode->next = *pplist;
	*pplist = newnode;
}
//������ͷɾ
void SListPopFront(SListNode**pplist){
	//��
	if (*pplist=NULL){
		return;
	}
	//һ�������ϵĽڵ�
	else{
		SListNode* next = (*pplist)->next;
		free(*pplist); //�ͷ�ԭ��ͷָ��Ĵ洢������
		*pplist = next;
	}
}
//������β��
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
//������βɾ
void SListPopBack(SListNode**pplist){
	//��
	if (*pplist==NULL){
		return;
	}
	//һ���ڵ�
	else if((*pplist)->next==NULL){
		free(*pplist);
		*pplist = NULL;
	}
	//����ڵ�
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
//���������
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
//��������posλ��֮�����
void SListInsertAfter(SListNode*pos, SLTDataType x){
	SListNode*newnode = BuySListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}
//ɾ����������posλ��֮���ֵ
void SListEraseAfter(SListNode*pos){
	SListNode* next = pos->next;
	SListNode* nextnext = next->next;
	pos->next = nextnext;
	free(next);
}