#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>

//template<typename T>
//class TooBig {
//private:
//	T cutoff;
//public:
//	TooBig(const T & t) : cutoff(t) {}
//	bool operator() (const T & v) { return v > cutoff; }
//};
//
//void outint(int n) { std::cout << n << " "; }
//
//int main() {
//	using std::list;
//	using std::cout;
//	using std::endl;
//
//	TooBig<int> f100(100);
//	int vals[10] = { 50, 100, 90, 180, 60, 210, 415, 88, 188, 201 };
//	list<int> yadayada(vals, vals + 10);
//	list<int> etcetera(vals, vals + 10);
//
//	cout << "원래 리스트 : " << endl;
//	for_each(yadayada.begin(), yadayada.end(), outint);
//	cout << endl;
//	for_each(etcetera.begin(), etcetera.end(), outint);
//	cout << endl;
//
//	yadayada.remove_if(f100);
//	etcetera.remove_if(TooBig<int>(200));
//	cout << "정비된 리스트 : " << endl;
//	for_each(yadayada.begin(), yadayada.end(), outint);
//	cout << endl;
//	for_each(etcetera.begin(), etcetera.end(), outint);
//	cout << endl;
//
//	return 0;
//}

//void Show(int);
//const int LIM = 10;
//int main() {
//	using namespace std;
//	int ar[LIM] = { 4, 5, 4, 2, 2, 3, 4, 8, 1, 4 };
//	list<int> la(ar, ar + LIM);
//	list<int> lb(la);
//	cout << "오리지널 리스트의 내용 : \n\t";
//	for_each(la.begin(), la.end(), Show);
//	cout << endl;
//	la.remove(4);
//	cout << "remove를 사용한 뒤 : " << endl;
//	cout << "la:\t";
//	for_each(la.begin(), la.end(), Show);
//	cout << endl;
//	list<int>::iterator last;
//	last = remove(lb.begin(), lb.end(), 4);
//	cout << "remove() 함수를 사용한 후 : \n";
//	cout << "lb:\t";
//	for_each(lb.begin(), lb.end(), Show);
//	cout << endl;
//	lb.erase(last, lb.end());
//	cout << "erase() 메서드를 사용한 후:\n";
//	cout << "lb:\t";
//	for_each(lb.begin(), lb.end(), Show);
//	cout << endl;
//	return 0;
//}
//
//void Show(int v) {
//	std::cout << v << ' ';
//}

//#include<string>
//#include<vector>
//#include<set>
//#include<map>
//#include<iterator>
//#include<algorithm>
//#include<cctype>
//using namespace std;
//
//char toLower(char ch) { return tolower(ch); }
//string & ToLower(string & st);
//void display(const string & s);
//
//int main() {
//	vector<string> words;
//	cout << "단어들을 입력하십시오(끝내려면 quit) : " << endl;
//	string input;
//	while (cin >> input && input != "quit") {
//		words.push_back(input);
//	}
//	cout << "다음과 같은 단어들을 입력했다." << endl;
//	for_each(words.begin(), words.end(), display);
//	cout << endl;
//
//	set<string> wordset;
//	transform(words.begin(), words.end(), insert_iterator< set<string> > (wordset, wordset.begin()), ToLower);
//	cout << endl << "단어들의 알파벳 순 리스트 : " << endl;
//	for_each(wordset.begin(), wordset.end(), display);
//	cout << endl;
//
//	map<string, int> wordmap;
//	set<string>::iterator si;
//	for (si = wordset.begin(); si != wordset.end(); si++) {
//		wordmap[*si] = count(words.begin(), words.end(), *si);
//	}
//
//	cout << endl << "단어별 빈도" << endl;
//	for (si = wordset.begin(); si != wordset.end(); si++) {
//		cout << *si << ": " << wordmap[*si] << endl;
//	}
//	return 0;
//}
//
//string & ToLower(string & st) {
//	transform(st.begin(), st.end(), st.begin(), toLower);
//	return st;
//}
//
//void display(const string & s) {
//	cout << s << " ";
//}

//#include<vector>
//#include<stdlib.h>
//#include<time.h>
//using namespace std;
//
//void display(const int & v) {
//	cout << v << ' ';
//}
//bool check(vector<int> v, int t) {
//	vector<int>::iterator vi;
//	for (vi = v.begin(); vi < v.end(); vi++) {
//		if (*vi == t) {
//			return false;
//		}
//	}
//	return true;
//}
//
//vector<int> lotto(int argv1, int argv2) {
//	int count = 0;
//	vector<int> result;
//
//	while (count < 6) {
//		int temp = rand() % (argv1 + 1);
//		if (temp == 0) {
//			continue;
//		}
//
//		if (check(result, temp)) {
//			result.push_back(temp);
//			count += 1;
//		}
//		continue;
//	}
//
//	return result;
//}
//
//int main() {
//	vector<int> winner;
//	srand(unsigned(time(0)));
//
//	for (int i = 1; i <= 5; i++) {
//		cout << i << "번째 로또 번호 : " << endl;
//		winner = lotto(45, 6);
//		sort(winner.begin(), winner.end());
//		for_each(winner.begin(), winner.end(), display);
//		cout << endl;
//		cout << endl;
//	}
//
//	return 0;
//}

int main() {
	using std::cout;
	using std::endl;
	using std::ios_base;

	int temperature = 63;

	cout << "오늘의 수온 : ";
	cout.setf(ios_base::showpos);
	cout << temperature << endl;

	cout << "프로그래머들에게 그 값은 " << endl;
	cout << std::hex << temperature << endl;
	cout.setf(ios_base::uppercase);
	cout.setf(ios_base::showbase);
	cout << "또는 " << endl;
	cout << temperature << endl;
	cout << true << "의 값은 ";
	cout.setf(ios_base::boolalpha);
	cout << true << "이다" << endl;

	return 0;
}