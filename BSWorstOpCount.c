//39p
#include <stdio.h>

int BSearch(int ar[], int len, int target) {
	int first = 0;
	int last = len - 1;
	int mid;
	int opCount = 0; //�񱳿����ܼ�

	while (first <= last) { //���� ù ĭ�� ������ĭ�� ������ ����
		mid = (first + last) / 2; //�߰����� ���Ѵ�

		if (target == ar[mid]) { //ã������ ���� ar�迭�� �߰��̶��
			return mid; //�߰��� ��ȯ
		}
		else {
			if (target < ar[mid]) { //���� Ÿ���� �迭�� �߾Ӱ����� �۴ٸ�
				last = mid - 1; //�߰����� ū ���� ���� �ʿ䰡 �����Ƿ� �������ش�
			}
			else { //���� Ÿ���� �迭�� �߾Ӱ����� ũ�ٸ�
				first = mid + 1; //�߰����� ���� ���� ���� �ʿ䰡 �����Ƿ� �������ش�
			}
		}
		opCount += 1;
	}
	printf("�񱳿����ܼ�: %d \n", opCount);
	return -1;
}

int main() {
	// ���� �ٸ� �迭�� ũ��.
	int arr1[500] = { 0, };
	int arr2[5000] = { 0, };
	int arr3[50000] = { 0, };
	int idx;

	idx = BSearch(arr1, sizeof(arr1) / sizeof(int), 1);
	if (idx = -1) printf("Ž������ \n\n");
	else printf("Ÿ�� ���� �ε���: %d \n", idx);

	idx = BSearch(arr2, sizeof(arr2) / sizeof(int), 1);
	if (idx = -1) printf("Ž������ \n\n");
	else printf("Ÿ�� ���� �ε���: %d \n", idx);

	idx = BSearch(arr3, sizeof(arr3) / sizeof(int), 1);
	if (idx = -1) printf("Ž������ \n\n");
	else printf("Ÿ�� ���� �ε���: %d \n", idx);

}