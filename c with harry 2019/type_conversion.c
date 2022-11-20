/*
kms to miles
inches to foot
cms to inches
pound to kgs
inches to meter
*/
#include <stdio.h>

int main()
{
    int num;
    char ans;
    do
    {
        printf("The following number performs folllowing operations:\n");
        printf("1.kms to miles\n2.inches to feet\n3.cms to inches\n4.pound to kgs\n5.inches to meter\n");

        printf("Enter the number: ");
        scanf("%d", &num);

        switch (num)
        {
        case 1:
        {
            float km, miles;
            printf("Enter the kms: ");
            scanf("%f", &km);
            miles = 0.62137 * km;
            printf("%f km = %f miles\n", km, miles);
            goto end;
        }

        case 2:
        {
            float inches, feet;
            printf("Enter a number in inches: ");
            scanf("%f", &inches);
            feet = inches / 12;
            printf("%f inches = %f feet\n", inches, feet);
            goto end;
        }
        case 3:
        {
            float cms, inches;
            printf("Enter a number in cm: ");
            scanf("%f", &cms);
            inches = cms / 2.54;
            printf("%f cms = %f inches\n", cms, inches);
            goto end;
        }
        case 4:
        {
            float pound, kgs;
            printf("Enter a number in pounds: ");
            scanf("%f", &pound);
            kgs = pound / 2.205;
            printf("%f pounds = %f kgs\n", pound, kgs);
            goto end;
        }
        case 5:
        {
            float inches, metres;
            printf("Enter a number in inches: ");
            scanf("%f", &inches);
            metres = .0254 * inches;
            printf("%f inches = %f metres\n", inches, metres);
            goto end;
        }
        default:
        {
            printf("Invalid Input\n");
            goto end;
        }
        end:
            printf("Do you wanna continue(y/n)?\n");
            fflush(stdin);
            scanf("%c", &ans);
        }

    } while (ans == 'y' || ans == 'Y');
    printf("Thank You...");

    return 0;
}