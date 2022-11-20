#include <stdio.h>
struct vector
{
    int x;
    int y;
};

struct vector sum_vector(struct vector v1, struct vector v2)
{
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
};

int main()
{
    struct vector v1, v2, sum;
    printf("Enter the x dim of v1: ");
    scanf("%d", &v1.x);
    printf("Enter the y dim of v1: ");
    scanf("%d", &v1.y);
    printf("Enter the x dim of v2: ");
    scanf("%d", &v2.x);
    printf("Enter the y dim of v2: ");
    scanf("%d", &v2.y);
    printf("The two dimenstional vector v1 is %di+%dj\n", v1.x, v1.y);
    printf("The two dimenstional vector v2 is %di+%dj\n", v2.x, v2.y);
    sum = sum_vector(v1, v2);
    printf("The sum of the x dim of the two vectors is %d\n", sum.x);
    printf("The sum of the y dim of the two vectors is %d\n", sum.y);
    return 0;
}



// #include <stdio.h>
// struct vector{
//     int x;
//     int y;
// };
//  struct vector sumVector(struct vector v1, struct vector v2){
// struct vector result;
// result.x = v1.x + v2.x;
// result.y = v1.y + v2.y;
// return result;
//  }
// int main(){
//     struct vector v1,v2,sum; // after find and replace by first ctrl N and then ctrl F
//     v1.x = 5;
//     v1.y = 8;
// printf("the two dimensional vector v1 is : %di + %dj\n", v1.x,v1.y);
// printf("x dim is %d and Y dim is %d\n", v1.x,v1.y);

// printf("\n");

//  v2.x =7;
//     v2.y = 3;
// printf("the two dimensional vector v2 is : %di + %dj\n", v2.x,v2.y);
// printf("x dim is %d and Y dim is %d\n", v2.x,v2.y);

// printf("\n");

// sum =sumVector(v1 ,v2);
// printf("x dim of resultant is %d and Y dim is %d\n", sum.x,sum.y);
//     return 0;
// }