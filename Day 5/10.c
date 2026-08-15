#include <stdio.h>
int main() {
    int seconds, hours, minutes, remainingSeconds;
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    // Conversion
    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    remainingSeconds = seconds % 60;


    printf("Time = %d:%d:%d (hours:minutes:seconds)\n", hours, minutes, remainingSeconds);
    return 0;
}
