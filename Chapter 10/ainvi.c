#include <stdio.h>
// cannot do the second part
int main()
{
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("a.txt", "r");
    ptr2 = fopen("c.txt", "w");
    char c = fgetc(ptr1);

    while (c != EOF)
    {
        while (c != EOF)
        {
            fputc(c, ptr2);
            c = fgetc(ptr1);
        }
        c = fgetc(ptr1);
    }
    fclose(ptr1);
    fclose(ptr2);

    return 0;
}