#include<iostream>
#include<math.h>
using namespace std;

//int main() {
//	// (x-a)^2 + (y-a)^2 <= r^2
//	double cx;
//	double cy;
//
//	double r;
//
//	double x;
//	double y;
//
//	std::cout << "원의 중심 입력 : ";
//	std::cin >> cx >> cy;
//
//	std::cout << "점의 좌표 입력 : ";
//	std::cin >> x >> y;
//
//	std::cout << "원의 반지름 입력 : ";
//	std::cin >> r;
//
//	if (pow((x - cx), double(2)) + pow((y - cy), double(2)) <= pow(r, double(2))) {
//		std::cout << "점" << " (" << x << ", " << y << ") " << "는 원 내부에 있다.";
//	}
//	else {
//		std::cout << "점" << x << ", " << y << "는 원 내부에 있지 않다.";
//	}
//
//	return 0;
//}

//int main() {
//	double x1, y1, x2, y2;
//	double x3, y3, x4, y4;
//	double rx, ry;
//	double det;
//
//	std::cout << "두 점 입력 : ";
//	std::cin >> x1 >> y1 >> x2 >> y2;
//
//	std::cout << "두 점 입력 : ";
//	std::cin >> x3 >> y3 >> x4 >> y4;
//
//	det = (y1 - y2)*(x4 - x3) + (x1 - x2)*(y3 - y4);
//
//	if (det == 0) {
//		std::cout << "두 직선은 평행하다.";
//		return 0;
//	}
//	else {
//		rx = pow(det, -1) * ((x4 - x3)*((y1 - y2)*x1 - (x1 - x2)*y1) + (x1 - x2) * ((y3 - y4)*x3 - (x3 - x4)*y3));
//		ry = pow(det, -1) * ((y4 - y3)*((y1 - y2)*x1 - (x1 - x2)*y1) + (y1 - y2) * ((y3 - y4)*x3 - (x3 - x4)*y3));
//		std::cout << "교차점은 (" << rx << ", " << ry << ") 이다.";
//	}
//
//	return 0;
//}

//void swapr(int &a, int &b) {
//	int temp;
//
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//void swapp(int *p, int *q) {
//	int temp;
//	temp = *p;
//	*p = *q;
//	*q = temp;
//}
//
//void swapv(int a, int b) {
//	int temp;
//
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//int main() {
//	int wallet1 = 3000;
//	int wallet2 = 3500;
//
//	cout << "지갑 1 = " << wallet1 << "원";
//	cout << ", 지갑2 = " << wallet2 << "원\n";
//
//	cout << "참조를 이용한 swap\n";
//	swapr(wallet1, wallet2);
//	cout << "지갑 1 = " << wallet1 << "원";
//	cout << ", 지갑2 = " << wallet2 << "원\n";
//
//	cout << "포인터를 이용한 swap\n";
//	swapp(&wallet1, &wallet2);
//	cout << "지갑 1 = " << wallet1 << "원";
//	cout << ", 지갑2 = " << wallet2 << "원\n";
//
//	cout << "갑을 이용한 swap\n";
//	swapv(wallet1, wallet2);
//	cout << "지갑 1 = " << wallet1 << "원";
//	cout << ", 지갑2 = " << wallet2 << "원\n";
//
//
//	return 0;
//}

//#include<string>
//
//string version1(const string & s1, const string & s2);
//const string & version2(string & s1, const string & s2);
//const string & version3(string & s1, const string & s2);
//
//int main() {
//	string input;
//	string copy;
//	string result;
//
//	cout << "문자열을 입려하시오 : ";
//	getline(cin, input);
//	copy = input;
//	cout << "입력한 문자열 : " << input << endl;
//	result = version1(input, "***");
//	cout << "바뀐 문자열 : " << result << endl;
//	cout << "원래 문자열 : " << input << endl;
//
//	result = version2(input, "###");
//	cout << "바뀐 문자열 : " << result << endl;
//	cout << "원래 문자열 : " << input << endl;
//
//	cout << "원래 문자열 재설정" << endl;
//	input = copy;
//	result = version3(input, "@@@");
//	cout << "바뀐 문자열 : " << result << endl;
//	cout << "원래 문자열 : " << input << endl;
//
//	return 0;
//}
//
//string version1(const string & s1, const string & s2) {
//	string temp;
//	temp = s2 + s1 + s2;
//	return temp;
//}
//
//const string & version2(string & s1, const string & s2) {
//	s1 = s2 + s1 + s2;
//	return s1;
//}
//
//const string & version3(string & s1, const string & s2) {
//	string temp;
//	temp = s2 + s1 + s2;
//	return temp;
//}

//const int ArSize = 80;
//
//char* left(const char* str, int n = 1);
//
//int main() {
//	char sample[ArSize];
//	cout << "문자열을 입력하세요 : \n";
//	cin.get(sample, ArSize);
//	char* ps = left(sample, 4);
//	cout << ps << endl;
//	delete[] ps;
//	ps = left(sample);
//	cout << ps << endl;
//	delete[] ps;
//	return 0;
//}
//
//char* left(const char* str, int n) {
//	if (n < 0) {
//		n = 0;
//	}
//	char *p = new char[n + 1];
//	int i;
//	for (i = 0; i < n && str[i]; i++) {
//		p[i] = str[i];
//	}
//	while (i <= n) {
//		p[i++] = '\0';
//	}
//	return p;
//}

////함수 오버로딩(Polymorphism)
//unsigned long left(unsigned long num, unsigned ct) {
//	unsigned digits = 1;
//	unsigned long n = num;
//	if (ct == 0 || num == 0) {
//		return 0;
//	}
//	while (n /= 10) {
//		digits++;
//	}
//	if (digits > ct) {
//		ct = digits - ct;
//		while (ct--) {
//			num /= 10;
//		}
//		return num;
//	}
//	else return num;
//}
//
//char* left(const char* str, int n) {
//	if (n < 0) {
//		n = 0;
//	}
//	char* p = new char[n + 1];
//	int i;
//	for (i = 0; i < n && str[i]; i++) {
//		p[i] = str[i];
//	}
//	while (i <= n) {
//		p[i++] = '\0';
//	}
//	return p;
//}
//
//int main() {
//	const char* trip = "Hawaii!!";
//	unsigned long n = 12345678;
//	int i;
//	char* temp;
//	for (i = 1; i < 10; i++) {
//		cout << left(n, i) << endl;
//		temp = left(trip, i);
//		cout << temp << endl;
//		delete[] temp;
//	}
//
//	return 0;
//}

////함수 템플릿
//template <typename T> void Swap(T &a, T& b) {
//	T temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//int main() {
//	int i = 10;
//	int j = 20;
//	cout << "i, j = " << i << ", " << j << ".\n";
//	cout << "컴파일러가 생성한 int형 교환기를 사용하면\n";
//	Swap(i, j);
//	cout << "이제 i, j = " << i << ", " << j << ".\n";
//
//	double x = 24.5;
//	double y = 81.7;
//	cout << "x, y = " << x << ", " << y << ".\n";
//	cout << "컴파일러가 생성한 double형 교환기를 사용하면\n";
//	Swap(x, y);
//	cout << "이제 x, y = " << x << ", " << y << ".\n";
//
//	return 0;
//}

//template <typename T>
//void Swap(T &a, T &b) {
//	T temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//struct job {
//	char name[40];
//	double salary;
//	int floor;
//};
//
////명시적 특수화
//template <> void Swap<job>(job &j1, job &j2) {
//	double t1;
//	int t2;
//	t1 = j1.salary;
//	j1.salary = j2.salary;
//	j2.salary = t1;
//	t2 = j1.floor;
//	j1.floor = j2.floor;
//	j2.floor = t2;
//}
//void Show(job &j) {
//	cout << j.name << ": (" << j.floor << "층에 거주)" << "$" << j.salary << endl;
//}
//
//int main() {
//	cout.precision(2);
//	cout.setf(ios::fixed, ios::floatfield);
//	int i = 10, j = 20;
//	cout << "i, j = " << i << ", " << j << ".\n";
//	cout << "컴파일러가 생성한 int형 교환기를 사용하면\n";
//	Swap(i, j);
//	cout << "이제 i, j = " << i << ", " << j << ".\n";
//
//	job sue = {"Susan Yaffee", 73000.60, 7};
//	job sidney = { "Sidney Taffee", 76000.60, 9 };
//	cout << "job 교환 전 : \n";
//	Show(sue);
//	Show(sidney);
//	Swap(sue, sidney);
//	cout << "job 교환 후 : \n";
//	Show(sue);
//	Show(sidney);
//
//	return 0;
//}

