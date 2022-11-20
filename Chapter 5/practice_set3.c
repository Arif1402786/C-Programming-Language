#include <stdio.h>
float force(float mass);
int main(){
    float m;
    printf("Enter your Mass in kgs\n");
    scanf("%f", &m);
    printf("the value of Force In Newton is %.2f\n",force(m)); // .(n)f tells us how many decimal points are there
    return 0;
}
float force(float mass){
    float result;
    result = 9.8 * mass;
    return result;
}
