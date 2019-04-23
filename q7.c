#include <stdio.h>

int power(int num, int pow) {
	int something = 1, i;
	for (i = 0; i != pow; i++) {
		something *= num; // something = something * num
	}
	return something;
} 

int main () {
	int num, original, remainder, sum = 0, count = 0, c_n;
	printf("Enter a number:");
	scanf("%d", &num);
	original = num;
	c_n = num;
	while (c_n != 0) {
		c_n /= 10;
		count += 1;	
	}
	while (num > 0) {
		remainder = num % 10;
		sum = sum + power(remainder, count);
		num /= 10;	
	}
	if (original == sum) {
		printf("The number %d is an Armstrong Number\n", original);	
	} else {
		printf("The number %d is not an Armstrong Number\n", original);		
	}

	return 0;

}
