#include <stdio.h>

int main() {
    int e;
    float w;

    while (1) {
        printf("Enter employee type (1: Manager, 2: Hourly Worker, 3: Commission Worker, 4: Pieceworker, -1 to end): ");
        scanf_s("%d", &e);

        if (e == -1) {
            break; 
        }

        if (e == 1) { 
            printf("Enter weekly salary for the Manager: ");
            scanf_s("%f", &w);
            printf("Total weekly pay: $%.2f\n", w);
        }
        else if (e == 2) { 
            float hours_worked, hourly_wage;
            printf("Enter hours worked and hourly wage: ");
            scanf_s("%f %f", &hours_worked, &hourly_wage);
            if (hours_worked <= 40) {
                w = hours_worked * hourly_wage;
            }
            else {
                float overtime_hours = hours_worked - 40;
                w = (40 * hourly_wage) + (overtime_hours * hourly_wage * 1.5);
            }
            printf("Total weekly pay: $%.2f\n", w);
        }
        else if (e == 3) { 
            float weekly_sales;
            printf("Enter weekly sales amount: ");
            scanf_s("%f", &weekly_sales);
            w = 250 + (weekly_sales * 0.057);
            printf("Total weekly pay: $%.2f\n", w);
        }
        else if (e == 4) { 
            int items_produced;
            float wage_per_item;
            printf("Enter number of items produced and wage per item: ");
            scanf_s("%d %f", &items_produced, &wage_per_item);
            w = items_produced * wage_per_item;
            printf("Total weekly pay: $%.2f\n", w);
        }
        else {
            printf("Invalid employee type.\n");
        }
    }

    return 0;
}