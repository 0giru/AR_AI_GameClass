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
//	std::cout << "���� �߽� �Է� : ";
//	std::cin >> cx >> cy;
//
//	std::cout << "���� ��ǥ �Է� : ";
//	std::cin >> x >> y;
//
//	std::cout << "���� ������ �Է� : ";
//	std::cin >> r;
//
//	if (pow((x - cx), double(2)) + pow((y - cy), double(2)) <= pow(r, double(2))) {
//		std::cout << "��" << " (" << x << ", " << y << ") " << "�� �� ���ο� �ִ�.";
//	}
//	else {
//		std::cout << "��" << x << ", " << y << "�� �� ���ο� ���� �ʴ�.";
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
//	std::cout << "�� �� �Է� : ";
//	std::cin >> x1 >> y1 >> x2 >> y2;
//
//	std::cout << "�� �� �Է� : ";
//	std::cin >> x3 >> y3 >> x4 >> y4;
//
//	det = (y1 - y2)*(x4 - x3) + (x1 - x2)*(y3 - y4);
//
//	if (det == 0) {
//		std::cout << "�� ������ �����ϴ�.";
//		return 0;
//	}
//	else {
//		rx = pow(det, -1) * ((x4 - x3)*((y1 - y2)*x1 - (x1 - x2)*y1) + (x1 - x2) * ((y3 - y4)*x3 - (x3 - x4)*y3));
//		ry = pow(det, -1) * ((y4 - y3)*((y1 - y2)*x1 - (x1 - x2)*y1) + (y1 - y2) * ((y3 - y4)*x3 - (x3 - x4)*y3));
//		std::cout << "�������� (" << rx << ", " << ry << ") �̴�.";
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
//	cout << "���� 1 = " << wallet1 << "��";
//	cout << ", ����2 = " << wallet2 << "��\n";
//
//	cout << "������ �̿��� swap\n";
//	swapr(wallet1, wallet2);
//	cout << "���� 1 = " << wallet1 << "��";
//	cout << ", ����2 = " << wallet2 << "��\n";
//
//	cout << "�����͸� �̿��� swap\n";
//	swapp(&wallet1, &wallet2);
//	cout << "���� 1 = " << wallet1 << "��";
//	cout << ", ����2 = " << wallet2 << "��\n";
//
//	cout << "���� �̿��� swap\n";
//	swapv(wallet1, wallet2);
//	cout << "���� 1 = " << wallet1 << "��";
//	cout << ", ����2 = " << wallet2 << "��\n";
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
//	cout << "���ڿ��� �Է��Ͻÿ� : ";
//	getline(cin, input);
//	copy = input;
//	cout << "�Է��� ���ڿ� : " << input << endl;
//	result = version1(input, "***");
//	cout << "�ٲ� ���ڿ� : " << result << endl;
//	cout << "���� ���ڿ� : " << input << endl;
//
//	result = version2(input, "###");
//	cout << "�ٲ� ���ڿ� : " << result << endl;
//	cout << "���� ���ڿ� : " << input << endl;
//
//	cout << "���� ���ڿ� �缳��" << endl;
//	input = copy;
//	result = version3(input, "@@@");
//	cout << "�ٲ� ���ڿ� : " << result << endl;
//	cout << "���� ���ڿ� : " << input << endl;
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
//	cout << "���ڿ��� �Է��ϼ��� : \n";
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

////�Լ� �����ε�(Polymorphism)
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

////�Լ� ���ø�
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
//	cout << "�����Ϸ��� ������ int�� ��ȯ�⸦ ����ϸ�\n";
//	Swap(i, j);
//	cout << "���� i, j = " << i << ", " << j << ".\n";
//
//	double x = 24.5;
//	double y = 81.7;
//	cout << "x, y = " << x << ", " << y << ".\n";
//	cout << "�����Ϸ��� ������ double�� ��ȯ�⸦ ����ϸ�\n";
//	Swap(x, y);
//	cout << "���� x, y = " << x << ", " << y << ".\n";
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
////����� Ư��ȭ
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
//	cout << j.name << ": (" << j.floor << "���� ����)" << "$" << j.salary << endl;
//}
//
//int main() {
//	cout.precision(2);
//	cout.setf(ios::fixed, ios::floatfield);
//	int i = 10, j = 20;
//	cout << "i, j = " << i << ", " << j << ".\n";
//	cout << "�����Ϸ��� ������ int�� ��ȯ�⸦ ����ϸ�\n";
//	Swap(i, j);
//	cout << "���� i, j = " << i << ", " << j << ".\n";
//
//	job sue = {"Susan Yaffee", 73000.60, 7};
//	job sidney = { "Sidney Taffee", 76000.60, 9 };
//	cout << "job ��ȯ �� : \n";
//	Show(sue);
//	Show(sidney);
//	Swap(sue, sidney);
//	cout << "job ��ȯ �� : \n";
//	Show(sue);
//	Show(sidney);
//
//	return 0;
//}

