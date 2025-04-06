#include <stdio.h>

// 완전수인지 판별하는 함수
int isPerfectNum(int num) {
    int sum = 0;

    // 1부터 num-1까지의 약수를 더함
    for (int i = 1; i < num; i++) {
        if (num % i == 0)
            sum += i;
    }

    // 자기 자신의 약수 합과 같으면 완전수
    if (num == sum) return 1;
    else return 0;
}

int main() {
    int r = 0;

    // 1부터 100까지 반복하며 완전수만 합함
    for (int i = 1; i <= 100; i++) {
        if (isPerfectNum(i))
            r += i;
    }

    printf("%d", r); // 출력: 34 (6 + 28)
}