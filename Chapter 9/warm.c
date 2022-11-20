#include <stdio.h>
typedef struct timestamp{
int years;
int months;
int days;
int hours;
int mins;
int secs;

}timestamp;

void display(timestamp t1, timestamp t2){
    printf("Time Stamp t1 is %d-%d-%d  %d:%d:%d\n",t1.years,t1.months, t1.days, t1.hours, t1.mins, t1.secs);

    printf("Time Stamp t2 is %d-%d-%d  %d:%d:%d\n",t2.years,t2.months, t2.days, t2.hours, t2.mins, t2.secs);
}

int timestampcmp(timestamp t1, timestamp t2){
    if(t1.years>t2.years){
        return 1;
    }
    if(t1.years<t2.years){
        return -1;
    }
    if(t1.months>t2.months){
        return 1;
    }
    if(t1.months<t2.months){
        return -1;
    }
    if(t1.days>t2.days){
        return 1;
    }
    if(t1.days<t2.days){
        return -1;
    }
        if(t1.hours>t2.hours){
        return 1;
    }
    if(t1.hours<t2.hours){
        return -1;
    }   
     if(t1.mins>t2.mins){
        return 1;
    }
    if(t1.mins<t2.mins){
        return -1;
    }

        if(t1.secs>t2.secs){
        return 1;
    }
    if(t1.secs<t2.secs){
        return -1;
    }
    return 0;
}
int main(){
    int i;
    timestamp t1,t2;
    t1.years = 2020;
    t2.years = 2021;
    t1.months = 4;
    t2.months = 3;
    t1.days = 23;
    t2.days =16;
    t1.hours = 12;
    t2.hours = 11;
    t1.mins = 56;
    t2.mins = 56;
    t1.secs = 30;
    t2.secs = 20;
  
  display(t1,t2);
    i = timestampcmp(t1,t2);
 if(i == 1){
     printf("t1 is greater than t2\n");
 }
 else{
     printf("t2 is greater than t1\n");
 }
    return 0;
}