#include <stdio.h>
#include <string.h>
#define max_size 100
struct sort
{
    int empcode;
    char empname[max_size];
    float empsal;
    struct date
    {
        int day, month, year;
    } d[5];
} s[5];
void main()
{
    int i, j, temp;
    float temp1;
    char temp2[50];
    for (i = 0; i < 5; i++)
    {
        printf("\nEMPLOYEE%d\n", i + 1);
        printf("Enter name:\n");
        scanf("%s", s[i].empname);
        printf("Enter emp code:\n");
        scanf("%d", &s[i].empcode);
        printf("Enter emp sal:\n");
        scanf("%f", &s[i].empsal);
        printf("Enter day month year of joining:\n");
        scanf("%d %d %d", &s[i].d[i].day, &s[i].d[i].month,
              &s[i].d[i].year);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4 - i; j++)
        {
            if (s[j].empcode > s[j + 1].empcode)
            {
                temp = s[j].empcode;
                s[j].empcode = s[j + 1].empcode;
                s[j + 1].empcode = temp;
                temp1 = s[j].empsal;
                s[j].empsal = s[j + 1].empsal;
                s[j + 1].empsal = temp1;
                strcpy(temp2, s[j].empname);
                strcpy(s[j].empname, s[j + 1].empname);
                strcpy(s[j + 1].empname, temp2);
                temp = s[j].d[j].day;
                s[j].d[j].day = s[j + 1].d[j + 1].day;
                s[j + 1].d[j + 1].day = temp;
                temp = s[j].d[j].month;
                s[j].d[j].month = s[j + 1].d[j + 1].month;
                s[j + 1].d[j + 1].month = temp;
                temp = s[j].d[j].year;
                s[j].d[j].year = s[j + 1].d[j + 1].year;
                s[j + 1].d[j + 1].year = temp;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("\n%s\n", s[i].empname);
        printf("empcode=%d\n", s[i].empcode);
        printf("empsal=%0.2f\n", s[i].empsal);
        printf("%d/%d/%d\n", s[i].d[i].day, s[i].d[i].month,
               s[i].d[i].year);
    }
}