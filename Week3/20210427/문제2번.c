#include<stdio.h>
#include<string.h>
#include<stdlib.h>

float Calc_Angle(int hour, int min, int sec);

int main() {
	int Hour = 0;
	int Min = 0;
	int Sec = 0;

	printf("시, 분, 초 입력 : ");
	scanf("%d %d %d", &Hour, &Min, &Sec);
	if (Hour > 12) {
		Hour -= 12;
	}

	printf("%.1lf", Calc_Angle(Hour, Min, Sec));

	return 0;
}

float Calc_Angle(int hour, int min, int sec) {
	float shour = 0;
	float smin = 0;

	shour = 30 * hour + min * 0.5;
	smin = 30 * min / 5 + 0.1 * sec;

	if (shour > smin) {
		return shour - smin;
	}
	else {
		return smin - shour;
	}
}