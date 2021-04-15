#include<stdio.h>

int main() {
    int life = 80;
    int N, M;
    int life_year, life_day, life_hour, life_min;
    int waste_day, waste_hour, waste_min;
    const int waste = 20;
    const int days_of_year = 365;
    const int hours_of_day = 24;
    const int min_of_hour = 60;
    const int life_rest = 20 * days_of_year * hours_of_day * min_of_hour;

    int wasteSum = 0; //낭비한 수명의 합

    scanf("%d%d", &N, &M);

    wasteSum = N * days_of_year * M * waste;
    life = life * days_of_year * hours_of_day * min_of_hour;


    life -= wasteSum;
    life += life_rest;

    life_year = life / (min_of_hour * hours_of_day * days_of_year);
    life_day = (life % (min_of_hour * hours_of_day * days_of_year)) / (min_of_hour * hours_of_day);
    life_hour = ((life % (min_of_hour * hours_of_day * days_of_year)) % (min_of_hour * hours_of_day)) / min_of_hour;
    life_min = ((life % (min_of_hour * hours_of_day * days_of_year)) % (min_of_hour * hours_of_day)) % min_of_hour;

    waste_day = wasteSum / (min_of_hour * hours_of_day);
    waste_hour = (wasteSum % (min_of_hour * hours_of_day)) / hours_of_day;
    waste_min = (wasteSum % (min_of_hour * hours_of_day)) % hours_of_day;

    printf("줄어든 시간 : %02d일 %02d시 %02d분\n", waste_day, waste_hour, waste_min);
    printf("기대 수명 : %02d살 %02d일 %02d시 %02d분\n", life_year, life_day, life_hour, life_min);

    return 0;
}
