#include <stdio.h>
#include <string.h>

typedef struct {
    int number;
    char type;
    char *destination;
    char *departure_time;
} flight;

int main() {
    flight flights[5];

    flights[0].number = 2341;
    flights[0].type = 'A';
    flights[0].destination = "Minsk";
    flights[0].departure_time = "12:20";

    flights[1].number = 2231;
    flights[1].type = 'B';
    flights[1].destination = "Moscow";
    flights[1].departure_time = "13:40";

    flights[2].number = 2111;
    flights[2].type = 'B';
    flights[2].destination = "Ankara";
    flights[2].departure_time = "18:10";

    flights[3].number = 4532;
    flights[3].type = 'A';
    flights[3].destination = "Minsk";
    flights[3].departure_time = "03:05";

    flights[4].number = 4632;
    flights[4].type = 'C';
    flights[4].destination = "Minsk";
    flights[4].departure_time = "11:30";

    char query[30];
    puts("Input string: ");
    gets(query);

    for (int i = 0; i < 5; i++) {
        if (strcmp(flights[i].destination, query) != 0) continue;
        printf("%s (%c): #%d - %s\n", flights[i].destination, flights[i].type, flights[i].number, flights[i].departure_time);
    }
    return 0;

}