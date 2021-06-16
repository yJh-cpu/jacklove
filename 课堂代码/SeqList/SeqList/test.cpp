#include<stdio.h>
#include<stdlib.h>
#include <malloc.h>
typedef int SLDataType;
#define InitSize 10
typedef struct Seqlist{
	SLDataType *array;
	size_t capacity;
	size_t size;
}SeqList;
//顺序表初始化
void SeqListInit(SeqList*psl,size_t capacity){
	psl->array = (SLDataType*)malloc(sizeof(int)*InitSize);
	psl->capacity = capacity;
	psl->size = 0;
}
//顺序表销毁
void SeqListDestory(SeqList *psl){
	free(psl);
	psl = NULL;
	psl->capacity = 0;
	psl->size = 0;
}
//顺序表打印
void SeqListPrint(SeqList *psl){
	int i = 0;
	for (i = 0; i < psl->size; i++){
		printf("%d,",psl->array[i]);
	}
}
//检查空间，满了进行增容
void SeqListCapacity(SeqList *psl){
	if (psl->size ==psl->capacity){
		printf("空间已经满了\n");
		SLDataType *tmp = (SLDataType*)realloc(psl->array, sizeof(SLDataType)*psl->capacity * 2);
		psl->array = tmp;
		psl->capacity *= 2;
	}
	else{
		printf("继续可以插入\n");
	}
}
//顺序表尾插
void SeqListPushBack(SeqList *psl, SLDataType x){
	psl->array[psl->size] = x;
	psl->size++;
}
//顺序表尾删
void SeqListPopBack(SeqList *psl){
	if(psl->size>0){
		psl->size--;
	}
	else{
		printf("不能删除了再\n");
	}
}
//顺序表头插
void SeqListPushFront(SeqList *psl, SLDataType x){
	int end = psl->size;
	while (end>=0){
		psl->array[end + 1] = psl->array[end];
		end--;
	}
	psl->array[0] = x;
	psl->size++;
}
//顺序表头删
void SeqListPopFront(SeqList *psl){
	if (psl->size>0){
		int start = 0;
		while (start<psl->size-1){
			psl->array[start] = psl->array[start + 1];
			start++;
		}
		psl->size--;
	}
}
//顺序表查找
int SeqListFind(SeqList*psl, SLDataType x){
	int i = 0;
	for (i = 0; i < psl->size;i++){
		if (psl->array[i] == x){
			return i;
		}
		else{
			return -3;
		}
	}
}
//顺序表在pos位置插入
void SeqListInsert(SeqList*psl, size_t pos, SLDataType x){
	int end = psl->size - 1;
	while (end >= pos){
		psl->array[end + 1] = psl->array[end];
		end--;
	}
	psl->array[pos] = x;
	psl->size++;
}
//顺序表在pos位置删除
void SeqListErase(SeqList*psl, size_t pos){
	if (psl->size > 0){
		int start = pos;
		if (start<psl->size-1){
			psl->array[start] = psl->array[start++];
			start++;
		}
		psl->size--;
	}
}
int main(){
	SeqList sl;
	SeqListInit(&sl,100);
	SeqListPushBack(&sl,1);
	SeqListPushBack(&sl,2);
	SeqListPushBack(&sl,3);
	SeqListPushBack(&sl,4);
	SeqListPushBack(&sl,5);
	SeqListPushBack(&sl,6);
	SeqListPrint(&sl);
	system("pause");
	return 0;
}