#include <stdio.h>

int main(){
    int n, i, j, counter = 1;
    printf("Enter number of lines: ");
    scanf("%d", &n);
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j <= i; j++){
            printf("%d ", counter++);
        }
        printf("\n");
    }
}