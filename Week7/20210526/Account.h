#pragma once
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include<iostream>

class Account {
private:
	std::string client;
	std::string AccNum;
	int balance;

	void setName(const std::string &client);
	void setBalance(int bal);
	void setAccNum(const std::string &accnum);

public:
	Account(const std::string &name, const std::string &accnum, int bal);
	~Account();

	void printInf();
	void deposit(int money);
	void withdraw(int money);
};
#endif