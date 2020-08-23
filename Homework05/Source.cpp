#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, i = 1, result;
	printf("Enter first number : ");
	scanf("%d", &a);
	printf("Enter second number : ");
	scanf("%d", &b);
	while (i <= a && i <= b) {
		if (a % i == 0 && b % i == 0) {
			result = i;
		}
		i++;
	}
	printf("Greastest common divisor : ");
	printf("%d", result);
	return 0;
}