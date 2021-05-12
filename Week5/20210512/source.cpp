#include<iostream>

////p.129-1
//int main() {
//	const float toMeter = 100;
//	const float toCent = 100;
//	int height;
//
//	std::cout << "키를 센티미터 단위로 입력하세요.";
//	std::cout << "_______\b\b\b\b\b";
//	std::cin >> height;
//
//	std::cout << "키는 " << height << "센티미터입니다." << std::endl;
//	std::cout << "키는 " << (float)height / toMeter << "미터입니다." << std::endl;
//
//	return 0;
//}

////p.129-3
//int main() {
//	float a; //도
//	float b; //분
//	float c; //초
//
//	std::cout << "위도를 도, 분, 초 단위로 입력하시오: " << std::endl;
//	std::cout << "먼저, 도각을 입력하시오: ";
//	std::cin >> a;
//	std::cout << "다음에, 분각을 입력하시오: ";
//	std::cin >> b;
//	std::cout << "끝으로, 초각을 입력하시오: ";
//	std::cin >> c;
//	std::cout << a << "도, " << b << "분, " << c << "초 = " << a + b / (float)60 + c / (float)3600 << "도";
//
//	return 0;
//}

////p130-5
//int main() {
//	long long popWorld;
//	long long popAmerica;
//
//	std::cout << "세계 인구수를 입력하시오 : ";
//	std::cin >> popWorld;
//	std::cout << "미국 인구수를 입력하시오 : ";
//	std::cin >> popAmerica;
//	std::cout << "세계 인구수에서 미국이 차지하는 비중은 " << float(popAmerica) / float(popWorld) * 100 << "% 이다.";
//
//	return 0;
//}
//
////p130-7
//int main() {
//	float forAmerica = 0;
//	float forEurope = 0;
//
//	std::cout << "휘발유 소비량을 100키로당 리터로 입력하시오 :";
//	std::cin >> forEurope;
//
//	forAmerica = float(1) / forEurope * 62.14 * 3.785;
//
//	std::cout << "변환 결과 : " << forAmerica;
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
//	cout << "안녕하세요! 저는 " << name2;
//	cout << "입니다. 실례지만 성함이?\n";
//	cin >> name1;
//	cout << "아, " << name1 << "씨! 당신의 이름은";
//	cout << strlen(name1) << "자 입니다만 \n";
//	cout << sizeof(name1) << "바이트 크기의 배열에 저장되었습니다.";
//	cout << "이름이 " << name1[0] << "자로 시작하는군요 \n";
//	name2[3] = '\0';
//	cout << "제 이름의 처음 세 문자는 다음과 같습니다. :" ;
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
//	cout << "이름을 입력하십시오 : \n";
//	cin.getline(name, ArSize);
//	cout << "좋아하는 디저트를 입력하십시오 : \n";
//	cin.getline(dessert, ArSize);
//	cout << "맛있는" << dessert;
//	cout << "디저트를 준비하겠습니다. " << name << "님";
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
//	cout << "고양이를 입력하시오 : ";
//	cin >> charr1;
//	cout << "고양이를 하나 더 입력하시오 : ";
//	cin >> str1;
//	cout << "아래 동물들은 모두 고양이 입니다\n";
//	cout << charr1 << " " << charr2 << " " << str1 << " " << str2 << endl;
//	cout << charr2 << "에서 세번째 글자 : " << charr2[2] << endl;
//	cout << str2 << "에서 세번째 글자 : " << str2[2] << endl;
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
	cout << "string 객체에 c 스타일 문자열을 대입할 수 있다.\n";
	cout << "s2 = \"buzzard\"\n";
	s2 = "buzzard";
	cout << "string 객체들을 결합할 수 있다 : s3 = s1 + s2\n";
	s3 = s1 + s2;
	cout << "s3 : " << s3 << endl;
	cout << "string 객체를 추가할 수 있다." << endl;
	s1 += s2;
	cout << "s1 += s2 --> s1 = " << s1 << endl;
	return 0;
}