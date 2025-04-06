#include <stdio.h>
#include <stdlib.h>   // malloc, free
#include <string.h>   // strcpy

// 구조체 정의
struct insa {
    char name[10];
    int age;
    struct insa *imp1_a;
    struct insa *imp1_b;
};

int main() {
    // 구조체 동적 할당
    struct insa *p1 = (struct insa *)malloc(sizeof(struct insa));
    struct insa *p2 = (struct insa *)malloc(sizeof(struct insa));
    struct insa *p3 = (struct insa *)malloc(sizeof(struct insa));

    // 동적 할당이 실패한 경우 체크 (중요!)
    if (!p1 || !p2 || !p3) {
        printf("메모리 할당 실패\n");
        return 1;
    }

    // p1에 데이터 저장
    strcpy(p1->name, "Kim");
    p1->age = 25;

    // p2에 데이터 저장
    strcpy(p2->name, "Lee");
    p2->age = 30;

    // p3에 데이터 저장
    strcpy(p3->name, "Park");
    p3->age = 28;

    // 포인터 연결
    p1->imp1_a = p2;
    p1->imp1_b = p3;

    // 출력
    printf("p1 name: %s, age: %d\n", p1->name, p1->age);
    printf("p1 -> imp1_a: %s, age: %d\n", p1->imp1_a->name, p1->imp1_a->age);
    printf("p1 -> imp1_b: %s, age: %d\n", p1->imp1_b->name, p1->imp1_b->age);

    // 동적으로 할당한 메모리 해제
    free(p1);
    free(p2);
    free(p3);

    return 0;
}