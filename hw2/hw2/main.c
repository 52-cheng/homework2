#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	
	float d,m,a;
	while (1) {
		printf("enter sales in dollars(-1 to end):");
		scanf_s("%f",&d);
		if (d == -1) {
			break;
		}
		a = d * 0.09;
		m = a + 200;
		printf("salary is:%.2f\n", m);

	}
	return 0;
}