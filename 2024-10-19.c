#include <stdio.h>

// 이 함수는 이중 포인터를 통해 1차원 배열을 받아서
// 각 원소를 (원래 값 + 인덱스) % size 로 업데이트합니다.
void func(int **arr, int size) {
    for (int i = 0; i < size; i++) {
        // (*arr + i): arr[i]에 해당하는 주소
        // *(*arr + i): arr[i] 값
        // arr[i] = (arr[i] + i) % size; 와 같은 의미입니다
        *(*arr + i) = (*(*arr + i) + i) % size;
    }
}

int main(int argc, char const *argv[]) {
    int arr[] = {3, 1, 4, 1, 5};  // 정수 배열 선언 및 초기화
    int *p = arr;                // 배열의 시작 주소를 가리키는 포인터
    int **pp = &p;               // 포인터의 포인터 선언 (2중 포인터)
    int num = 6;                 // 결과 확인용 변수 (초기값은 의미 없음)

    func(pp, 5);                 // arr 배열을 func을 통해 업데이트

    num = arr[2];                // arr[2] 값을 num에 저장
    printf("%d", num);           // arr[2] 값 출력

    return 0;
}