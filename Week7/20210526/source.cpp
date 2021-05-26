//#include"Account.h"
//#include<iostream>
//#include<string>
//
//int main() {
//	Account AC1("kim", "123456-78-901234", 10000);
//	
//	int toDeposit = 0;
//	int toWithdraw = 0;
//
//	std::cout << "AC정보 출력 : " << std::endl;
//	AC1.printInf();
//	std::cout << std::endl;
//
//	std::cout << "입금할 금액을 입력하세요 : ";
//	std::cin >> toDeposit;
//	AC1.deposit(toDeposit);
//	std::cout << "AC정보 출력 : " <<std::endl;
//	AC1.printInf();
//	std::cout << std::endl;
//
//	std::cout << "출금할 금액을 입력하세요 : ";
//	std::cin >> toWithdraw;
//	AC1.withdraw(toWithdraw);
//	std::cout << "AC정보 출력 : " << std::endl;
//	AC1.printInf();
//	std::cout << std::endl;
//
//	std::cout << "출금할 금액을 입력하세요 : ";
//	std::cin >> toWithdraw;
//	AC1.withdraw(toWithdraw);
//	std::cout << std::endl;
//
//	std::cout << "AC정보 출력 : " << std::endl;
//	AC1.printInf();
//
//	return 0;
//}

//#include<iostream>
//#include"mytime1.h"
//
//int main() {
//	using std::cout;
//	using std::endl;
//	Time planning;
//	Time coding(2, 40);
//	Time fixing(5, 55);
//	Time total;
//
//	cout << "planning time = ";
//	planning.Show();
//	cout << endl;
//
//	cout << "coding time = ";
//	coding.Show();
//	cout << endl;
//
//	cout << "fixing time = ";
//	fixing.Show();
//	cout << endl;
//
//	total = coding + fixing;
//	cout << "coding + fixing = ";
//	total.Show();
//	cout << endl;
//
//	Time morefixing(3, 28);
//	cout << "more fixing time = ";
//	morefixing.Show();
//	cout << endl;
//	total = morefixing.operator+(total);
//	cout << "morefixing.operator+(total) = ";
//	total.Show();
//	cout << endl;
//}

#include<iostream>
#include"complex.h"

int main() {
	Complex C1(3.0, 4.0);
	Complex C2(1.0, 1.0);

	Complex result = C1 + C2;

	return 0;
}