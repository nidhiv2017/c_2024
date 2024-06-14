#include <stdio.h>

typedef struct {
    int value;
} Day;

typedef struct {
    int value;
} Month;

typedef struct {
    int value;
} Year;

typedef struct {
    Day day;
    Month month;
    Year year;
} Date;

int main() {
    Date today;
    
    printf("Enter today's day: ");
    scanf("%d", &today.day.value);
    printf("\n");
    printf("Enter current month: ");
    scanf("%d", &today.month.value);
    printf("\n");
    printf("Enter current year: ");
    scanf("%d", &today.year.value);
    printf("\n");

    printf("Date: %d/%d/%d\n", today.day.value, today.month.value, today.year.value);

    return 0;
}
