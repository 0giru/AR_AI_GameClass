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
//	cout << "���� ����Ʈ : " << endl;
//	for_each(yadayada.begin(), yadayada.end(), outint);
//	cout << endl;
//	for_each(etcetera.begin(), etcetera.end(), outint);
//	cout << endl;
//
//	yadayada.remove_if(f100);
//	etcetera.remove_if(TooBig<int>(200));
//	cout << "����� ����Ʈ : " << endl;
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
//	cout << "�������� ����Ʈ�� ���� : \n\t";
//	for_each(la.begin(), la.end(), Show);
//	cout << endl;
//	la.remove(4);
//	cout << "remove�� ����� �� : " << endl;
//	cout << "la:\t";
//	for_each(la.begin(), la.end(), Show);
//	cout << endl;
//	list<int>::iterator last;
//	last = remove(lb.begin(), lb.end(), 4);
//	cout << "remove() �Լ��� ����� �� : \n";
//	cout << "lb:\t";
//	for_each(lb.begin(), lb.end(), Show);
//	cout << endl;
//	lb.erase(last, lb.end());
//	cout << "erase() �޼��带 ����� ��:\n";
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
//	cout << "�ܾ���� �Է��Ͻʽÿ�(�������� quit) : " << endl;
//	string input;
//	while (cin >> input && input != "quit") {
//		words.push_back(input);
//	}
//	cout << "������ ���� �ܾ���� �Է��ߴ�." << endl;
//	for_each(words.begin(), words.end(), display);
//	cout << endl;
//
//	set<string> wordset;
//	transform(words.begin(), words.end(), insert_iterator< set<string> > (wordset, wordset.begin()), ToLower);
//	cout << endl << "�ܾ���� ���ĺ� �� ����Ʈ : " << endl;
//	for_each(wordset.begin(), wordset.end(), display);
//	cout << endl;
//
//	map<string, int> wordmap;
//	set<string>::iterator si;
//	for (si = wordset.begin(); si != wordset.end(); si++) {
//		wordmap[*si] = count(words.begin(), words.end(), *si);
//	}
//
//	cout << endl << "�ܾ ��" << endl;
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
//		cout << i << "��° �ζ� ��ȣ : " << endl;
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

	cout << "������ ���� : ";
	cout.setf(ios_base::showpos);
	cout << temperature << endl;

	cout << "���α׷��ӵ鿡�� �� ���� " << endl;
	cout << std::hex << temperature << endl;
	cout.setf(ios_base::uppercase);
	cout.setf(ios_base::showbase);
	cout << "�Ǵ� " << endl;
	cout << temperature << endl;
	cout << true << "�� ���� ";
	cout.setf(ios_base::boolalpha);
	cout << true << "�̴�" << endl;

	return 0;
}