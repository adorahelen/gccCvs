#include <stdio.h>

int main() {
    char name[50];

    printf("이름을 입력하세요: ");
    scanf("%s", name);

    printf("안녕하세요, %s님!\n", name);

    return 0;
}