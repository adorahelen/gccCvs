#include <stdio.h>
void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
    // a 랑 b랑 swap 하는 함수 
}

int main() {
    int a = 11;
    int b = 19;
    swap(a,b);

    switch (a)
    {

    case  1:
        /* code */
        b += 1;

    case 11:
        b += 2;

    default:
        b += 3;
        break;
    }

    printf("%d", a-b);
    
}