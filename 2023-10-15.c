#include <stdio.h>

// 재귀 함수 정의: n! = n × (n-1)!
int f(int n) {
    if(n <= 1) return 1;  // 0! 또는 1!은 1로 정의됨 (종료 조건)
    else return n * f(n-1); // 재귀 호출: n! = n × (n-1)!
}

int main(int argc, char const *argv[])
{
    printf("%d", f(7)); // 7! 계산 → 7×6×5×4×3×2×1 = 5040
    return 0;
}