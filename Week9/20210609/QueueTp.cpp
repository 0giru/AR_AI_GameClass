#include<iostream>
#include"QueueTp.h"
#include"worker.h"
using namespace std;

int main() {
	QueueTp<Worker*> que;
	int s;
	string name;
	int num;

	while (1) {
		cout << "��ɼ��� : 1. ������ �߰�, 2. ���� �߰�, 3. �ذ�, 4. ����";
		cin >> s;

		if (s == 1) {
			cout << "�̸� �Է� : ";
			cin >> name;
			cout << "��� �Է� : ";
			cin >> num;
			Waiter W(name, num, 0);
			que.enque(&W);
		}
		else if (s == 2) {
			cout << "�̸� �Է� : ";
			cin >> name;
			cout << "��� �Է� : ";
			cin >> num;
			Singer S(name, num, 0);
			que.enque(&S);
		}
		else if (s == 3) {
			que.deque();
			cout << "�ذ��� ���� :  ";

		}
	}


}