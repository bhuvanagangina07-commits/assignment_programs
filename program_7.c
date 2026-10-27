#include <stdio.h>

int main()
{
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100)
    {
        printf("Invalid mark");
    }
    else if (marks >= 90)
    {
        printf("Grade O");
    }
    else if (marks >= 80)
    {
        printf("Grade A+");
    }
    else if (marks >= 70)
    {
        printf("Grade A");
    }
    else if (marks >= 60)
    {
        printf("Grade B");
    }
    else if (marks >= 50)
    {
        printf("Grade C");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}
