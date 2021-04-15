#include <stdio.h>

int main()
{
    int row; //구구단의 수
    int col; //열의 수
    int unit; //col열 까지 채울 수 있는 row수
    int rest; //col열을 채우지 못하는 마지막 열 
    int num_row; //총 row의 수

    printf("구구단의 수와 열 입력\n");
    scanf("%d%d", &row, &col);

    unit = (row -1) / col;
    rest = (row -1) % col;

    if(rest == 0){
        num_row = unit;
    }
    else{
        num_row = unit +1;
    }

    for(int i = 0; i < num_row; i++){
        int iter_row = col * i +2;

        for(int w = 1; w <= 9; w++){
            for(int j = 0; j < col; j++){
                int iter_col = iter_row + j;

                if(iter_col > row){
                    break;
                }
                printf("%4d * %d = %4d ", iter_col, w, w * iter_col);
            }
            printf("\n");
        }
        for(int w = 0; w < col; w++){
            printf("=================");
        }
        printf("\n");
    }
    return 0;
}
