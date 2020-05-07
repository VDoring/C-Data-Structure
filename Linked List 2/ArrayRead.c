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
		printf("자연수 입력: ");
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
배열은 메모리의 특성이 정적이여서(길이의 변경이 불가능해서),
메모리의 길이를 변경하는 것이 불가능함을 보여주고 있다.
*/