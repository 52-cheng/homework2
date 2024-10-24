#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a, b, c, d;
	while (1) {
		printf("enter loan principal (-1 to end):");
		scanf_s("%f", &a);
		if (a == -1) {
			break;
		}
		printf("enter interest rate:");
		scanf_s("%f", &b);
		printf("enter term of the loan in days:");
		scanf_s("%f", &c);
		d = a * b * c / 365;
		printf("the interest charge is $%.2f\n", d);
	}
	return 0;
}