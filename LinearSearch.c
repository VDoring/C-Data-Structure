//19P
#include <stdio.h>

/* ����Ž�� �˰��� */
int LSearch(int ar[], int len, int target) { //LSearch(Ž���� �迭, �迭 ����(����� ���� ����), ã�� ��)
	int i;
	for (i = 0; i < len; i++) { //(�迭 �� �ϳ��ϳ� �˻��Ѵ�)
		if (ar[i] == target) return i; //ã�� ����� �ε��� �� ��ȯ
	}
	return -1; //ã�� �������� ��Ÿ���� �� ��ȯ
}

int main() {
	int arr[] = { 3,5,2,4,9 };
	int idx;

	idx = LSearch(arr, sizeof(arr) / sizeof(int), 4); // arr= 20(5 x 4(int)), int = 4�̹Ƿ� ����ϸ� 20 / 4 = 5. �� sizeof(arr) / sizeof(int)�� �迭�� ����� ���� ������ �ȴٴ°�!
	if (idx == -1) printf("Ž�� ����\n");
	else printf("Ÿ�� ���� �ε���: %d\n", idx);

	idx = LSearch(arr, sizeof(arr) / sizeof(int), 7);
	if (idx == -1) printf("Ž�� ����\n");
	else printf("Ÿ�� ���� �ε���: %d\n", idx);

	return 0;
}