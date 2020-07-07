//139p
#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"

void ListInit(List * plist)
{
	plist->head = (Node*)malloc(sizeof(Node)); //더미 노드의 생성 (head는 Dummy Node를 가리킨다)
	plist->head->next = NULL;
	plist->comp = NULL;
	plist->numOfData = 0;
}

void FInsert(List * plist, LData data)
{
	Node * newNode = (Node*)malloc(sizeof(Node)); //새 노드 생성
	newNode->data = data; //새 노드에 데이터 저장
	
	newNode->next = plist->head->next; //새 노드가 다른 노드를 가리키게 함
	plist->head->next = newNode; //더미 노드가 새 노드를 가리키게 함
	
	(plist->numOfData)++; //저장된 노드의 수를 하나 증가시킴
}

void SInsert(List * plist, LData data)
{
	//보류
}

void LInsert(List * plist, LData data)
{
	if(plist->comp == NULL) //정렬기준이 마련되지 않았다면,
		FInsert(plist, data); //머리에 노드를 추가!
	else //정렬기준이 마련되었다면,
		SInsert(plist, data); //정렬기준에 근거하여 노드를 추가!
}

int LFirst(List * plist, LData * pdata)
{
	if(plist->head->next == NULL) //더미 노드가 NULL을 가리킨다면,
		return FALSE; //반환할 데이터가 없다!
	
	plist->before = plist->cur; //before는 더미 노드를 가리키게 함
	plist->cur = plist->cur->next; //cur은 첫 번째 노드를 가리키게 함
	
	*pdata = plist->cur->data; //첫 번쨰 노드의 데이터를 전달
	return TRUE; //데이터 반환 성공!
}

int LNext(List* plist, LData* pdata)
{
	if (plist->cur->next == NULL) //cur이 NULL을 가리킨다면,
		return FALSE; //반환할 데이터가 없다!

	plist->before = plist->cur; //cur이 가리키던 것을 before가 가리킴
	plist->comp = plist->cur->next; //cur은 그 다음 노드를 가리킴

	*pdata = plist->cur->data; //cur이 가리키는 노드의 데이터 전달
	return TRUE; //데이터 반환 성공!
}

LData LRemove(List * plist)
{
	Node * rpos = plist->cur; //소멸 대상의 주소 값을 rpos에 저장
	LData rdata = rpos->data; //소멸 대상의 데이터를 rdata에 저장
	
	plist->before->next = plist->cur->next; //소멸 대상을 리스트에서 제거
	plist->cur = plist->before; //cur이 가리키는 위치를 재조정!
	
	free(rpos); //리스트에서 제거된 노드 소멸
	(plist->numOfData)--; //저장된 데이터의 수 하나 감소
	return rdata; //제거된 노드의 데이터 반환
}

int LCount(List * plist)
{
	return plist->numOfData;
}

void SetSortRule(List * plist, int (*comp)(LData d1, LData d2))
{
	//보류
}