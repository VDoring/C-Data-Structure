//39p
#include <stdio.h>

int BSearch(int ar[], int len, int target) {
	int first = 0;
	int last = len - 1;
	int mid;
	int opCount = 0; //비교연산휫수

	while (first <= last) { //만약 첫 칸이 마지막칸을 넘을때 종료
		mid = (first + last) / 2; //중간값을 구한다

		if (target == ar[mid]) { //찾으려는 값이 ar배열의 중간이라면
			return mid; //중간값 반환
		}
		else {
			if (target < ar[mid]) { //만약 타깃이 배열의 중앙값보다 작다면
				last = mid - 1; //중간보다 큰 값은 읽을 필요가 없으므로 제외해준다
			}
			else { //만약 타깃이 배열의 중앙값보다 크다면
				first = mid + 1; //중간보다 작은 값은 읽을 필요가 없으므로 제외해준다
			}
		}
		opCount += 1;
	}
	printf("비교연산휫수: %d \n", opCount);
	return -1;
}

int main() {
	// 각각 다른 배열의 크기.
	int arr1[500] = { 0, };
	int arr2[5000] = { 0, };
	int arr3[50000] = { 0, };
	int idx;

	idx = BSearch(arr1, sizeof(arr1) / sizeof(int), 1);
	if (idx = -1) printf("탐색실패 \n\n");
	else printf("타겟 저장 인덱스: %d \n", idx);

	idx = BSearch(arr2, sizeof(arr2) / sizeof(int), 1);
	if (idx = -1) printf("탐색실패 \n\n");
	else printf("타겟 저장 인덱스: %d \n", idx);

	idx = BSearch(arr3, sizeof(arr3) / sizeof(int), 1);
	if (idx = -1) printf("탐색실패 \n\n");
	else printf("타겟 저장 인덱스: %d \n", idx);

}