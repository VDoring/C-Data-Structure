//52p
#include <stdio.h>

void Recursive(int num) {
	if (num <= 0) return; //0보다 작다면 구할 필요없음
	
	printf("Recursive Call!: %d \n", num);
	Recursive(num - 1); //함수의 복사본을 만들어서 실행.
						//디버그 모드로도 출력이 한번에 됨으로써 추측할 수 있다.
}

int main() {
	Recursive(3);

	return 0;
}
