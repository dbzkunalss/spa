#include <stdio.h>

int main() {
    FILE *fp;
    int i;
    fp = fopen("sample.txt", "w");
    for(i = 0; i < 10;i++){
       fprintf(fp, "This is line %d\n",i + 1);
   }
   fclose (fp);
   return 0;

}