#include<iostream>
//using namespace std;
//
////p.557-5
//template <typename T>
//T max5(T arr[5]) {
//	T max = arr[0];
//	for (int i = 1; i < 5; i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//	return max;
//}
//
////p.557-6
//template <typename T>
//T maxn(T arr[5], int n) {
//	T max = arr[0];
//	for (int i = 1; i < n; i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//	return max;
//}
//
//template <> char* maxn(char** arr, int ptrNum) {
//	int max = 0;
//	int result = ptrNum;
//	for (int i = 0; i < ptrNum; i++) {
//		int count = 0;
//		while (1) {
//			if (*(*(arr + i) + count) == '\0') {
//				if (count > max) {
//					max = count;
//					result = i;
//				}
//				break;
//			}
//			count += 1;
//		}
//	}
//	return *(arr + result);
//}
//
//int main() {
//	//p.557-5
//	int arr1[5] = {1, 2, 3, 4, 5};
//	double arr2[5] = { 0.1, 2.1, 3.4, 5.6, 7.7 };
//
//	//p.557-6
//	int arr3[6] = { 1, 2, 3, 4, 5, 6};
//	double arr4[4] = { 0.1, 2.1, 3.4, 5.6};
//	const char* arr5[5] = {"good", "good2", "good33", "good444", "good45"};
//	const char* arr6[5] = { "good", "goood1", "goood2", "goood3", "goood4" };
//
//	const char* temp1 = NULL;
//	const char* temp2 = NULL;
//
//	cout << max5(arr1) << endl;
//	cout << max5(arr2) << endl << endl;
//	cout << maxn(arr3, 6) << endl;
//	cout << maxn(arr4, 4) << endl << endl;
//
//	temp1 = maxn(arr5, 5);
//	temp2 = maxn(arr6, 5);
//
//	cout << &temp1 << " " << temp1 << endl;
//	cout << &temp2 << " " << temp2;
//
//	return 0;
//}

//#include "namesp.h"
//
//namespace pers {
//	using std::cout;
//	using std::cin;
//
//	void getPerson(Person &rp) {
//		cout << "이름을 입력하시오 : ";
//		cin >> rp.fname;
//		cout << "성씨를 입력하시오 : ";
//		cin >> rp.lname;
//	}
//
//	void showPerson(const Person &rp) {
//		std::cout << rp.lname << ", " << rp.fname;
//	}
//}
//
//namespace debts {
//	void getDebt(Debt & rd) {
//		getPerson(rd.name);
//		std::cout << "부채를 입력하십시오 : ";
//		std::cin >> rd.amount;
//	}
//	void showDebt(const Debt & rd) {
//		pers::showPerson(rd.name);
//		std::cout << ": $" << rd.amount << std::endl;
//	}
//	double sumDebts(const Debt ar[], int n) {
//		double total = 0;
//		for (int i = 0; i < n; i++) {
//			total += ar[i].amount;
//		}
//		return total;
//	}
//}

//#include<cstdlib>
//#include<ctime>
//
//int main() {
//
//	double H = 0;
//	double T = 0;
//
//	srand((unsigned int)time(NULL));
//	double prob;
//	
//	for (int i = 0; i < 100; i++) {
//		prob = rand();
//		if (prob >= 16384) {
//			H += 1;
//		}
//		else {
//			T += 1;
//		}
//	}
//	std::cout << "100번 토스 앞면 : " << H / 100 * 100 << "% " << " 뒷면 : " << T / 100 * 100  << "%" << std::endl;
//	
//	H = 0; T = 0;
//	for (int i = 0; i < 1000; i++) {
//		prob = rand();
//		if (prob >= 16384) {
//			H += 1;
//		}
//		else {
//			T += 1;
//		}
//	}
//	std::cout << "1000번 토스 앞면 : " << H / 1000 * 100 << "% " << " 뒷면 : " << T / 1000 * 100 << "%" << std::endl;
//
//	H = 0; T = 0;
//	for (int i = 0; i < 10000; i++) {
//		prob = rand();
//		if (prob >= 16384) {
//			H += 1;
//		}
//		else {
//			T += 1;
//		}
//	}
//	std::cout << "10000번 토스 앞면 : " << H / 10000 * 100 << "% " << " 뒷면 : " << T / 10000 * 100 << "%" << std::endl;
//
//	H = 0; T = 0;
//	for (int i = 0; i < 100000; i++) {
//		prob = rand();
//		if (prob >= 16384) {
//			H += 1;
//		}
//		else {
//			T += 1;
//		}
//	}
//	std::cout << "100000번 토스 앞면 : " << H / 100000 * 100 << "% "  << " 뒷면 : " << T / 100000 * 100 << "%" << std::endl;
//
//	H = 0; T = 0;
//	for (int i = 0; i < 1000000; i++) {
//		prob = rand();
//		if (prob >= 16384) {
//			H += 1;
//		}
//		else {
//			T += 1;
//		}
//	}
//	std::cout << "1000000번 토스 앞면 : " << H / 1000000 * 100 << "% " << " 뒷면 : " << T / 1000000 * 100 << "%" << std::endl;
//
//	return 0;
//}

#include<fstream>
#include<string>
#include<stdlib.h>

int main() {

	FILE* fin1;
	FILE* fin2;

	fin1 = fopen("item.txt", "r+");
	fin2 = fopen("prob.txt", "r");

	char buf1[10];
	char buf2[10];
	int temp;

	//아이템 개수 구하기
	int count = 0;
	while (fgets(buf1, sizeof(buf1), fin1) != NULL) {
		count += 1;
	}
	fseek(fin1, 0, SEEK_SET);
	
	double* prob = new double[count];
	int* item = new int[count];

	for (int i = 0; i < count; i++) {
		fgets(buf1, sizeof(buf1), fin1);
		temp = atoi(buf1);
		*(item + i) = temp;
	}

	temp = 0;
	for (int i = 0; i < count; i++) {
		fgets(buf2, sizeof(buf2), fin2);
		temp += atoi(buf2);
		*(prob + i) = temp;
	}

	int num;
	std::cout << "실행할 횟수 입력 : ";
	std::cin >> num;

	for (int i = 0; i < num; i++) {
		int temp = (i % 100) + 1;
		for (int j = 0; j < count; j++) {
			if (temp <= prob[j] && temp > prob[j - 1]) {
				item[j] += 1;
			}
		}
	}
		
	for (int i = 0; i < count; i++) {
		scanf()
	}

	//for (int i = 0; i < count; i++) {
	//	std::cout << item[i] << std::endl;
	//}

	return 0;
}