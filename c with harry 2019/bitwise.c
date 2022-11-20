//bitwise operator chart
//   a     b      a&b     a|b     a^b  -> ^ = XOR
//   0     0       0       0       0  
//   0     1       0       1       1 
//   1     0       0       1       1
//   1     1       1       1       0 




#include <stdio.h>
// in binary form
//0 --> 00
//1 --> 01
//2 --> 10
//3 --> 11

// a = 2 and b = 3
//a & b = (10)&(11) = (10) = 2
// 1 is true and 0 is false
// & -> and( both should be true)
// | -> or(either one or both should be true)
// ^ -> exclusive or(any one must be true and one must be false)
int main(){
    int a = 2, b = 3;
    printf("%d\n", a&b);
    printf("%d\n", a|b);
    printf("%d\n", a^b);
    return 0;
}