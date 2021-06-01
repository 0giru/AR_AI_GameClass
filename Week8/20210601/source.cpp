#include<iostream>
//#include<string>
//#include<new>
//
//using namespace std;
//const int BUF = 512;
//
//class JustTesting {
//private:
//	string words;
//	int number;
//
//public:
//	JustTesting(const string & s = "JustTesting", int n = 0) {
//		words = s; number = n; cout << words << " ����\n";
//	}
//	~JustTesting() {
//		cout << words << "�ı�\n";
//	}
//	void Show() const {
//		cout << words << ", " << number << endl;
//	}
//};
//
//int main() {
//	char * buffer = new char[BUF];
//
//	JustTesting *pc1, *pc2;
//
//	pc1 = new (buffer) JustTesting;
//	pc2 = new JustTesting("heap", 20);
//
//	cout << "�޸� ��� �ּ� : \n" << "buffer : "
//		<< (void *)buffer << "heap : " << pc2 << endl;
//	cout << "�޸� ���� : \n";
//	cout << pc1 << ": ";
//	pc1->Show();
//	cout << pc2 << ": ";
//	pc2->Show();
//
//	JustTesting *pc3, *pc4;
//
//	pc3 = new (buffer + sizeof(JustTesting))
//		JustTesting("Bad Idea", 6);
//	pc4 = new JustTesting("Heap2", 10);
//
//	cout << "�޸� ���� : \n";
//	cout << pc3 << ": ";
//	pc1->Show();
//	cout << pc4 << ": ";
//	pc2->Show();
//
//	delete pc2;
//	delete pc4;
//
//	pc3->~JustTesting();
//	pc1->~JustTesting();
//	delete[] buffer;
//	cout << "����\n";
//
//	return 0;
//}

#include"tabtenn.h"

int main() {
	using std::cout;
	using std::endl;
	TableTennisPlayer player1("Chuck", "blizzard", true);
	RatedPlayer rplayer1(11, "Tara", "Boomdea", false);

	player1.Name();
	if (player1.HasTable()) {
		cout << ": Ź���밡 �ִ�.\n";
	}
	else {
		cout << " : Ź���밡 ����.\n";
	}

	rplayer1.Name();
	if (rplayer1.HasTable()) {
		cout << ": Ź���밡 �ִ�.\n";
	}
	else {
		cout << " : Ź���밡 ����.\n";
	}

	cout << "�̸� : ";
	rplayer1.Name();
	cout << " ��ŷ : " << rplayer1.Rating() << endl;

	RatedPlayer rplayer2(12, player1);
	cout << "�̸� : ";
	rplayer2.Name();
	cout << " ��ŷ : " << rplayer2.Rating() << endl;
} 