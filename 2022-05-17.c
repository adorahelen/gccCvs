#include <stdio.h>

// 소수 판별 함수
int isPrime(int number) {
    // 2부터 number-1까지 나눠서 나누어 떨어지면 소수가 아님
    for (int i = 2; i < number; i++)
        if (number % i == 0) return 0; // 나누어 떨어지면 소수가 아님
    return 1; // 나누어 떨어지는 수가 없으면 소수
}

int main () {
    int number = 13195;  // 소인수를 찾고 싶은 수
    int max_div = 0;     // 가장 큰 소인수를 저장할 변수

    // 2부터 number-1까지 반복
    for (int i = 2; i < number; i++) {
        // i가 소수이면서 number를 나눌 수 있으면
        if (isPrime(i) == 1 && number % i == 0 )
            max_div = i; // max_div를 i로 갱신 (계속 갱신되므로 결국 가장 큰 소인수가 저장됨)
    }

    printf("%d", max_div); // 가장 큰 소인수 출력

    return 0; // 프로그램 종료
}

// •	“이 함수 뭘까?” → 이름 먼저 본다
// •	“변수들이 어떤 역할이지?” → 처음 값, 갱신 패턴
// •	“if 조건은 뭘 필터링하고 있지?” → 진짜 찾고 있는 대상 파악
// •	“출력은 최종 결과니까, 그걸 도출하기 위한 흐름 추적!”

// =>  결론: 가장 큰 소인수를 구하는 코드!