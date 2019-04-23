#include <stdio.h>

int main() {
    int n, i, j;
    char a = 'A';
    printf("Enter the value for n: ");
    scanf("%d", &n);
    for (i = 0; i < n - 1; i++){
        for(j = n; j > i; j--){
            printf(" ");
        }
        for (j = 0; j < i; j++){
            printf("%c", a + j);
        }
        for (j = i; j >= 0; j--){
            printf("%c", a + j);
        }
        printf("\n");

    }
    return 0;
}