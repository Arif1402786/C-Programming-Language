
#include <stdio.h>

typedef struct Time{
int secs;
int mins;
int hours;
}Time;

void display(Time t){
    printf("The time Is %dhours %d minutes and %d seconds\n",  t.hours, t.mins,t.secs);
}

int Timecmp(Time t1, Time t2){
//Make decision on the basis of hours Comparison
if(t1.hours>t2.hours){
    return 1;
}
if(t1.hours<t2.hours){
    return -1;
}

//Make decision on the basis of mins Comparison

if(t1.mins>t2.mins){
    return 1;
}
if(t1.mins<t2.mins){
    return -1;

//Make decision on the basis of secs Comparison

}if(t1.secs>t2.secs){
    return 1;
}
if(t1.secs<t2.secs){
    return -1;
}
return 0;
}


int main(){

   Time t1 = {50, 20 , 10};
   Time t2 = {15, 20, 10};
display(t1);
display(t2);
 int a = Timecmp(t1,t2);
 printf("Time comparison Return = %d\n",a);
    return 0;
}