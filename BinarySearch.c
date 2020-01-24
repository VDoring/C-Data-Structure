//28P
#include <stdio.h>

int BSearch(int ar[], int len, int target) { //BSearch(Ž���� �迭, �迭 ����(����� ���� ����), ã�� ��)
	int first = 0; //Ž�� ����� ���� �ε��� ��. (�迭�� ù��° ĭ ����(0))
	int last = len - 1; //Ž�� ����� ������ �ε��� ��. (�迭�� ������ ĭ ����(�� ���Ͽ��� 4))
	int mid;

	while (first <= last) { //(first�� last���� Ŭ��� �ڵ�����)
		mid = (first + last) / 2; //Ž�� ����� �߾�(mid)�� ã�´�.(�߰��� ���ϱ�)


		if (target == ar[mid]) //���� �߾�(mid)�� ����� ���� Ÿ���̶��
			return mid; //Ž�� �Ϸ� �� ����!

		else { //���� Ÿ���� �ƴ϶�� Ž�� ����� ������ ���δ�
			if (target < ar[mid]) //���� Ÿ���� �߾�(mid)�� ����� �ͺ��� ũ�ٸ�
				last = mid - 1; //������ �ε��� ���� mid-1�� �����. (�߰����� ū ������ �ʿ䰡 ��������, mid�� �̹� �˻縦 �߱⶧���� -1�� ���ش�)

			else //���� Ÿ���� �߾�(mid)�� ����� �ͺ��� �۴ٸ�
				first = mid + 1; //������ �ε��� ���� mid+1�� �����. ((�߰����� ���� ������ �ʿ䰡 ��������, mid�� �̹� �˻縦 �߱⶧���� +1�� ���ش�)
		}
	}
	return -1; //ã�� ������ ���
}

int main() {
	int arr[] = { 1,3,5,7,9 };
	int idx;

	idx = BSearch(arr, sizeof(arr) / sizeof(int), 7);
	if (idx == -1) printf("Ž�� ����\n");
	else printf("Ÿ�� ���� �ε���: %d \n", idx);

	idx = BSearch(arr, sizeof(arr) / sizeof(int), 4);
	if (idx == -1) printf("Ž�� ����\n");
	else printf("Ÿ�� ���� �ε���: %d \n", idx);

	return 0;
}

/*
< 16, 19�� �� - �����غ��� >

[Q]
����
	last = mid;
	first = mid;
�̷��� �ϸ� ��� �ɱ�?


[A]
���� Ž���� ����� �迭�� ���°��, first > last�� �Ǽ� �ݺ����� Ż���� �� �־�� ������, ���� ���� �ٲٸ� ���� �׷����� ����.
�� ���ѷ���.

*/