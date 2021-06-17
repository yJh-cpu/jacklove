#include<stdio.h>
#include<stdlib.h>
typedef int SLTDataType;
typedef struct SListNode{
	SLTDataType data;
	struct SListNode *next;
}SListNode;
//��̬����һ���ڵ�
SListNode* BuySListNode(SLTDataType x);
//��ӡ������
void SListPrint(SListNode* plist);
//������ͷ��
void SListPushFront(SListNode**pplist, SLTDataType x);
//������ͷɾ
void SListPopFront(SListNode**pplist);
//������β��
void SListPushBack(SListNode**pplist, SLTDataType x);
//������βɾ
void SListPopBack(SListNode**pplist);
//���������
SListNode* SListFind(SListNode*plist, SLTDataType x);
//��������posλ��֮�����
void SListInsertAfter(SListNode*pos, SLTDataType x);
//��������posλ��֮���ֵ
void SListEraseAfter(SListNode*pos);