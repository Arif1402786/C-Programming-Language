#include <stdio.h>
//also called jump statement
//used to transfer program control to a predefined label
//preferable when used to break multiple loops using a single statement at the same time
// avoid as much as possible
int main(){
   int num;
for (int i = 0; i < 8; i++)
{
    printf("%d\n",i);
    for(int j=0;j<8;j++)
    {
        printf("Enter the number. enter 0 yo exit: ");
        scanf("%d", &num);
        if(num==0)
        {
            goto end;
            // break;
        }
    }
}

end:
    return 0;
}