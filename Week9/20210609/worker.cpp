#include"worker.h"
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

Worker::~Worker() {

}

void Worker::Set() {
	cout << "��� �̸��� �Է��Ͻʽÿ�: \n";
	getline(cin, fullname);
	cout << "��� ��ȣ�� �Է��Ͻʽÿ� : \n";
	cin >> id;
	while (cin.get() != '\n') {
		continue;
	}
}

void Worker::Show() const {
	cout << "��� �̸� : " << fullname << "\n";
	cout << "��� ��ȣ : " << id << "\n";
}

void Waiter::Set() {
	Worker::Set();
	cout << "������ ����� �Է��Ͻʽÿ� : \n";
	cin >> panache;
	while (cin.get() != '\n') {
		continue;
	}
}

void Waiter::Show() const {
	cout << "���� : ������\n";
	Worker::Show();
	cout << "������ ��� : " << panache << "\n";
}

const char* Singer::pv[] = { "other", "alto", "contralto", "soprano", "bass", "baritons", "tenor" };

void Singer::Set() {
	Worker::Set();
	cout << "������ ��Ҹ� ������ �Է��ϼ��� : \n";
	int i;
	for (i = 0; i < Vtypes; i++) {
		cout << i << " : " << pv[i] << " ";
		if (i % 4 == 3) {
			cout << endl;
		}
	}
	if (i % 4 != 0) {
		cout << endl;
	}
	while (cin >> voice && (voice < 0 || voice >= Vtypes)) {
		cout << "0���� ũ�ų� ���� " << Vtypes << "���� ���� ���� �Է��ϼ���" << endl;
	}
	while (cin.get() != '\n') {
		continue;
	}
}

void Singer::Show() const {
	cout << "���� : ����\n";
	Worker::Show();
	cout << "��Ҹ� ���� : " << pv[voice] << endl;
}

