#include <stdio.h>
// cannot do the second part
int main(){
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("a.txt", "r");
    ptr2 = fopen("b.txt", "w");
  char c = fgetc(ptr1);


while( c!=EOF){
    fputc(c,ptr2);
    fputc(c,ptr2);
    c = fgetc(ptr1);
}

    fclose(ptr1);
    fclose(ptr2);
    
    return 0;
}