#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    // ptr = fopen("myfile.txt", "r");
    // use of fgetc
    //  // char c = fgetc(ptr);
    //  printf("The character i read was %c\n", fgetc(ptr));
    //  printf("The character i read was %c\n", fgetc(ptr));
    //  printf("The character i read was %c\n", fgetc(ptr));

    // use of fgets
    // char str[34];
    // fgets(str,4,ptr);
    // printf("the string is %s\n",str);

    // ptr = fopen("myfile.txt", "w");
    // //use of fputc and fputs
    // fputc('o', ptr);
    // fputc('r', ptr);
    // fputc('a', ptr);
    // fputs("this is arif", ptr);

//plus mode
// ptr = fopen("plus.txt", "r+");

// //  fputc('o', ptr);
// //     fputc('r', ptr);
// //     fputc('a', ptr);
// //     fputs("this is arif", ptr);

//   char str[34];
//     fgets(str,5,ptr);
//     printf("the string is %s\n",str);

//     ptr = fopen("plus.txt", "w+");

//  fputc('o', ptr);
//     fputc('r', ptr);
//     fputc('a', ptr);
//     fputs("this is arif ali", ptr);
  

    ptr = fopen("plus.txt", "a+");

//  fputc('o', ptr);
//     fputc('r', ptr);
//     fputc('a', ptr);
//     fputs("this is arif ali", ptr);

      char str[34];
    fgets(str,5,ptr);
    printf("the string is %s\n",str);

    return 0;
}