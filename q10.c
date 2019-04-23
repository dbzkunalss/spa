#include <stdio.h>
int main()
{
    float tm, ms;
    float perc;
    printf("\nEnter total marks:");
    scanf("%f", &tm);
    printf("\nEnter marks scored:");
    scanf("%f", &ms);
    perc = ((ms / tm) * 100);
    if (perc >= 75)
    {
        printf("\n Your grade is: A+");
    }
    else if (perc >= 60 && perc < 75)
    {
        printf("\n Your grade is: A");
    }
    else if (perc >= 50 && perc < 60)
    {
        printf("\n Your grade is: B");
    }
    else if (perc >= 40 && perc < 50)
    {
        printf("\n Your grade is: C");
    }
    else if (perc < 40)
    {
        printf("\n Your grade is: FAILED");
    }
    else
    {
        printf("Invalid Entry!");
    }
    return 0;
}
