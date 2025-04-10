#include <stdio.h>
int main(int argc, char const *argv[])
{
    int * arry[3];
    int a =12, b=24, c=36;
    
    arry[0] = &a;
    arry[1] = &b;
    arry[2] = &c;

    printf("%d", *arry[1] + **arry + 1);

    return 0;
}
