#include <stdio.h>

char n[10];

char * getname() {
    printf("이름 입력 : ");
    get(n);  // 위험한 함수 (보안 문제 + 덮어쓰기 문제)
    return n; // n의 주소 반환
}

int main() {
    char* n1 = getname();  // 첫 번째 이름 입력
    char* n2 = getname();  // 두 번째 이름 입력 (n 버퍼에 덮어씀)

    printf("n1: %s\n", n1); // n1과 n2는 같은 주소 → 같은 문자열 출력
    printf("n2: %s\n", n2);
    return 0;
}