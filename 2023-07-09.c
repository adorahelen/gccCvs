#include <stdio.h>
#define MAX_SIZE 10

int isWhat[MAX_SIZE];   // 스택 배열
int point = -1;         // 스택의 top 위치 (-1이면 비어있음)

// 스택이 비어있는지 확인
int isEmpty() {
    return point == -1;
}

// 스택이 가득 찼는지 확인
int isFull() {
    return point == MAX_SIZE - 1;
}

// 스택에 데이터 넣기 (push)
void into(int num) {
    if (isFull()) {
        printf("Full...\n");
    } else {
        isWhat[++point] = num;  // 스택의 top 위치 증가 후, 그 위치에 num 저장
        // 💡 주의: 비교연산자 `==`이 아니라 대입연산자 `=`를 사용해야 함!
    }
}

// 스택에서 데이터 꺼내기 (pop)
int take() {
    if (isEmpty()) {
        printf("Empty...\n");
        return -1; // 실패 시 반환 값
    } else {
        return isWhat[point--];  // 현재 top 값을 리턴하고 top 위치 감소
    }
}

int main() {
    // 데이터 삽입
    into(5);
    into(2);
    into(9);

    // 데이터 꺼내기 (후입선출 확인용)
    while (!isEmpty()) {
        int val = take();
        printf("Pop: %d\n", val);
    }

    return 0;
}