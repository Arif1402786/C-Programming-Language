#include <stdio.h>

int main(){
    int table[3][10];

int n;
printf("Enter the value of n\n");
scanf("%d", &n);

int m;
printf("Enter the value of m \n");
scanf("%d", &m);

int p;
printf("Enter the value of p \n");
scanf("%d", &p);

printf("MULTIPLICATION TABLE OF %d:\n", n);

for(int i=0;i<10;i++){
    table[0][i]= n*(i+1);

}
for(int i=0;i<10;i++){
    printf("%dX%d =%d\n ",n,i+1, table[0][i]);
}

printf("\n\n");

printf("MULTIPLICATION TABLE OF %d:\n", m);

for(int i=0;i<10;i++){
    table[0][i]= m*(i+1);

}
for(int i=0;i<10;i++){
    printf("%dX%d =%d\n ",m,i+1, table[0][i]);
}


printf("\n\n");

printf("MULTIPLICATION TABLE OF %d:\n", p);

for(int i=0;i<10;i++){
    table[0][i]= p*(i+1);

}
for(int i=0;i<10;i++){
    printf("%dX%d =%d\n ",p,i+1, table[0][i]);
}
    return 0;
}