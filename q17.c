#include <stdio.h>
#include <string.h>
int palindrome_checker(char str[])
{
    int l = 0;
    int h = strlen(str) - 1;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char string[50];
    int boolean;
    printf("Enter the word: ");
    scanf("%s", &string);
    boolean = palindrome_checker(string);
    if (boolean != 0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}