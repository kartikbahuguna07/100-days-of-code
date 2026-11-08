Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>
#include <string.h>

enum Role
{
    ADMIN,
    USER,
    GUEST
};

int main()
{
    enum Role role;
    char name[20];

    scanf("%s", name);

    if (strcmp(name, "ADMIN") == 0)
        role = ADMIN;
    else if (strcmp(name, "USER") == 0)
        role = USER;
    else
        role = GUEST;

    switch (role)
    {
        case ADMIN:
            printf("Welcome Admin!");
            break;

        case USER:
            printf("Welcome User!");
            break;

        case GUEST:
            printf("Welcome Guest!");
            break;
    }

    return 0;
}