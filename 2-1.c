#include <stdio.h>

int main(void) {
    //格納
    int numbers[64];
    for(int i=0; i<64; i++) {
        int input;
        scanf("%d", &input);
        numbers[i] = input;
        
        if(input == 0) {
            break;
        }
    }
    //線形探索
    int search;
    scanf("%d", &search);
    for(int i=0; i<64; i++) {
        if(numbers[i] == search) {
            printf("%d\n", i);
            return 0;
        }else if(numbers[i] == 0) {
            printf("not found\n");
            break;
        }
    }

    return 0;
}