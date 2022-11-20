#include <stdio.h>
#include <string.h>

typedef struct customer
{

    char name[20];
    char bank_name[30];
    int acc_no;
    float balance;
    int ph_no;

} customer;
void show(customer c1)
{

    printf("The Name of the customer is %s\n", c1.name);
    printf("The Bank name is %s\n", c1.bank_name);
    printf("The account number of the customer is %d\n", c1.acc_no);
    printf("The balance of the customer is %f\n", c1.balance);
    printf("The phone number of the customer is %d\n", c1.ph_no);
}
int main()
{
    customer c1;
    printf("Enter the name of the customer: ");
    gets(c1.name);
    printf("Enter the Bank Name: ");
    gets(c1.bank_name);
    printf("Enter the last 4 digits of the account number of the customer: ");
    scanf("%d", &c1.acc_no);
    printf("Enter the balance of the customer: ");
    scanf("%f", &c1.balance);
    printf("Enter the phone number of the customer: ");
    scanf("%d", &c1.ph_no);
    printf("\n");
    show(c1);
    return 0;
}
// #include <stdio.h>

// #include <string.h>
// struct customer{
//     char name[20];
//     char bank[50];
//     int acc_no;
//     float balance;
//     int year;
// };
// void show(struct customer c){
//     printf("Name of the Customer : %s\n ",c.name);
//     printf("Name of the Bank : %s\n ",c.bank);
//     printf("Account Number of the Customer : %d\n ",c.acc_no);
//     printf("Bank Balance of the Customer : %f\n ",c.balance);
//     printf("Yearof opening of Customer's Account : %d\n ",c.year);
// }
// int main(){
// struct customer c1;
// strcpy(c1.name,"ARIF_ALI");
// strcpy(c1.bank,"SBI");
// c1.acc_no =65309;
// c1.balance =10000.454;
// c1.year =2019;
// show(c1);
//     return 0;
// }