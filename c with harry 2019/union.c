/*
Union is a user defined data type (similar to structure).
The difference lies in the fact that in structure, each member has its own storage location , whereas members of a union uses a single shared memory location.
The single shared memory location is equal to the size of its largest data member.
Union cannot handle all members at once.
Used for better memory management in our C Programs.
*/
#include <stdio.h>
#include <string.h>
union student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};


int main(){
 union student s1;
    s1.id = 1;
    s1.marks = 45;
    s1.fav_char = 'r';
    strcpy(s1.name,"Arif");


    printf("The id is %d\n",s1.id);
    printf("The marks is %d\n",s1.marks);
    printf("The fav character is %c\n",s1.fav_char);
    printf("The name is %s\n",s1.name);
    return 0;
}