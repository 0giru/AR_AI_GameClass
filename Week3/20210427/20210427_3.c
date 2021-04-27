#include<stdio.h>

//typedef struct student {
//	//member variable
//	int num;
//	double grade;
//}St;
//
//int main() {
//	St s1;
//
//	s1.num = 2;
//	s1.grade = 2.7;
//	printf("학번 : %d\n", s1.num);
//	printf("학점 : %.1lf\n", s1.grade);
//	printf("%d", sizeof(s1));
//	return 0;
//}

//struct student {
//	int id;
//	char name[20];
//	double grade;
//};
//
//int main() {
//	struct student s1 = { 315, "홍길동", 2.4 },
//		s2 = { 316, "이순신", 3.7 },
//		s3 = { 317, "세종대왕", 4.4 };
//
//	struct student max;
//
//	max = s1;
//	if (s2.grade > max.grade) max = s2;
//	if (s3.grade > max.grade) max = s3;
//
//	printf("학번 : %d\n", max.id);
//	printf("이름 : %s\n", max.name);
//	printf("학점 : %.1lf\n", max.grade);
//
//	return 0;
//}
//struct cracker {
//	int price;
//	int calories;
//};
//
//int main() {
//	struct cracker C1;
//
//	printf("바사삭의 가격과 열량을 입력하세요.\n");
//	scanf("%d %d", &C1.price, &C1.calories);
//
//	printf("바사삭의 가격 : %d\n", C1.price);
//	printf("바사삭의 칼로리 : %d\n", C1.calories);
//
//	return 0;
//}

//struct address {
//	char name[20];
//	int age;
//	char tel[20];
//	char addr[80];
//};
//
//int main() {
//	struct address list[5] = {
//		{"홍길동", 23, "111-1111", "울릉도 독도"},
//		{"김길동", 23, "111-1112", "울릉도 독동"},
//		{"고길동", 23, "111-1113", "울릉도 독독"},
//		{"둘길동", 23, "111-1114", "울릉도 독돈"},
//		{"도길동", 23, "111-1115", "울릉도 독돗"}
//	};
//
//	for (int i = 0; i < 5; i++) {
//		printf("%10s%5d%15s%20s\n",
//			list[i].name, list[i].age, list[i].tel, list[i].addr);
//	}
//	return 0;
//}

struct address {
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

void print_list(struct address* lp) {
	int i;
	for (i = 0; i < 5; i++) {
		printf("%10s%5d%15s%20s\n",
			(lp + i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
	}
}

int main() {
	struct address list[5] = {
		{"홍길동", 23, "111-1111", "울릉도 독도"},
		{"김길동", 24, "111-1112", "울릉도 독동"},
		{"고길동", 25, "111-1113", "울릉도 독독"},
		{"둘길동", 26, "111-1114", "울릉도 독돈"},
		{"도길동", 27, "111-1115", "울릉도 독돗"}
	};
	print_list(list);
	return 0;
}