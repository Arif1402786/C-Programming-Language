// ABC PVT LTD  manages employee records of other companies
//  Employee id can be of any length and it contain any characters
//  for 3 employees, you have to take 'length of the employee id' as an input in a length variable
// then you have to take employee id as an input and display it on the screen
// store the employee id in a character which is allocated dynamically
// you have to create only one character array dynamically

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int chars,i=0;
   char a,b;
   char *ptr;
   while (i<3)
   {
       printf("Employee %d: Enter the number of characters in your employee ID\n",i+1);
       scanf("%d", &chars);
    //    printf("Enter the value of a: ");//remember about input buffer
    //    scanf("%c", &a);// to avoid input buffer use getchar()
    //    printf("Enter the value of b: ");
    //    scanf("%c", &b);
       ptr = (char *) malloc((chars+1)*sizeof(char));
       printf("Enter your Employee ID: ");
       scanf("%s", ptr);
       printf("Your Employee ID is %s\n", ptr);
       free(ptr);
       i=i+1;
   }
    return 0;
}