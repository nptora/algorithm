#include <stdio.h>

int main(void) {
    //格納
    int numbers[64], cnt;
    for(cnt = 0; cnt < 64; cnt++) {
        int input;
        scanf("%d", &input);
        numbers[cnt] = input;
        
        if(input == 0) {
            break;
        }
    }

    //昇順並び替え
    for(int i=0; i<cnt-1; i++){
        for(int j=i+1; j<cnt; j++){
            if(numbers[i] > numbers[j]){
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    printf("ソート後配列: ");
    for(int i=0; i<cnt; i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");

    //二分探索
    int search;
    scanf("%d", &search);

    if(numbers[cnt/2] > search){
        for(int i=0; i<cnt/2; i++){
            if(numbers[i] == search){
                printf("%d\n", i);
                return 0;
            }else if(numbers[i] > search || numbers[i] == 0){
                printf("not found\n");
                break;
            }
        }
    }else {
        for(int i=cnt/2; i<cnt; i++){
            if(numbers[i] == search){
                printf("%d\n", i);
                return 0;
            }else if(numbers[i] > search || numbers[i] == 0){
                printf("not found\n");
                break;
            }
        }
    }

    return 0;
}