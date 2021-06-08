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
		cout << "기능선택 : 1. 웨이터 추가, 2. 가수 추가, 3. 해고, 4. 종료";
		cin >> s;

		if (s == 1) {
			cout << "이름 입력 : ";
			cin >> name;
			cout << "사번 입력 : ";
			cin >> num;
			Waiter W(name, num, 0);
			que.enque(&W);
		}
		else if (s == 2) {
			cout << "이름 입력 : ";
			cin >> name;
			cout << "사번 입력 : ";
			cin >> num;
			Singer S(name, num, 0);
			que.enque(&S);
		}
		else if (s == 3) {
			que.deque();
			cout << "해고한 직원 :  ";

		}
	}


}