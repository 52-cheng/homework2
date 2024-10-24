#include <stdio.h>
#include<stdlib.h>
int main(void) {
	 
	float r, s, h;
	printf("Enter # of hours worked (-1 to end):");
	scanf_s("%f", &h);
	while (1) {
		if(h==-1){
		break;
	}
		printf("Enter hourly rate of the worker ($00.00):");
		scanf_s("%f", &r);
		if (h > 40) {
			s = (40 * r) + ((h - 40) * 1.5 * r);
		}
		else {
			s = h * r;
		}
		printf("Salary is $%.2f\n", s);
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%f", &h);
	}
	return 0;

}