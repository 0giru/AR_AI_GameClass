#include<iostream>

////p.129-1
//int main() {
//	const float toMeter = 100;
//	const float toCent = 100;
//	int height;
//
//	std::cout << "Ű�� ��Ƽ���� ������ �Է��ϼ���.";
//	std::cout << "_______\b\b\b\b\b";
//	std::cin >> height;
//
//	std::cout << "Ű�� " << height << "��Ƽ�����Դϴ�." << std::endl;
//	std::cout << "Ű�� " << (float)height / toMeter << "�����Դϴ�." << std::endl;
//
//	return 0;
//}

////p.129-3
//int main() {
//	float a; //��
//	float b; //��
//	float c; //��
//
//	std::cout << "������ ��, ��, �� ������ �Է��Ͻÿ�: " << std::endl;
//	std::cout << "����, ������ �Է��Ͻÿ�: ";
//	std::cin >> a;
//	std::cout << "������, �а��� �Է��Ͻÿ�: ";
//	std::cin >> b;
//	std::cout << "������, �ʰ��� �Է��Ͻÿ�: ";
//	std::cin >> c;
//	std::cout << a << "��, " << b << "��, " << c << "�� = " << a + b / (float)60 + c / (float)3600 << "��";
//
//	return 0;
//}

////p130-5
//int main() {
//	long long popWorld;
//	long long popAmerica;
//
//	std::cout << "���� �α����� �Է��Ͻÿ� : ";
//	std::cin >> popWorld;
//	std::cout << "�̱� �α����� �Է��Ͻÿ� : ";
//	std::cin >> popAmerica;
//	std::cout << "���� �α������� �̱��� �����ϴ� ������ " << float(popAmerica) / float(popWorld) * 100 << "% �̴�.";
//
//	return 0;
//}
//
////p130-7
//int main() {
//	float forAmerica = 0;
//	float forEurope = 0;
//
//	std::cout << "�ֹ��� �Һ��� 100Ű�δ� ���ͷ� �Է��Ͻÿ� :";
//	std::cin >> forEurope;
//
//	forAmerica = float(1) / forEurope * 62.14 * 3.785;
//
//	std::cout << "��ȯ ��� : " << forAmerica;
//
//	return 0;
//}

//#include <cstring>
//
//int main() {
//	using namespace std;
//
//	const int Size = 15;
//	char name1[Size];
//	char name2[Size] = "C++owboy";
//
//	cout << "�ȳ��ϼ���! ���� " << name2;
//	cout << "�Դϴ�. �Ƿ����� ������?\n";
//	cin >> name1;
//	cout << "��, " << name1 << "��! ����� �̸���";
//	cout << strlen(name1) << "�� �Դϴٸ� \n";
//	cout << sizeof(name1) << "����Ʈ ũ���� �迭�� ����Ǿ����ϴ�.";
//	cout << "�̸��� " << name1[0] << "�ڷ� �����ϴ±��� \n";
//	name2[3] = '\0';
//	cout << "�� �̸��� ó�� �� ���ڴ� ������ �����ϴ�. :" ;
//	cout << name2 << endl;
//	return 0;
//}

//int main() {
//	using namespace std;
//
//	const int ArSize = 20;
//	char name[ArSize];
//	char dessert[ArSize];
//	
//	cout << "�̸��� �Է��Ͻʽÿ� : \n";
//	cin.getline(name, ArSize);
//	cout << "�����ϴ� ����Ʈ�� �Է��Ͻʽÿ� : \n";
//	cin.getline(dessert, ArSize);
//	cout << "���ִ�" << dessert;
//	cout << "����Ʈ�� �غ��ϰڽ��ϴ�. " << name << "��";
//
//	return 0;
//}

//#include <string>
//
//int main() {
//	using namespace std;
//
//	char charr1[20];
//	char charr2[20] = "jaguar";
//	string str1;
//	string str2 = "panther";
//
//	cout << "����̸� �Է��Ͻÿ� : ";
//	cin >> charr1;
//	cout << "����̸� �ϳ� �� �Է��Ͻÿ� : ";
//	cin >> str1;
//	cout << "�Ʒ� �������� ��� ����� �Դϴ�\n";
//	cout << charr1 << " " << charr2 << " " << str1 << " " << str2 << endl;
//	cout << charr2 << "���� ����° ���� : " << charr2[2] << endl;
//	cout << str2 << "���� ����° ���� : " << str2[2] << endl;
//
//	return 0;
//}

#include <string>

int main() {
	using namespace std;

	string s1 = "penguin";
	string s2, s3;

	s2 = s1;
	cout << "s1 : " << s1 << ", s2 : " << s2 << endl;
	cout << "string ��ü�� c ��Ÿ�� ���ڿ��� ������ �� �ִ�.\n";
	cout << "s2 = \"buzzard\"\n";
	s2 = "buzzard";
	cout << "string ��ü���� ������ �� �ִ� : s3 = s1 + s2\n";
	s3 = s1 + s2;
	cout << "s3 : " << s3 << endl;
	cout << "string ��ü�� �߰��� �� �ִ�." << endl;
	s1 += s2;
	cout << "s1 += s2 --> s1 = " << s1 << endl;
	return 0;
}