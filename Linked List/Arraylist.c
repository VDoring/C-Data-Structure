//92p
#include <stdio.h>
#include "Arraylist.h"

//초기화
void ListInit(List *plist) {
	(plist->numOfData) = 0; //리스트에 저장된 데이터의 수는 0
	(plist->curPosition) = -1; //현재 아무 위치도 가리키지 않음
}

//데이터 저장
void LInsert(List *plist, LData data) {
	if (plist->numOfData >= LIST_LEN) { //더 이상 저장할 공간이 없다면
		puts("저장불가");
		return;
	}
	plist->arr[plist->numOfData] = data; //데이터 저장
	(plist->numOfData)++; //저장된 데이터의 수 증가
}

//첫 데이터 참조
int LFirst(List *plist, LData *pdata) {
	if (plist->numOfData == 0)
		return FALSE;

	(plist->curPosition) = 0; //참조 위치 초기화. 첫번째 데이터의 참조를 의미함
	*pdata = plist->arr[0]; //pdata가 가리키는 공간에 데이터 저장
	return TRUE;
}

//두번째 이후 데이터 참조
int LNext(List *plist, LData *pdata) {
	if (plist->curPosition >= (plist->numOfData) - 1) //더 이상 참조할 데이터가 없다면
		return FALSE;

	(plist->curPosition)++;  //(값을 증가시켜 순서대로 데이터를 참조할 수 있도록 한다)
	*pdata = plist->arr[plist->curPosition];
	return TRUE;
}

//참조한(최근 조회한) 데이터 삭제
LData LRemove(List *plist) {
	int rpos = plist->curPosition; //삭제할 데이터의 인덱스 값 참조
	int num = plist->numOfData;
	int i;
	LData rdata = plist->arr[rpos]; //삭제할 데이터를 임시로 저장
	
	//삭제를 위한 데이터의 이동을 진행하는 반복문
	for (i = rpos; i < num - 1; i++) {
		plist->arr[i] = plist->arr[i + 1];
	}

	(plist->numOfData)--; //데이터의 수 감소
	(plist->curPosition)--; //참조위치를 하나 되돌린다
	return rdata; //삭제된 데이터의 반환
}

//저장된 데이터의 수 변환
int LCount(List *plist) {
	return plist->numOfData;
}