#include<stdio.h>
#include<stdlib.h>

int main(void) 
{
int an;
float bb, tc, tcr, cl,all;
while (1) 
{
	printf("enter account number(-1 to end):");
	scanf_s("%d",&an);
	if (an == -1)
	{
		break;
	}
	printf("enter beginning balance:");
	scanf_s("%f", &bb);
	printf("enter total charges:");
	scanf_s("%f", &tc);
	printf("enter total credits:");
	scanf_s("%f", &tcr);
	printf("enter credit limit:");
	scanf_s("%f", &cl); 
	all = bb + tc - tcr;
	if (all > cl)
	{
		printf("Account:%d\n",an);
		printf("Credit limit:%.2f\n", cl);
		printf("Balance:%.2f\n", all);
		printf("Credit limit exceeded\n");
	}
	
}
return 0;
}