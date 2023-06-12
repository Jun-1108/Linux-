#include <stdio.h>

int main() {
    printf("\033[2J"); // 화면을 지우는 ANSI 이스케이프 시퀀스
    printf("\033[H");  // 커서를 화면 왼쪽 위로 이동하는 ANSI 이스케이프 시퀀스

    return 0;
}

