// Q140: Define a struct with enum Gender and print person's gender.

#include <stdio.h>
#include <string.h>

enum Gender
{
    MALE,
    FEMALE
};

struct Person
{
    enum Gender gender;
};

int main()
{
    struct Person p;
    char input[20];

    scanf("Gender=%s", input);

    if (strcmp(input, "MALE") == 0)
        p.gender = MALE;
    else
        p.gender = FEMALE;

    switch (p.gender)
    {
        case MALE:
            printf("Male");
            break;

        case FEMALE:
            printf("Female");
            break;
    }

    return 0;
}