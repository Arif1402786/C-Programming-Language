#include <stdio.h>
#include <string.h>
struct student{
int roll_no;
float percentage;
char name[20];
};
int main(){
    struct student s1;
    struct student *ptr;
    ptr = &s1;
    ptr->roll_no = 50;
    ptr->percentage = 9.69;
    strcpy(ptr->name,"ARIF ALI");
    printf("Roll number is %d\n", ptr->roll_no);
    printf("Percentage is %.2f\n", ptr->percentage);
    printf("Name is %s\n", ptr->name);
    return 0;
}

// #include <stdio.h>
// #include <string.h>

// struct students{
// char name[20];
// int rollno;
// float marks;
// };

// void show(struct students s1){
//     printf("name of the student is : %s\n", s1.name);
//     printf("roll number of the student is : %d\n", s1.rollno);
//     printf("marks of the student is : %f\n", s1.marks);
// }
// int main(){
//     struct students s1;
//     struct students *ptr;
//     ptr = &s1;
//     strcpy(ptr->name,"ARIF");
    
//     ptr->rollno =1050; 
//     ptr->marks = 9.46; 

//  show(s1);

//     return 0;
// }