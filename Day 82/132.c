//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

#include <stdio.h>
#include <string.h>

enum TrafficLight {
    RED, YELLOW, GREEN
};

int main() {
    char light[20];
    enum TrafficLight signal;

    scanf("%s", light);

    if (strcmp(light, "RED") == 0)
        signal = RED;
    else if (strcmp(light, "YELLOW") == 0)
        signal = YELLOW;
    else
        signal = GREEN;

    switch (signal) {
        case RED:
            printf("Stop");
            break;
        case YELLOW:
            printf("Wait");
            break;
        case GREEN:
            printf("Go");
            break;
    }

    return 0;
}