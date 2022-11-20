#include <stdio.h>
void slice(char *st,int m, int n){
int i =0;
while((m+i)<=n){
    st[i]= st[i+m];
    i++;
}
st[i] ='\0';
}
int main(){
    char st[]= "ARIFALI";
    slice (st, 2,5);
    printf("%s", st);
    printf("\n");
    return 0;
}