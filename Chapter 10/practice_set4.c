#include <stdio.h>

int main(){
    char name1[20];
    char name2[20];
    float salary1;
    float salary2;
    printf("Enter the name of the first employee: ");
    gets(name1);
    printf("Enter the name of the second employee: ");
    gets(name2);

    printf("Enter the salary of the first employee: ");
    scanf("%f", &salary1);
    printf("Enter the salary of the second employee: ");
    scanf("%f", &salary2);

    FILE *ptr;
    ptr = fopen("emp.txt", "w");
    fprintf(ptr, "name = %s, salary =%f\n ", name1, salary1);
    fprintf(ptr, "name = %s, salary =%f\n ", name2, salary2);
    fclose(ptr);

    return 0;
}