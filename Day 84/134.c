// Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include <stdio.h>
#include <string.h>

enum Status {
    SUCCESS, FAILURE, TIMEOUT
};

int main() {
    char status[20];
    enum Status s;

    scanf("%s", status);

    if (strcmp(status, "SUCCESS") == 0)
        s = SUCCESS;
    else if (strcmp(status, "FAILURE") == 0)
        s = FAILURE;
    else
        s = TIMEOUT;

    switch (s) {
        case SUCCESS:
            printf("Operation successful");
            break;

        case FAILURE:
            printf("Operation failed");
            break;

        case TIMEOUT:
            printf("Operation timed out");
            break;
    }

    return 0;
}