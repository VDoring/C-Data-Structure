//81p
#include <stdio.h>
#include "Arraylist.h"

int main() {
	//Arraylist�� ���� �� �ʱ�ȭ //////
	List list;  //����Ʈ ����
	int data;
	ListInit(&list); //����Ʈ �ʱ�ȭ

	//5���� ������ ���� //////
	LInsert(&list, 11); LInsert(&list, 11);
	LInsert(&list, 22); LInsert(&list, 22);
	LInsert(&list, 33);

	//����� �������� ��ü ��� //////
	printf("���� �������� ��: %d \n", LCount(&list));

	if (LFirst(&list, &data)) { //ù��? ������ ��ȸ
		printf("%d ", data);

		while (LNext(&list, &data))
			printf("%d ", data);
	}
	printf("\n\n");

	//���� 22�� Ž���Ͽ� ��� ���� //////
	if (LFirst(&list, &data)) {
		if (data == 22)
			LRemove(&list);

		while (LNext(&list, &data)) {
			if (data == 22)
				LRemove(&list);

		}
	}

	//���� �� ���� ������ ��ü ��� //////
	printf("���� �������� ��: %d \n", LCount(&list));

	if (LFirst(&list, &data)) {
		printf("%d ", data);

		while (LNext(&list, &data))
			printf("%d ", data);
	}
	printf("\n\n");
	return 0;
}