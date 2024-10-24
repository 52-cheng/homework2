#include <stdio.h>
#include <math.h>
int main() {
	double p = 5000.0;
	double r;
	int y, ys = 15;
	for (r = 10.0; r <= 12.0; r += 0.5) {
		printf("\nCalculating for interest rate:%.1f%%\n", r);
		for (y = 1; y <= ys; y++) {
			double amount = p * pow(1 + r / 100.0, y);
			printf("Year %d: $%.2f\n", y, amount);
		}
	}
	return 0;
}