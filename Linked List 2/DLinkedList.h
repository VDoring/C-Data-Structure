//138p
#ifndef __D_LINKED_LIST_H__
#define __D_LINKED_LIST_H__

#define TRUE 1
#define FALSE 0

typedef int LData;

typedef struct _node
{
	LData data;
	struct _node * next;
} Node;

typedef struct _linkedList
{
	Node * head; //더미 노드를 가리키는 멤버
	Node * cur; //참조 및 삭제를 돕는 멤버
	Node * before; //삭제를 돕는 멤버
	int numOfData; //저장된 데이터의 수를 기록하기 위한 멤버
	int (*comp)(LData d1, LData d2); //정렬의 기준을 등록하기 위한 멤버
} LinkedList;

typedef LinkedList List;

void LisntInit(List * plist);
void LInsert(List * plist, LData data);

int LFirst(List * plist, LData * pdata);
int LNext(List * plist, LData * pdata);

LData LRemove(List * plist);
int LCount(List * plist);

void SetSortRule(List * plist, int (*comp)(LData d1, LData d2)); //int (*comp)(LData d1, LData d2)의 의미:
															//반환형이 int이고 LData형 인자를 두 개 전달받는 함수의 주소 값을 두번째 인자로 전달하라
#endif