//19P
#include <stdio.h>

/* 순차탐색 알고리즘 */
int LSearch(int ar[], int len, int target) { //LSearch(탐색할 배열, 배열 길이(저장된 값의 갯수), 찾을 값)
	int i;
	for (i = 0; i < len; i++) { //(배열 값 하나하나 검사한다)
		if (ar[i] == target) return i; //찾은 대상의 인덱스 값 반환
	}
	return -1; //찾지 못했음을 나타내는 값 반환
}

int main() {
	int arr[] = { 3,5,2,4,9 };
	int idx;

	idx = LSearch(arr, sizeof(arr) / sizeof(int), 4); // arr= 20(5 x 4(int)), int = 4이므로 계산하면 20 / 4 = 5. 즉 sizeof(arr) / sizeof(int)는 배열에 저장된 값의 갯수가 된다는것!
	if (idx == -1) printf("탐색 실패\n");
	else printf("타깃 저장 인덱스: %d\n", idx);

	idx = LSearch(arr, sizeof(arr) / sizeof(int), 7);
	if (idx == -1) printf("탐색 실패\n");
	else printf("타깃 저장 인덱스: %d\n", idx);

	return 0;
}