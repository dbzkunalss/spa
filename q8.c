#include <stdio.h>

int main () {
	int num, remainder, sum = 0, pro = 1;
	printf("Enter a number:");
	scanf("%d", &num);
	while (num > 0) {
		remainder = num % 10;
		sum += remainder;
        pro *= remainder;
		num /= 10;	
	}
	printf("Sum = %d\nProduct = %d", sum, pro);

	return 0;

}
