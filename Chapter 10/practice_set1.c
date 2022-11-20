
#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("3_no.txt", "r");
    int a , b , c;
fscanf(ptr, "%d %d %d\n",&a, &b , &c );
printf("the three numbers are %d %d and %d\n", a,b,c);

    return 0;
}

// alternate

// #include <stdio.h>

// int main(){
//     FILE *ptr;
//     ptr = fopen("3_no.txt", "r");
//     int num[3];
// fscanf(ptr, "%d\n", &num[0]);
// fscanf(ptr, "%d\n", &num[1]);
// fscanf(ptr, "%d\n", &num[2]);
// printf("the first num is %d\n", num[0]);
// printf("the second num is %d\n", num[1]);
// printf("the third num is %d\n", num[2]);

//     return 0;
// }


