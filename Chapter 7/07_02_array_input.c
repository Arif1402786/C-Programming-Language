#include <stdio.h>

int main(){
    int Marks[4]; // allocate space for 4 integers

printf("Enter the value of marks for Student 1: ");
scanf("%d", &Marks[0]);
printf("Enter the value of marks for Student 2: ");
scanf("%d", &Marks[1]);
printf("Enter the value of marks for Student 3: ");
scanf("%d", &Marks[2]);
printf("Enter the value of marks for Student 4: ");
scanf("%d", &Marks[3]);
printf("You have entered %d %d %d and %d\n", Marks[0],Marks[1],Marks[2],Marks[3]);
    return 0;
}


// #include <stdio.h>

// int main(){
//     int marks[5];
//     printf("Enter the marks of the first student\n");
//     scanf("%d", &marks[0]);
//      printf("Enter the marks of the second student\n");
//     scanf("%d", &marks[1]);
//      printf("Enter the marks of the third student\n");
//     scanf("%d", &marks[2]);
//      printf("Enter the marks of the fourth student\n");
//     scanf("%d", &marks[3]);
//      printf("Enter the marks of the fifth student\n");
//     scanf("%d", &marks[4]);
//     printf("The marks of the first student is %d\n", marks[0]);
//     printf("The marks of the second student is %d\n", marks[1]);
//     printf("The marks of the third student is %d\n", marks[2]);
//     printf("The marks of the fourth student is %d\n", marks[3]);
//     printf("The marks of the fifth student is %d\n", marks[4]);

//     return 0;
// }