#include <stdio.h>
#include <string.h>
typedef struct complexnumber
{
  int real;
  int img;
} complex;

void display(complex c)
{
  printf("The real part of the complex number is %d\n ", c.real);
  printf("The imaginary part of the complex number is %d \n", c.img);
}

int main()
{
  complex cnum[5];
  for (int i = 0; i < 5; i++)
  {
    printf("Enter the real part of the complex number for %d: ", i + 1);
    scanf("%d", &cnum[i].real);
    printf("Enter the imaginary part of the complex number for %d: ", i + 1);
    scanf("%d", &cnum[i].img);
    printf("\n");

    display(cnum[i]);
    printf("\n");
  }

  return 0;
}