//52p
#include <stdio.h>

void Recursive(int num) {
	if (num <= 0) return; //0���� �۴ٸ� ���� �ʿ����
	
	printf("Recursive Call!: %d \n", num);
	Recursive(num - 1); //�Լ��� ���纻�� ���� ����.
						//����� ���ε� ����� �ѹ��� �����ν� ������ �� �ִ�.
}

int main() {
	Recursive(3);

	return 0;
}
