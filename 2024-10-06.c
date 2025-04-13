#include <stdio.h>

int func () {
    static int x = 0;
    x += 2;
    return x;

}// 호출하면 매번 x를 초기화하고 2를 넣어서 2를 리턴함

int main(int argc, char const *argv[])
{
    int x = 0;
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        x++;
        sum += func();
        
    }   
    printf("%d", sum);
    return 0;
}
