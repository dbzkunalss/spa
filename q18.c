#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    printf("Enter string: ");
    gets(a);

    printf("Length of string a = %d \n",strlen(a));
    strcpy(b, a);
    printf("Copied a to b hence b = %s\n", b);
    strcpy(b, " world");
    strcpy(a, "hello");

    printf("now str b is %s\n", b);
    printf("now str a is %s\n", a);

    strcat(a, b);
    printf("after concatanating: %s\n", a);
    printf("Uppercase: %s\n", strupr(a));
    printf("Lowercase: %s", strlwr(a));


    return 0;
}