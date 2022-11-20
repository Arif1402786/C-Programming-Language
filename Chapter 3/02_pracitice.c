#include <stdio.h>

int main(){
    int phy, chem, maths;
    printf("Enter the Physics Number\n");
    scanf("%d", &phy);
    printf("Enter the Chemistry Number\n");
    scanf("%d", &chem);
    printf("Enter the Mathematics Number\n");
    scanf("%d", &maths);
    float percent;
    percent = (phy+chem+maths)/3;
        printf("your Physics , Chemistry and Mathematics Numbers are %d , %d and %d espetively and your total percentage is %.2f\n", phy , chem , maths , percent );

    if ((phy>33 && chem>33 && maths>33)&& percent>40){
        printf("You Have Passed the Examination\n");
    }
    else{
        printf("You Fail\n");

    }
    return 0;
}