#include <stdio.h>

struct vector{
int x_axis;
int y_axis;
};

int main(){
    struct vector v1,v2;

printf("Enter the value of x coordinate for v1\n");
scanf("%d", &v1.x_axis);
printf("Enter the value of y coordinate for v1\n");
scanf("%d", &v1.y_axis);

printf("\n");

printf("Enter the value of x coordinate for v2\n");
scanf("%d", &v2.x_axis);
printf("Enter the value of y coordinate for v2\n");
scanf("%d", &v2.y_axis);


printf("vector v1 is %di+%dj\n", v1.x_axis,v1.y_axis);
printf("vector v2 is %di+%dj\n", v2.x_axis,v2.y_axis);

    return 0;
}
// #include <stdio.h>


// struct vector{
//     int x;
//     int y;
// };

// int main(){
//     struct vector v1,v2; // after find and replace by ctrl F
//     v1.x = 5;
//     v1.y = 8;
// printf("the two dimensional vector is : %di + %dj\n", v1.x,v1.y);
// printf("x dim is %d and Y dim is %d\n", v1.x,v1.y);

// printf("\n");

//  v2.x =7;
//     v2.y = 3;
// printf("the two dimensional vector v2 is : %di + %dj\n", v2.x,v2.y);
// printf("x dim is %d and Y dim is %d\n", v2.x,v2.y);
//     return 0;
// }