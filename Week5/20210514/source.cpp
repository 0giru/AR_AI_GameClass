#include<iostream>
using namespace std;

//int main() {
//	auto answer = 0;
//	float road;
//	float acc;
//	float v;
//
//	cout << "�̷� �ӷ��� �Է��Ͻÿ� : ";
//	cin >> v;
//	cout << "���ӵ��� �Է��Ͻÿ� : ";
//	cin >> acc;
//
//	road = v * v / 2 / acc;
//
//	cout << "�̷��ӷ��� " << v << "m/s �Դϴ�" << endl;
//	cout << "���ӵ��� " << acc << "m/s^2 �Դϴ�" << endl;
//	cout << "�ּ� Ȱ�� �Ÿ��� " << road << "m �Դϴ�.";
//
//	return 0;
//}

//#include <math.h>
//
//int main() {
//	float x1;
//	float x2;
//	float y1;
//	float y2;
//
//	float result;
//
//	cout << "x1, y1 ��ǥ�� �Է��Ͻÿ� : " << endl;
//	cin >> x1 >> y1;
//	cout << "x2, y2 ��ǥ�� �Է��Ͻÿ� : " << endl;
//	cin >> x2 >> y2;
//
//	cout << "�� �� ������ �Ÿ��� " << pow(pow((x1 - x2), 2) + pow((y1 - y2), 2), 0.5) << "�Դϴ�";
//
//	return 0;
//}

//#include<fstream>
//
//int main() {
//	char automobile[50];
//	int year;
//	double a_price;
//	double d_price;
//
//	ofstream outFile;
//	outFile.open("carinfo.txt");
//
//	cout << "����Ŀ�� ���� �Է� : ";
//	cin.getline(automobile, 50);
//	cout << "���� �Է� : ";
//	cin >> year;
//	cout << "���� ���� �Է� : ";
//	cin >> a_price;
//	d_price = 0.913 * a_price;
//
//	outFile << fixed;
//	outFile.precision(2);
//	outFile.setf(ios_base::showpoint);
//	outFile << "����Ŀ�� ���� : " << automobile << endl;
//	outFile << "���� : " << year << endl;
//	outFile << "���� ���� $" << a_price << endl;
//	outFile << "���� ���� $" << d_price << endl;
//
//	outFile.close();
//
//	return 0;
//}

//#include<fstream>
//#include<cstdlib>
//const int SIZE = 60;
//
//int main() {
//	char filename[SIZE];
//	ifstream inFile;
//	cout << "������ ������ �̸��� �Է��Ͻÿ� : ";
//	cin.getline(filename, SIZE);
//	inFile.open(filename);
//	if (!inFile.is_open()) {
//		cout << filename << "������ �� �� �����ϴ�" << endl;
//		cout << "���α׷��� �����մϴ�.\n";
//		exit(EXIT_FAILURE);
//	}
//	double value;
//	double sum = 0.0;
//	int count = 0;
//
//	inFile >> value;
//	while (inFile.good()) {
//		++count;
//		sum += value;
//		inFile >> value;
//	}
//	if (inFile.eof()) {
//		cout << "������ ���� �����߽��ϴ�.\n";
//	}
//	else if (inFile.fail()) {
//		cout << "������ ����ġ�� �Է��� ����Ǿ����ϴ�.\n";
//	}
//	else {
//		cout << "�� �� ���� ������ �Է��� ����Ǿ����ϴ�.\n";
//	}
//	if (count == 0) {
//		cout << "�����Ͱ� �����ϴ�.\n";
//	}
//	else {
//		cout << "���� �׸��� ���� : " << count << endl;
//		cout << "�հ� : " << sum << endl;
//		cout << "��� : " << sum / count << endl;
//	}
//	inFile.close();
//	return 0;
//}
//
//#include<fstream>
//#define strsize 20
//
//struct bop {
//	char fullname[strsize]; //�Ǹ�
//	char title[strsize]; //����
//	char bopname[strsize]; //bop ���̵�
//	int preference; //0 fullname, 1 title, 2 bopname
//};
//
//void enroll(bop *arr, int memberNumber) {
//	//ȸ�� ���
//	bop member;
//
//	cout << "�Ǹ��� �Է��ϼ��� : ";
//	cin.getline(member.fullname, strsize);
//	cout << "������ �Է��ϼ��� : ";
//	cin.getline(member.title, strsize);
//	cout << "bop ���̵� �Է��ϼ��� : ";
//	cin.getline(member.bopname, strsize);
//	cout << "preference�� �Է��ϼ��� : ";
//	cin >> member.preference;
//
//	arr[memberNumber] = member;
//}
//
//int main() {
//	int func;
//	char subfunc;
//	int mNum = 0;
//	bop arr[20] = { {"", "", "", 0} , };
//
//	while (1) {
//		cout << "\n����� �����ϼ���.\n��� ��� : 1\n��� ��ȸ : 2\n\n";
//		cin >> func;
//		cin.get();
//	
//		if (func == 1) {
//			enroll(arr, mNum);
//			mNum += 1;
//		}
//		else if (func == 2) {
//			cout << "a. �Ǹ����� ����\nb. �������� ����\nc. BOP ���̵�� ����\nd. ȸ���� ������ ������ ����\nq. ����\n";
//			cin >> subfunc;
//			if (subfunc == 'a') {
//				for (int i = 0; i < mNum; i++) {
//					cout << arr[i].fullname << endl;
//				}
//			}
//			else if (subfunc == 'b') {
//				for (int i = 0; i < mNum; i++) {
//					cout << arr[i].title << endl;
//				}
//			}
//			else if (subfunc == 'c') {
//				for (int i = 0; i < mNum; i++) {
//					cout << arr[i].bopname << endl;
//				}
//			}
//			else if (subfunc == 'd') {
//				for (int i = 0; i < mNum; i++) {
//					if (arr[i].preference == 0) {
//						cout << arr[i].fullname << endl;
//					}
//					else if (arr[i].preference == 1) {
//						cout << arr[i].title << endl;
//					}
//					else if (arr[i].preference == 2) {
//						cout << arr[i].bopname << endl;
//					}
//				}
//			}
//			else if (subfunc == 'q') {
//				cout << "���α׷��� �����մϴ�.";
//				exit(0);
//			}
//		}
//	}
//
//	return 0;
//}

//const int ArSize = 8;
//
//int sum_arr(const int *begin, const int *end);
//
//int main() {
//	int cookies[ArSize] = { 1, 2, 4, 8, 16, 32, 64, 128 };
//	int sum = sum_arr(cookies, cookies + ArSize);
//
//	cout << "���� ���� �� �հ�" << sum << endl;
//	sum = sum_arr(cookies, cookies + 3);
//	cout << "ó�� �� ����� ���� " << sum << "���� �Ծ����ϴ�.\n";
//	sum = sum_arr(cookies + 4, cookies + 8);
//	cout << "������ �� ����� ���� " << sum << "���� �Ծ����ϴ�.\n";
//
//	return 0;
//}
//int sum_arr(const int * begin, const int *end) {
//	const int *pt;
//	int total = 0;
//
//	for (pt = begin; pt != end; pt++) {
//		total += *pt;
//	}
//	return total;
//}

//unsigned int c_in_str(char *str, char ch);
//
//int main() {
//	char mmm[15] = "minimum";
//
//	const char *wail = "ululate";
//
//	unsigned int ms = c_in_str(mmm, 'm');
//	unsigned int us = c_in_str(wail, 'u');
//	cout << mmm << "���� m�� " << ms << "�� ����ֽ��ϴ�.\n";
//	cout << wail << "���� u�� " << us << "�� ����ֽ��ϴ�.\n";
//
//	return 0;
//}
//
//unsigned int c_in_str(char *str, char ch) {
//	int count = 0;
//	while (*str) {
//		if (*str == ch) {
//			count++;
//		}
//		str++;
//	}
//	return count;
//}

//void countdown(int n);
//
//int main() {
//	countdown(4);
//	return 0;
//}
//
//void countdown(int n) {
//	cout << "ī��Ʈ �ٿ� ... " << n << endl;
//	if (n > 0) {
//		countdown(n - 1);
//	}
//	cout << n << " : Kaboom!\n";
//}

//#include<math.h>
//
//double length(double x1, double x2, double y1, double y2) {
//	double result;
//
//	result = pow(pow((x1 - x2), 2) + pow((y1 - y2), 2), 0.5);
//
//	return result;
//}
//
//int main() {
//	double side1 = 0;
//	double side2 = 0;
//	double side3 = 0;
//
//	double x1, y1;
//	double x2, y2;
//	double x3, y3;
//
//	double Heron = 0;
//
//	cin >> x1 >> y1;
//	cin >> x2 >> y2;
//	cin >> x3 >> y3;
//
//	side1 = length(x1, y1, x2 ,y2);
//	side2 = length(x2, y2, x3 ,y3);
//	side3 = length(x3, y3, x1, y1);
//
//	double S = (side1 + side2 + side3) / (double)2;
//
//	Heron = pow(S * (S - side1) * (S - side2) * (S - side3), 0.5);
//	
//	cout << Heron;
//	return 0;
//}

//const int Len = 66;
//const int Divs = 6;
//
//void subdivids(char ar[], int low, int high, int level);
//
//int main() {
//	char ruler[Len];
//	int i;
//	for (i = 1; i < Len - 2; i++) {
//		ruler[i] = ' ';
//	}
//	ruler[Len - 1] = '\0';
//	int max = Len - 2;
//	int min = 0;
//	ruler[min] = ruler[max] = '|';
//	cout << ruler << endl;
//	for (i = 1; i <= Divs; i++) {
//		subdivids(ruler, min, max, i);
//		cout << ruler << endl;
//		for (int j = 1; j < Len - 2; j++) {
//			ruler[j] = ' ';
//		}
//	}
//	return 0;
//}
//
//void subdivids(char ar[], int low, int high, int level) {
//	if (level == 0) {
//		return;
//	}
//	int mid = (high + low) / 2;
//	ar[mid] = '|';
//	subdivids(ar, low, mid, level - 1);
//	subdivids(ar, mid, high, level - 1);
//}

//double gildong(int);
//double moonsoo(int);
//
//void estimate(int lines, double(*pf)(int));
//
//int main() {
//	int code;
//
//	cout << "�ʿ��� �ڵ��� �� �� �� �Է��ϼ��� : ";
//	cin >> code;
//	cout << "ȫ�浿�� ���� �ð� : " << endl;
//	estimate(code, gildong);
//	cout << "�ڹ����� ���� �ð� : " << endl;
//	estimate(code, moonsoo);
//	return 0;
//}
//
//double gildong(int lns) {
//	return 0.05 * lns;
//}
//
//double moonsoo(int lns) {
//	return 0.03 * lns + 0.0004 * lns * lns;
//}
//
//void estimate(int lines, double(*pf)(int)) {
//	cout << lines << "���� �ۼ��ϴ� �� ";
//	cout << (*pf)(lines) << "�ð��� �ɸ��ϴ�" << endl;
//}

//double add(double x, double y) {
//	return x + y;
//}
//double sub(double x, double y) {
//	return x - y;
//}
//double mul(double x, double y) {
//	return x - y;
//}
//
//double calculate(double argv1, double argv2, double(*pf)(double, double)) {
//	return (*pf)(argv1, argv2);
//}
//
//int main() {
//	
//
//	return 0;
//}