#include <stdio.h>
#include <stdlib.h>

int main(){
    int **mat,row,col,i,j;
    printf("Enter the number of rows: ");
    scanf("%d", &row);

mat = (int **)malloc(row*sizeof(int *));

    printf("Enter the number of columns: ");
    scanf("%d", &col);

    for(i=0;i<row;i++)
    {
      mat[i]=(int *)malloc(col*sizeof(int));
    }
      printf("Enter the elements in matrix: \n");
    for(i=0;i<row;i++)
    {
      for(j=0;j<col;j++)
      {
          scanf("%d", &mat[i][j]);
      }  
    }
      printf("The matrix is: \n");

    for(i=0;i<row;i++)
    {
      for(j=0;j<col;j++)
      {
          printf("%d\t",mat[i][j]);
      }  
      printf("\n");
    }
    
    return 0;
}