#include <stdio.h>
#include <math.h>
/*
(5 points) Write a program to find the smallest positive integer 𝑥
 such that the floating point expression
(1⊘𝑥)⊗𝑥
is not equal to 1, using single precision. Make sure that the variable x is in single format, and assign the value of the expression 1⊘𝑥
 to a single format variable before doing the multiplication operation. Repeat with double precision.
*/

int main() {
    float y = 1;
    float x = 1;
    while (y == 1.0f){
        float v = y/x;
        float b = v * x;
        if (b!=y)
        {
            printf("x for single is %f", x);
            break;
        }
        x = x + 1.0f;
    }

    double yy = 1;
    double xx = 1;
    while (yy == 1){
        double vv = yy/xx;
        double bb = vv * xx;
        if (bb!=yy)
        {
            printf(" and x for double is %f", xx);
            break;
        }
        xx = xx + 1;
    }

    return 0;
}
