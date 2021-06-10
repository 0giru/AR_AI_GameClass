#include<iostream>

//int main() {
//	using namespace std;
//
//	string one("Lottery Winner!");
//	cout << one << endl;
//
//	string two(20, '$');
//	cout << two << endl;
//
//	string three(one);
//	cout << three << endl;
//
//	one += "Oops!";
//	cout << one << endl;
//
//	two = "Sorry! That was ";
//	three[0] = 'P';
//
//	string four;
//	four = two + three;
//
//	cout << four << endl;
//
//	char alls[] = "All's well that ends well";
//
//	string five(alls, 20);
//	cout << five << '!' << endl;
//
//	string six(alls + 6, alls + 10);
//	cout << six << endl;
//
//	string seven(&five[6], &five[10]);
//	cout << seven << "..." << endl;
//
//	string eight(four, 7, 16);
//	cout << eight << "in motion!" << endl;
//
//	return 0;
//
//}

//#include<fstream>
//#include<string>
//#include<cstdlib>
//
//int main() {
//	using namespace std;
//
//	ifstream fin;
//	fin.open("tobuy.txt");
//	if (fin.is_open() == false) {
//		cerr << "파일을 열 수 없습니다" << endl;
//		exit(EXIT_FAILURE);
//	}
//	string item;
//	int count = 0;
//	getline(fin, item, ':');
//	while (fin) {
//		++count;
//		cout << count << ":" << item << endl;
//		getline(fin, item, ':');
//	}
//	cout << "프로그램을 종료합니다." << endl;
//	fin.close();
//
//	return 0;
//}

//#include<string>
//#include<cstdlib>
//#include<ctime>
//#include<cctype>
//using std::string;
//
//const int NUM = 26;
//const string wordlist[NUM] = {"apiary", "beetle", "cereal", "danger", "ensign", "florid", "garage", "health", "insult"};
//
//int main() {
//	using namespace std;
//
//	char play;
//	cout << "게임 시작? <y / n>";
//	cin >> play;
//	while (play == 'y') {
//		string target = wordlist[rand() % NUM];
//		int length = target.length();
//		string attempt(length, '-');
//		string badchars;
//		int guesses = 6;
//		cout << "추측해라" << endl << length << "개의 문자로 이루어져 있다." << endl << "한번에 한문자씩 추측해라" << "틀릴기회 : " << guesses << "번" << endl;
//		cout << "추측하는 단어 : " << attempt << endl;
//		while (guesses > 0 && attempt != target) {
//			char letter;
//			cout << "추측해라 : ";
//			cin >> letter;
//			if (badchars.find(letter) != string::npos || attempt.find(letter) != string::npos) {
//				cout << "이미 추측한 문자다. 다시해라" << endl;
//				continue;
//			}
//			int loc = target.find(letter);
//			if (loc == string::npos) {
//				cout << "틀렸다" << endl;
//				--guesses;
//				badchars += letter;
//			}
//			else {
//				cout << "맞았다" << endl;
//				attempt[loc] = letter;
//				loc = target.find(letter, loc + 1);
//				while (loc != string::npos) {
//					attempt[loc] = letter;
//					loc = target.find(letter, loc + 1);
//				}
//			}
//			cout << "추측하는 단어 : " << attempt << endl;
//			if (attempt != target) {
//				if (badchars.length() > 0) {
//					cout << "틀리게 추측한 문자들" << badchars << endl;
//					cout << "틀릴 기회 : " << guesses << "번" << endl;
//				}
//			}
//		}
//		if (guesses > 0) {
//			cout << "이거다" << endl;
//		}
//		else {
//			cout << "틀렸다 틀렸어" << target << "이다" << endl;
//		}
//
//		cout << "게임을 다시 하냐<y / n>";
//		cin >> play;
//		play = tolower(play);
//	}
//	cout << "끝" << endl;
//	return 0;
//}

//#include<string>
//#include<memory>
//
//class Report {
//private:
//	std::string str;
//public:
//	Report(const std::string s) : str(s) {
//		std::cout << "객체 생성" << std::endl;
//	}
//	~Report() {
//		std::cout << "객체 파괴" << std::endl;
//	}
//	void comment() const { std::cout << str << std::endl; }
//};
//
//int main() {
//	{
//		std::auto_ptr<Report> ps(new Report("auto_ptr"));
//		ps->comment();
//	}
//	{
//		std::shared_ptr<Report> ps(new Report("shared_ptr"));
//		ps->comment();
//	}
//	{
//		std::unique_ptr<Report> ps(new Report("unique_ptr"));
//		ps->comment();
//	}
//	return 0;
//}

//#include<string>
//#include<vector>
//
//const int NUM = 5;
//int main() {
//	using namespace std;
//
//	vector<int> ratings(NUM);
//	vector<string> titles(NUM);
//	cout << NUM << "개의 책 제목과 등급을 입력하시요" << endl;
//	int i;
//	for (int i = 0; i < NUM; i++) {
//		cout << i + 1 << "번 책 제목을 입력하심시오 : ";
//		getline(cin, titles[i]);
//		cout << i + 1 << "번 책의 등급을 입력하십시오 : ";
//		cin >> ratings[i];
//		cin.get();
//	}
//	for (int i = 0; i < NUM; i++) {
//		cout << ratings[i] << "\t" << titles[i] << endl;
//	}
//
//	return 0;
//}

//#include<string>
//#include<iterator>
//#include<vector>
//#include<algorithm>
//
//void output(const std::string & s) { std::cout << s << " "; }
//
//int main() {
//	using namespace std;
//
//	string s1[4] = { "fine", "fish", "fashion", "fate" };
//	string s2[2] = { "busy", "bats" };
//	string s3[2] = { "silly", "singers" };
//
//	vector<string> words(4);
//
//	copy(s1, s1 + 4, words.begin());
//	for_each(words.begin(), words.end(), output);
//	cout << endl;
//
//	return 0;
//}

//#include<iostream>
//#include<list>
//#include<iterator>
//#include<algorithm>
//
//void outint(int n) { std::cout << n << " "; }
//
//int main() {
//	using namespace std;
//
//	list<int> one(5, 2);
//	int stuff[5] = { 1, 2, 4, 8, 6 };
//	list<int> two;
//	two.insert(two.begin(), stuff, stuff + 5);
//	int more[6] = { 6, 4, 2, 4, 6, 5 };
//	list<int> three(two);
//	three.insert(three.end(), more, more + 6);
//
//	cout << "list one : ";
//	for_each(one.begin(), one.end(), outint);
//	cout << endl << "list two : ";
//	for_each(two.begin(), two.end(), outint);
//	cout << endl << "list three : ";
//	for_each(three.begin(), three.end(), outint);
//
//	return 0;
//}

//#include<string>
//#include<set>
//#include<algorithm>
//#include<iterator>
//
//int main() {
//	using namespace std;
//
//	const int N = 6;
//
//	string s1[N] = { "buffoon", "thinkers", "for", "heavy", "can", "for" };
//	string s2[N] = { "metal", "any", "food", "elegant", "deliver", "for" };
//
//	set<string> A(s1, s1 + N);
//	set<string> B(s2, s2 + N);
//
//	ostream_iterator<string, char> out(cout, " ");
//	cout << "집합 A : ";
//	copy(A.begin(), A.end(), out);
//	cout << endl;
//	cout << endl << "집합 B : ";
//	copy(B.begin(), B.end(), out);
//	cout << endl;
//
//	cout << endl << "AB 합집합 : ";
//	set_union(A.begin(), A.end(), B.begin(), B.end(), out);
//	cout << endl;
//
//	cout << endl << "AB 교집합 : ";
//	set_intersection(A.begin(), A.end(), B.begin(), B.end(), out);
//
//	cout << endl <<"AB 차집합 : ";
//	set_difference(A.begin(), A.end(), B.begin(), B.end(), out);
//
//	set<string> C;
//	cout << endl << "집합 C:\n";
//	set_union(A.begin(), A.end(), B.begin(), B.end(), insert_iterator< set<string> >(C, C.begin()));
//	copy(C.begin(), C.end(), out);
//	cout << endl;
//
//	string s3("grungy");
//	C.insert(s3);
//	cout << "삽입한 후의 집합 C:\n";
//	copy(C.begin(), C.end(), out);
//	cout << endl;
//
//	cout << "특정한 범위를 표시 : \n";
//	copy(C.lower_bound("ghost"), C.upper_bound("spook"), out);
//	cout << endl;
//
//	return 0;
//}

#include<string>
#include<map>
#include<algorithm>

typedef int KeyType;
typedef std::pair<const KeyType, std::string> Pair;
typedef std::multimap<KeyType, std::string> MapCode;

int main() {
	using namespace std;
	MapCode codes;

	codes.insert(Pair(415, "샌프란시스코"));
	codes.insert(Pair(510, "오클랜드"));
	codes.insert(Pair(718, "브루클린"));
	codes.insert(Pair(718, "스태튼섬"));
	codes.insert(Pair(415, "샌라파엘"));
	codes.insert(Pair(510, "버클리"));

	cout << "지역 코드가 415인 도시 수 : " << codes.count(415) << endl;
	cout << "지역 코드가 718인 도시 수 : " << codes.count(718) << endl;
	cout << "지역 코드가 510인 도시 수 : " << codes.count(510) << endl;

	cout << "지역 코드 도시\n";
	MapCode::iterator it;
	for (it = codes.begin(); it != codes.end(); ++it) {
		cout << "	" << (*it).first << "	" << (*it).second << endl;
	}

	pair<MapCode::iterator, MapCode::iterator> range = codes.equal_range(718);
	cout << "지역 코드가 718인 도시들 : " << endl;
	for (it = range.first; it != range.second; ++it) {
		cout << (*it).second << endl;
	}


	return 0;
}