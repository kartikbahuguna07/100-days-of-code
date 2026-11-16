//Q145: Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

// Function returns a structure
struct Student findTopper(struct Student s[])
{
    int i, max = 0;

    for (i = 1; i < 3; i++)
    {
        if (s[i].marks > s[max].marks)
        {
            max = i;
        }
    }

    return s[max];
}

int main()
{
    struct Student s[3], top;
    int i;

    // Read details of 3 students
    for (i = 0; i < 3; i++)
    {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    // Get top student
    top = findTopper(s);

    // Print top student details
    printf("Top Student: %s | Roll: %d | Marks: %d",
           top.name, top.roll, top.marks);

    return 0;
}