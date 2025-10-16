#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 7

// 範囲を決める処理
int get_range_start(int start) {
    start++;
    return start;
}

// 範囲内の最小値を探索する処理
int find_min_index(int data[], int start, int size) {
    int min_idx = start;
    for (int i = start + 1; i < size; i++) {
        if (data[i] < data[min_idx]) {
            min_idx = i;
        }
    }
    return min_idx;
}

// 値を交換する処理
void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void)
{
    srand(time(NULL));
    int data[NUM];
    for (int i = 0; i < NUM; i++)
    {
        int r = rand() % 100 + 1;
        data[i] = r;
    }

    // 選択ソート
    int start = 0;

    while(start < NUM - 1) {
        int min_idx = find_min_index(data, start, NUM);
        if(min_idx != data[start]) {
            swap(&data[start], &data[min_idx]);
        }
        start = get_range_start(start);
    }

    // データの表示
    for (int i = 0; i < NUM; i++)
    {
        printf("%d: %d\n", i, data[i]);
    }
    return 0;
}