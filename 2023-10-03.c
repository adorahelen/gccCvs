#include <stdio.h>

int main(int argc, char const *argv[])
{
    char *p = "KOREA"; // 문자열 상수. 포인터 p는 문자열의 첫 문자 'K'를 가리킨다.

    // 1. 전체 문자열 출력
    printf("1. %s\n", p);         // 결과: KOREA

    // 2. 포인터 연산으로 두 번째 문자부터 출력
    printf("2. %s\n", p + 1);     // 결과: OREA

    // 3. 개별 문자 출력
    printf("3. %c\n", *p);        // 결과: K (p가 가리키는 문자)
    printf("4. %c\n", *(p + 3));  // 결과: E (네 번째 문자)

    // 4. 포인터가 문자열 끝에 도달했을 경우
    printf("5. %c\n", *(p + 5));  // 결과: null 문자 '\0' => 화면에는 보이지 않음

    // 5. 문자열을 while 루프로 출력
    printf("6. ");
    int i = 0;
    while (*(p + i) != '\0') {
        printf("%c ", *(p + i));  // 한 문자씩 공백으로 출력: K O R E A
        i++;
    }
    printf("\n");

    // 6. 문자열 역순 출력 (문자 단위)
    printf("7. ");
    for (int j = 4; j >= 0; j--) {
        printf("%c", *(p + j));   // 결과: AEROK
    }
    printf("\n");

    // 7. 잘못된 접근 예 (주의: 이건 경고용!)
    // printf("%c\n", *(p + 10)); // ❌ 위험! 범위를 벗어난 접근 (undefined behavior)

    return 0;
}