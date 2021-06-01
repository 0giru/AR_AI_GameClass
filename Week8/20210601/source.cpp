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
//		words = s; number = n; cout << words << " 생성\n";
//	}
//	~JustTesting() {
//		cout << words << "파괴\n";
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
//	cout << "메모리 블록 주소 : \n" << "buffer : "
//		<< (void *)buffer << "heap : " << pc2 << endl;
//	cout << "메모리 내용 : \n";
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
//	cout << "메모리 내용 : \n";
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
//	cout << "종료\n";
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
		cout << ": 탁구대가 있다.\n";
	}
	else {
		cout << " : 탁구대가 없다.\n";
	}

	rplayer1.Name();
	if (rplayer1.HasTable()) {
		cout << ": 탁구대가 있다.\n";
	}
	else {
		cout << " : 탁구대가 없다.\n";
	}

	cout << "이름 : ";
	rplayer1.Name();
	cout << " 랭킹 : " << rplayer1.Rating() << endl;

	RatedPlayer rplayer2(12, player1);
	cout << "이름 : ";
	rplayer2.Name();
	cout << " 랭킹 : " << rplayer2.Rating() << endl;
} 