#pragma once
#ifndef STOCK_H_
#define STOCK_H

#include<string>

class Stock {
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot();
public:
	Stock(); //default constructor
	Stock(const std::string &co, long n = 0, double pr = 0.0);
	~Stock(); //destructor

	void acquire(const std::string &co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};

#endif