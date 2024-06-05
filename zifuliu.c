#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // 用于 sleep 函数

#define SCREEN_WIDTH 180
#define SCREEN_HEIGHT 50
#define MAX_RAIN_LENGTH 20

void clearScreen() {
    system("clear"); // 清屏命令
}

int main() {
    int i, j;
    char screen[SCREEN_HEIGHT][SCREEN_WIDTH];
    int drops[SCREEN_WIDTH] = {0}; // 存储每一列雨滴的位置

    // 初始化屏幕
    for (i = 0; i < SCREEN_HEIGHT; i++) {
        for (j = 0; j < SCREEN_WIDTH; j++) {
            screen[i][j] = ' ';
        }
    }

    // 主循环
    while (1) {
        // 清空屏幕
        clearScreen();

        // 更新雨滴位置
        for (i = 0; i < SCREEN_WIDTH; i++) {
            if (drops[i] == 0 || drops[i] >= SCREEN_HEIGHT - 1) {
                drops[i] = rand() % SCREEN_HEIGHT; // 重新生成雨滴位置
            } else {
                drops[i]++; // 下落一格
            }
        }

        // 在屏幕上绘制雨滴
        for (i = 0; i < SCREEN_WIDTH; i++) {
            for (j = 0; j < MAX_RAIN_LENGTH; j++) {
                screen[(drops[i] + j) % SCREEN_HEIGHT][i] = j + '0';
            }
        }

        // 输出屏幕内容
        for (i = 0; i < SCREEN_HEIGHT; i++) {
            for (j = 0; j < SCREEN_WIDTH; j++) {
                printf("\033[0;34m");
                printf("%c", screen[i][j]);//输出绿色字幕
                printf("\033[0;32m");
                printf("%c", screen[i][j]);
            }
            printf("\n");
        }

        // 延时一段时间，控制刷新速度
        usleep(100000); // 100000 微秒 = 0.1 秒
    }

    return 0;
}
