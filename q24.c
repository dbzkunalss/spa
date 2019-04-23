#include <stdio.h>

struct Student{
    int roll, percent;
    struct Name {
        char fname[100], mname[100], sname[100];
    }name;
    
};

int main() {
    struct Student s[100];
    int i, n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);
        printf("Enter percentage: ");
        scanf("%d", &s[i].percent);
        printf("Enter first name: ");
        scanf("%s", s[i].name.fname);
        printf("Enter middle name: ");
        scanf("%s", s[i].name.mname);
        printf("Enter last name: ");
        scanf("%s", s[i].name.sname);
    }
    printf("Name\t\t\t roll no.\t\t\t percentage");
    printf("\n--------------------------------------\n");
    for(i = 0; i < n; i++){
        printf("%s %s %s\t\t\t %d\t\t\t %d\n", s[i].name.fname, s[i].name.mname, s[i].name.sname, s[i].roll, s[i].percent);
    }
    return 0;
}
