#include <stdio.h>
void display(); // Function prototype

int main(){
    int a;
    printf("initialising Function\n");
    display(); // function call
    printf("function has done its work\n");
    return 0;
}

//function definition
void display(){
printf("hi i am a display\n");
}