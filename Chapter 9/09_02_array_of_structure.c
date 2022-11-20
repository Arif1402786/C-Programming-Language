#include <stdio.h>
#include <string.h>


struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee facebook[100];
facebook[0]. code = 100;
facebook[0]. salary = 23676.45;
strcpy(facebook[0].name, "ARIF");
//alternate
//facebook[0] = {100,23676.45,"ARIF"}
//same for other 2
facebook[1]. code = 200;
facebook[1]. salary = 354376.45;
strcpy(facebook[1].name, "MUMTAZ");

facebook[2]. code = 300;
facebook[2]. salary = 354.45;
strcpy(facebook[2].name, "KHILADI");
//upto 99

printf("%d\n", facebook[0].code);
printf("%d\n", facebook[1].code);
printf("%d\n", facebook[2].code);
printf("%f\n", facebook[0].salary);
printf("%f\n", facebook[1].salary);
printf("%f\n", facebook[2].salary);
printf("%s\n", facebook[0].name);
printf("%s\n", facebook[1].name);
printf("%s\n", facebook[2].name);
printf("done\n");
    return 0;
}