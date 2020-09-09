#include <stdio.h>
#include <string.h>

typedef struct {
    int number;
    char type;
    char destination[20];
    char departure_time[6];
} flight;

int main() {
    flight flights[] = { 9341, 'A', "Minsk", "12:20",
                         6233, 'B', "Ankara", "13:20",
                         5454, 'A', "Moscow", "13:20",
                         3239, 'A', "Minsk", "13:20",
                         2435, 'C', "Berlin", "13:20",
                         4237, 'D', "London", "13:20",
                         2573, 'D', "Paris", "13:20",
                         1235, 'A', "Barcelona", "13:20",
                         5246, 'B', "Minsk", "13:20"};

    char query[30];
    puts("Input destination city: ");
    gets(query);

    for (int i = 0; i < (sizeof(flights) / sizeof(flight)); i++) {
        if (strcmp(flights[i].destination, query) != 0) continue;
        printf("%s (%c): #%d - %s", flights[i].destination, flights[i].type, flights[i].number, flights[i].departure_time);
        printf("\n");
    }
    return 0;

}