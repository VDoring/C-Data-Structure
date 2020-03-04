//86p~
#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#define TRUE 1 //���� ǥ���ϱ� ���� ��ũ�� ����
#define FALSE 0 //������ ǥ���ϱ� ���� ��ũ�� ����

#define LIST_LEN 100
typedef int LData; //LData�� ���� typedef ����
					//=����Ʈ�� int�� �������� ������ ���� ����

//�迭��� ����Ʈ�� ������ ����ü
typedef struct __ArrayList {
	LData arr[LIST_LEN]; //����Ʈ�� ������� �迭
	int numOfData; //����� �������� ��
	int curPosition; //������ ������ġ�� ���
} ArrayList;

typedef ArrayList List; //List�� �迭 ��� ����Ʈ�̴�

//�ʱ�ȭ
void ListInit(List *plist) {
	(plist->numOfData) = 0; //����Ʈ�� ����� �������� ���� 0
	(plist->curPosition) = -1; //���� �ƹ� ��ġ�� ����Ű�� ����
}

//������ ����
void LInsert(List *plist, LData data) {
	if (plist->numOfData >= LIST_LEN) { //�� �̻� ������ ������ ���ٸ�
		puts("������ �Ұ����մϴ�.");
		return;
	}
	plist->arr[plist->numOfData] = data; //������ ����
	(plist->numOfData)++; //����� �������� �� ����
}

//ù ������ ����
int LFirst(List *plist, LData *pdata) {
	if (plist->numOfData == 0)
		return FALSE;

	(plist->curPosition) = 0; //���� ��ġ �ʱ�ȭ. ù��° �������� ������ �ǹ���
	*pdata = plist->arr[0]; //pdata�� ����Ű�� ������ ������ ����
	return TRUE;
}

//�ι�° ���� ������ ����
int LNext(List *plist, LData *pdata) {
	if (plist->curPosition >= (plist->numOfData) - 1) //�� �̻� ������ �����Ͱ� ���ٸ�
		return FALSE;

	(plist->curPosition)++; //(���� �������� ������� �����͸� ������ �� �ֵ��� �Ѵ�)
	*pdata = plist->arr[plist->curPosition];
	return TRUE;
}

//������(�ֱ� ��ȸ��) ������ ����
LData LRemove(List *plist) {
	int rpos = plist->curPosition; //������ �������� �ε��� �� ����
	int num = plist->numOfData;
	int i;
	LData rdata = plist->arr[rpos]; //������ �����͸� �ӽ÷� ����

	//������ ���� �������� �̵��� �����ϴ� �ݺ���
	for (i = rpos; i < num - 1; i++) {
		plist->arr[i] = plist->arr[i + 1];
	}

	(plist->numOfData)--; //�������� �� ����
	(plist->curPosition)--; //������ġ�� �ϳ� �ǵ�����
	return rdata; //������ �������� ��ȯ

}

//����� �������� �� ��ȯ
int LCount(List *plist) {
	return plist->numOfData;
}

#endif
