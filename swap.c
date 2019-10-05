#include <stdio.h>
int main(void)
{
    int x = 28;
    int y = 50;
    int g = 50;
    int b = 60;

    printf("x is %i\n", x);
    printf("y is %i\n", y);

    // swapping...
    int temp = x;
    x = y;
    y = temp;
    g = b;

    printf("x is now %i\n", x);
    printf("y is now %i\n", y);
}
