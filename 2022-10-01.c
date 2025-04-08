#include <stdio.h>

int chkover(int w, int h, int j, int i) {
    if (i >= 0 && i < w && j >= 0 && j < h) return 1;
    return 0;
}

int main(int argc, char const *argv[])
{
    // 초기 지뢰 필드 (1은 지뢰, 0은 빈칸)
    int field[4][4] = {
        {0, 1, 0, 1},
        {0, 0, 0, 1},
        {1, 1, 1, 0},
        {0, 1, 1, 1}
    };

    // 주변 지뢰 수를 저장할 배열
    int mines[4][4] = {{0}};
    int w = 4, h = 4;

    // 지뢰 수 계산
    for (int y = 0; y < h; y++) {
        for (int x = 0; x < w; x++) {
            int count = 0;
            for (int dy = -1; dy <= 1; dy++) {
                for (int dx = -1; dx <= 1; dx++) {
                    if (dy == 0 && dx == 0) continue;
                    int ny = y + dy;
                    int nx = x + dx;
                    if (chkover(w, h, ny, nx) && field[ny][nx] == 1) {
                        count++;
                    }
                }
            }
            mines[y][x] = count;
        }
    }

    // UI 스타일로 출력
    printf("\n   ");               // 위쪽 열 번호 간격
    for (int x = 0; x < w; x++) {
        printf("%d ", x);
    }
    printf("\n  ");
    for (int x = 0; x < w * 2; x++) {
        printf("-");
    }
    printf("\n");

    for (int y = 0; y < h; y++) {
        printf("%d| ", y);         // 왼쪽 행 번호
        for (int x = 0; x < w; x++) {
            printf("%d ", mines[y][x]);
        }
        printf("\n");
    }

    return 0;
}