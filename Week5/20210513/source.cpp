#include<iostream>
using namespace std;

//int main() {
//	double * p3 = new double[3];
//
//	p3[0] = 0.2;
//	p3[1] = 0.5;
//	p3[2] = 0.8;
//
//	cout << p3[0] << endl;
//	cout << p3[1] << endl;
//	cout << p3[2] << endl;
//
//	p3 += 1;
//
//	cout << p3[0] << endl;
//	cout << p3[1] << endl;
//	cout << p3[2] << endl;
//
//	delete[] p3;
//
//	return 0;
//}

//#include<vector>
//#include<array>
//
//int main() {
//	double a1[4] = { 1.2, 2.4, 3.6, 4.8 };
//	vector<double> a2(4);
//
//	a2[0] = 1.0 / 3.0;
//	a2[1] = 1.0 / 5.0;
//	a2[2] = 1.0 / 7.0;
//	a2[3] = 1.0 / 9.0;
//
//	array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
//	array<double, 4> a4;
//
//	a4 = a3;
//
//	cout << "a1[2] : " << a1[2] << " at " << &a1[2] << endl;
//	cout << "a2[2] : " << a2[2] << " at " << &a2[2] << endl;
//	cout << "a3[2] : " << a3[2] << " at " << &a3[2] << endl;
//	cout << "a4[2] : " << a4[2] << " at " << &a4[2] << endl;
//}

#include <string>

////p.231-2
//int main() {
//	using namespace std;
//
//	string name;
//	string dessert;
//
//	cout << "�̸��� �Է��ϼ��� : \n";
//	//cin >> name;
//	getline(cin, name);
//	cout << "����Ʈ�� �Է��ϼ��� : \n";
//	//cin >> dessert;
//	getline(cin, dessert);
//	cout << "���ִ� " << dessert;
//	cout << "����Ʈ�� �غ��ϰڽ��ϴ�. " << name << " ��";
//
//	return 0;
//}

//#include <string>
//
////p.232-5, 6, 9
//struct Candybar {
//	string name;
//	float weight;
//	int calories;
//};
//
//int main() {
//	//5��
//	Candybar snack = { "Mocha Munch", 2.3, 350 };
//	std::cout << snack.name << " " << snack.weight << " " << snack.calories << endl;
//	
//	//6��
//	Candybar arr[3];
//	arr[0] = { "good candy1", 2.4, 360 };
//	arr[1] = { "good candy2", 2.5, 370 };
//	arr[2] = { "good candy3", 2.6, 380 };
//
//	std::cout << arr[0].name << " " << arr[0].weight << " " << arr[0].calories << endl;
//	std::cout << arr[1].name << " " << arr[1].weight << " " << arr[1].calories << endl;
//	std::cout << arr[2].name << " " << arr[2].weight << " " << arr[2].calories << endl;
//
//	//9��
//	Candybar *arr2 = new Candybar[3];
//
//	*arr2 = {"bad candy1", 3.4, 460};
//	*(arr2 + 1) = { "bad candy2", 3.5, 470 };
//	*(arr2 + 2) = { "bad candy3", 3.6, 480 };
//
//
//	std::cout << arr2[0].name << " " << arr2[0].weight << " " << arr2[0].calories << endl;
//	std::cout << arr2[1].name << " " << arr2[1].weight << " " << arr2[1].calories << endl;
//	std::cout << arr2[2].name << " " << arr2[2].weight << " " << arr2[2].calories << endl;
//
//	delete[] arr2;
//
//	return 0;
//}

//#include <string>
//
//struct pizza {
//	string name;
//	float dm;
//	float weight;
//};

//int main() {
//	pizza P1;
//
//	std::cout << "���� ȸ���� �̸��� �Է��ϼ��� : ";
//	getline(cin, P1.name);
//	std::cout << "������ ������ �Է��ϼ��� : ";
//	std::cin >> P1.dm;
//	std::cout << "������ �߷��� �Է��ϼ��� : ";
//	std::cin >> P1.weight;
//
//	std::cout << P1.name << " " << P1.dm << "cm " << P1.weight << "g";
//
//	return 0;
//}

//int main() {
//	pizza *P1 = new pizza;
//
//	std::cout << "������ ������ �Է��ϼ��� : ";
//	std::cin >> (*P1).dm;
//	cin.get();
//	std::cout << "���� ȸ���� �̸��� �Է��ϼ��� : ";
//	getline(cin, (*P1).name);
//	std::cout << "������ �߷��� �Է��ϼ��� : ";
//	std::cin >> (*P1).weight;
//
//	std::cout << (*P1).name << " " << (*P1).dm << "cm " << (*P1).weight << "g";
//
//	delete P1;
//	return 0;
//}

#include <string>

//int main() {
//	string S1;
//	int len;
//	int count = 0;
//
//	cout << "���ڿ� �Է� : ";
//	cin >> S1;
//
//	len = size(S1);
//
//	for (int i = 0; i < len; i++) {
//		if (S1[i] == S1[len - 1 - i]) {
//			count += 1;
//		}
//	}
//	if (count == len) {
//		cout << "Palindrome";
//	}
//	else {
//		cout << "Not Palindrome";
//	}
//
//	return 0;
//}

//p.305-7

//struct car {
//	char name[20];
//	int birth;
//};
//
//int main() {
//	int carNum;
//
//	cout << "����� ���� ������� �����Ͻðڽ��ϱ�? : ";
//	cin >> carNum;
//
//	car *carArr = new car[carNum];
//
//	for (int i = 0; i < carNum; i++) {
//		cout << "�ڵ��� #" << i + 1 << endl;
//		cout << "���۾�ü : ";
//		cin >> (carArr + i)->name;
//		cout << "���۳⵵ : ";
//		cin >> (carArr + i)->birth;
//	}
//	cout << "���ϰ� �����ϰ� �ִ� �ڵ��� ����� ������ �����ϴ�." << endl;
//	for (int i = 0; i < carNum; i++) {
//		cout << (carArr + i)->birth << "�� �� " << (carArr + i)->name << endl;
//	}
//
//	return 0;
//}
//
//#include<cstring>
//
////p.305-8
//int main() {
//	char arr[20];
//	int count = 0;
//
//	while (1) {
//		cin >> arr;
//		if (strcmp(arr, "done") == 0) {
//			break;
//		}
//		count += 1;
//	}
//	 
//	cout << "�� " << count << "�ܾ �ԷµǾ����ϴ�.";
//	return 0;
//}