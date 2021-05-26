#include"Account.h"
#include<string>

Account::Account(const std::string &name, const std::string &accnum, int bal) {
	setName(name);
	setAccNum(accnum);
	setBalance(bal);
}

void Account::setName(const std::string &name) {
	client = name;
}
void Account::setBalance(int bal) {
	balance = bal;
}
void Account::setAccNum(const std::string &accnum) {
	AccNum = accnum;
}

Account::~Account() {
	std::cout << "Account Class Destroyed";
}

void Account::deposit(int money) {
	balance += money;
}

void Account::withdraw(int money) {
	if (balance < money) {
		std::cout << "withdrawal failed" << std::endl;
	}
	else {
		balance -= money;
	}
}

void Account::printInf() {
	std::cout << "Name : " << this->client << std::endl;
	std::cout << "Account Number : " << this->AccNum << std::endl;
	std::cout << "Balance : " << this->balance << std::endl;

}