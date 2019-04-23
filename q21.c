#include <stdio.h>
struct student
{
    char name[100];
    int roll, percentage;
};
int main()
{
    struct student s[100];
    int i, n;
    printf("enter total no.of students\n ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nenter name of student\n");
        scanf("%s", s[i].name);
        printf("\n enter roll no\n");
        scanf("%d", &s[i].roll);
        printf("\n enter percentage\n");
        scanf("%d", &s[i].percentage);
        printf("\n");
    }
    printf("name:\t roll no:\t percentage");
    printf("\n--------------------------------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\t", s[i].name);
        printf("%d\t", s[i].roll);
        printf("%d\t", s[i].percentage);
        printf("\n");
    }
    return 0;
}