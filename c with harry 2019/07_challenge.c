/*
you manage a travel agency and you want 3 drivers to input the folloqwing details:
1. Name
2. Driving License Number
3. Route
4. kms
your program should be able to take input from 3 users and your drivers will start inputting their details one by one

Your program should printd details in a beautiful fashion
*/

#include <stdio.h>
#include <string.h>
typedef struct driver
{
    char name[30];
    char Driving_no[15];
    char route[20];
    int kms_travel;

} Driver;

int main()
{
    Driver d1, d2, d3;

printf("Enter the Details of the First Driver:\n");
printf("Enter The name of the First Driver: ");
gets(d1.name);
fflush(stdin);
printf("Enter The Driving license Number of the First Driver: ");
scanf("%s", &d1.Driving_no);
fflush(stdin);
printf("Enter The Route of the First Driver: ");
gets(d1.route);
fflush(stdin);
printf("Enter The kms travel by the First Driver: ");
scanf("%d", &d1.kms_travel);
fflush(stdin);
printf("\n");

printf("Enter the Details of second Driver:\n");
printf("Enter The name of the second Driver: ");
gets(d2.name);
fflush(stdin);
printf("Enter The Driving license Number of the second Driver: ");
scanf("%s", &d2.Driving_no);
fflush(stdin);
printf("Enter The Route of the second Driver: ");
gets(d2.route);
fflush(stdin);
printf("Enter The kms travel by the second Driver: ");
scanf("%d", &d2.kms_travel);
fflush(stdin);
printf("\n");

printf("Enter the Details of the third Driver:\n");
printf("Enter The name of the third Driver: ");
gets(d3.name);
fflush(stdin);
printf("Enter The Driving license Number of the third Driver: ");
scanf("%s", &d3.Driving_no);
fflush(stdin);
printf("Enter The Route of the third Driver: ");
gets(d3.route);
fflush(stdin);
printf("Enter The kms travel by the third Driver: ");
scanf("%d", &d3.kms_travel);
fflush(stdin);
printf("\n");

printf(" \n.....Printing the details of the Drivers.....\n");
printf("Name of the 1st Driver: %s\t Driving license: %s\t Route Travel: %s\t Kms travel: %d\n", d1.name,d1.Driving_no,d1.route,d1.kms_travel);
printf("Name of the 2nd Driver: %s\t Driving license: %s\t Route Travel: %s\t Kms travel: %d\n", d2.name,d2.Driving_no,d2.route,d2.kms_travel);
printf("Name of the 3rd Driver: %s\t Driving license: %s\t Route Travel: %s\t Kms travel: %d\n", d3.name,d3.Driving_no,d3.route,d3.kms_travel);
    // strcpy(d1.name, "Arif");
    // strcpy(d2.name, "Ayush");
    // strcpy(d3.name, "soumyodeep");
    // d1.Driving_no = 123;
    // d2.Driving_no = 456;
    // d3.Driving_no = 789;
    // strcpy(d1.route, "kolkata");
    // strcpy(d2.route, "Coochbehar");
    // strcpy(d3.route, "hooghly");
    // d1.kms_travel = 2000;
    // d2.kms_travel = 3000;
    // d3.kms_travel = 4000;
    // printf("Name = %s\t Driving License Number: %d\t Route: %s\t Kms Travel: %d\n", d1.name, d1.Driving_no, d1.route, d1.kms_travel);
    // printf("\n");
    // printf("Name = %s\t Driving License Number: %d\t Route: %s\t Kms Travel: %d\n", d2.name, d2.Driving_no, d2.route, d2.kms_travel);
    // printf("\n");
    // printf("Name = %s\t Driving License Number: %d\t Route: %s\t Kms Travel: %d\n", d3.name, d3.Driving_no, d3.route, d3.kms_travel);
    // printf("\n");


    return 0;
}