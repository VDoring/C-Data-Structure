//28P
#include <stdio.h>

int BSearch(int ar[], int len, int target) { //BSearch(탐색할 배열, 배열 길이(저장된 값의 갯수), 찾을 값)
	int first = 0; //탐색 대상의 시작 인덱스 값. (배열의 첫번째 칸 숫자(0))
	int last = len - 1; //탐색 대상의 마지막 인덱스 값. (배열의 마지막 칸 숫자(이 파일에선 4))
	int mid;

	while (first <= last) { //(first가 last보다 클경우 코드종료)
		mid = (first + last) / 2; //탐색 대상의 중앙(mid)을 찾는다.(중간값 구하기)


		if (target == ar[mid]) //만약 중앙(mid)에 저장된 것이 타겟이라면
			return mid; //탐색 완료 및 종료!

		else { //만약 타겟이 아니라면 탐색 대상을 반으로 줄인다
			if (target < ar[mid]) //만약 타겟이 중앙(mid)에 저장된 것보다 크다면
				last = mid - 1; //마지막 인덱스 값을 mid-1로 만든다. (중간보다 큰 값들은 필요가 없어지고, mid도 이미 검사를 했기때문에 -1을 해준다)

			else //만약 타겟이 중앙(mid)에 저장된 것보다 작다면
				first = mid + 1; //마지막 인덱스 값을 mid+1로 만든다. ((중간보다 작은 값들은 필요가 없어지고, mid도 이미 검사를 했기때문에 +1을 해준다)
		}
	}
	return -1; //찾지 못했을 경우
}

int main() {
	int arr[] = { 1,3,5,7,9 };
	int idx;

	idx = BSearch(arr, sizeof(arr) / sizeof(int), 7);
	if (idx == -1) printf("탐색 실패\n");
	else printf("타깃 저장 인덱스: %d \n", idx);

	idx = BSearch(arr, sizeof(arr) / sizeof(int), 4);
	if (idx == -1) printf("탐색 실패\n");
	else printf("타깃 저장 인덱스: %d \n", idx);

	return 0;
}

/*
< 16, 19번 줄 - 생각해보기 >

[Q]
만약
	last = mid;
	first = mid;
이렇게 하면 어떻게 될까?


[A]
만약 탐색할 대상이 배열에 없는경우, first > last가 되서 반복문을 탈출할 수 있어야 하지만, 위와 같이 바꾸면 절때 그럴일이 없다.
즉 무한루프.

*/