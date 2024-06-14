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

typedef struct {
    char name[50];
    Date date;
} Event;

int main() {
    Date today;  
    Event event;

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

    event.date = today;

    printf("Enter event name: ");
    scanf(" %s", event.name); 
    printf("\n");

    printf("Event: %s on %d/%d/%d\n", event.name, event.date.day.value, event.date.month.value, event.date.year.value);

    return 0;
}
