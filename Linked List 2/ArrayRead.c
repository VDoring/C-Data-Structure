//106p
#include <stdio.h>

int main()
{
	int arr[10];
	int readCount = 0;
	int readData;
	int i;

	while (1)
	{
		printf("�ڿ��� �Է�: ");
		scanf("%d", &readData);
		if (readData < 1)
			break;

		arr[readCount++] = readData;
	}

	for (i = 0; i < readCount; i++)
		printf("%d ", arr[i]);

	return 0;
}

/*
�迭�� �޸��� Ư���� �����̿���(������ ������ �Ұ����ؼ�),
�޸��� ���̸� �����ϴ� ���� �Ұ������� �����ְ� �ִ�.
*/