//55p
#include <stdio.h>

int Factorial(int n) {
	if (n == 0)
		return 1;
	else
		return n * Factorial(n - 1);//ex) ���� n=1�ϰ�� 1 * 1 = 1. (Factorial�Լ� ������ ���� 1�̱� ����)
									//ex) ���� n=2�ϰ�� 2 * 1 = 2
									//ex) ���� n=3�ϰ�� 3 * 2 = 6
}

int main() {
	printf("1! = %d \n", Factorial(1));
	printf("2! = %d \n", Factorial(2));
	printf("3! = %d \n", Factorial(3));
	printf("4! = %d \n", Factorial(4));
	printf("9! = %d \n", Factorial(9));
}