#include<iostream>
#include<string>

//const std::string words[3] = { "dongwoo", "woodong", "jewoos" };
//
//void printWord(int* ptr, int len, std::string str) {
//	for (int i = 0; i < len; i++) {
//		if (*(ptr + i) == 0) {
//			std::cout << '*';
//		}
//		else {
//			std::cout << str[i];
//		}
//	}
//}
//
//int getSum(int* ptr, int len) {
//	int result = 0;
//	for (int i = 0; i < len; i++) {
//		result += *(ptr + i);
//	}
//	if (result == len) {
//		return 1;
//	}
//	return 0;
//}
//
//int main() {
//	int count1 = 0; //틀린 횟수를 체크
//	int count2 = 0; //전체 입력 횟수
//	int flag1 = 0; //단어 완성 여부 체크
//	int flag2 = 0; //실수 여부 체크
//	int index = 0;
//	char select;
//	char temp;
//
//	while (1) {
//		const std::string str = words[index];
//
//		if (flag1 == 1) {
//			std::cout << "\n총 " << count1 << "번 실패, " << count2 << "번 만에 정답!";
//			std::cout << "\n다른 단어로 진행하시겠습니까? (Y / N) : ";
//			std::cin >> select;
//			std::cout << std::endl;
//			if (select == 'y' || select == 'Y') {
//				index += 1;
//				if (index >= 3) {
//					std::cout << "\n단어 고갈!";
//					exit(0);
//				}
//				else {
//					count1 = 0;
//					count2 = 0;
//					flag1 = 0;
//					flag2 = 0;
//					continue;
//				}
//			}
//			else if (select == 'n' || select == 'N') {
//				exit(0);
//			}
//		}
//		else {
//			int len = str.size();
//			int *ptr = new int[len] {0,};
//
//			while (1) {
//				flag2 = 0;
//				if (getSum(ptr, len) == 1) {
//					printWord(ptr, len, str);
//					flag1 = 1;
//					delete[] ptr;
//					break;
//				}
//
//				printWord(ptr, len, str);
//				std::cout << "\n단어를 입력하세요. : ";
//				std::cin >> temp;
//				count2 += 1;
//				for (int i = 0; i < len; i++) {
//					if (str[i] == temp) {
//						*(ptr + i) = 1;
//						flag2 += 1;
//					}
//				}
//				if (flag2 == 0) {
//					count1 += 1;
//				}
//			}
//		}
//
//	}
//
//	return 0;
//}

int main() {
	int n;
	int r;
	int c;
	int count = 0;

	while (1) {
		std::cout << "n 입력 : ";
		std::cin >> n;

		if (n % 2 == 1) {
			std::cout << "r 입력 : ";
			std::cin >> r;
			std::cout << "c 입력 : ";
			std::cin >> c;

			int temp = r + c - 2;
			if (temp <= 5) {
				int sum = (1 + temp) * temp / 2;
				if ((r + c) % 2 == 1) {
					std::cout << sum + r;
				}
				else {
					std::cout << sum + c;
				}
			}
			else {
				int sum = (1 + n) * n / 2 + (((n - 1) + (2 * n + 2 - r - c)) * (n - 1 - (2 * n + 2 - r - c) + 1) / 2);
				
				if ((r + c) % 2 == 1) {
					std::cout << sum;
				}
				else {
					std::cout << sum;
				}
			}

		}
	}


	return 0;
}