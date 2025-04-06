#include <stdio.h>
#include <string.h>

// 구조체 정의
struct insa 
{
    char name[10];             // 이름 (문자열 최대 9자 + null 문자)
    int age;                   // 나이
    struct insa *imp1_a;       // 연결 포인터 A (다른 insa 구조체를 가리킴)
    struct insa *imp1_b;       // 연결 포인터 B
};

int main(int argc, char const *argv[])
{
    // 구조체 변수 선언 및 초기화
    struct insa p1 = {"Kim", 25, NULL, NULL};   // Kim, 나이 25, 연결 없음
    struct insa p2 = {"Lee", 30, NULL, NULL};   // Lee, 나이 30
    struct insa p3 = {"Park", 28, NULL, NULL};  // Park, 나이 28

    // 구조체 포인터 연결 (예: 트리, 그래프처럼 구성할 수도 있음)
    p1.imp1_a = &p2;  // p1 → p2 연결
    p1.imp1_b = &p3;  // p1 → p3 연결

    // 연결된 구조체 정보 출력
    printf("p1 name: %s, age: %d\n", p1.name, p1.age);
    printf("p1.imp1_a -> name: %s, age: %d\n", p1.imp1_a->name, p1.imp1_a->age);
    printf("p1.imp1_b -> name: %s, age: %d\n", p1.imp1_b->name, p1.imp1_b->age);

    return 0;
}