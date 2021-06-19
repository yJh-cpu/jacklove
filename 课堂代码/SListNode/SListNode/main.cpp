#include"test.h"
int main(){
	SListNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushFront(&plist,0);
	SListFind(plist, 3);
	SListPopFront(&plist);
	SListPopBack(&plist);
	SListPrint(plist);
	system("pause");
	return 0;
}