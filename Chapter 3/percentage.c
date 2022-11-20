#include <stdio.h>

int main()
{
    int physics, chemistry, maths;
    float total;
    printf("Enter Your Physics Number\n");
    scanf("%d", &physics);

    printf("Enter Your chemistry Number\n");
    scanf("%d", &chemistry);

    printf("Enter Your maths Number\n");
    scanf("%d", &maths);

    total = (physics + chemistry + maths)/3;

    if((total<40) || physics<33 || chemistry<33 || maths<33){
        printf("your total percentage is %f and you are fail\n", total);
    }
else {
    printf("your total percentage is %f and you are pass\n", total);
}
    return 0;
}