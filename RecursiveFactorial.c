//55p
#include <stdio.h>

int Factorial(int n) {
	if (n == 0)
		return 1;
	else
		return n * Factorial(n - 1);//ex) 만약 n=1일경우 1 * 1 = 1. (Factorial함수 리턴한 값이 1이기 때문)
									//ex) 만약 n=2일경우 2 * 1 = 2
									//ex) 만약 n=3일경우 3 * 2 = 6
}

int main() {
	printf("1! = %d \n", Factorial(1));
	printf("2! = %d \n", Factorial(2));
	printf("3! = %d \n", Factorial(3));
	printf("4! = %d \n", Factorial(4));
	printf("9! = %d \n", Factorial(9));
}