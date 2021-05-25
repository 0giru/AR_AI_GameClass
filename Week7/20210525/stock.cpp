#include"stock.h"
#include<iostream>

Stock::Stock() {
	std::cout << "����Ʈ �����ڰ� ȣ��Ǿ����ϴ�.\n";
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const std::string &co, long n, double pr) {
	std::cout << co << "�� ����ϴ� �����ڰ� ȣ��Ǿ����ϴ�.\n";
	company = co;

	if (n < 0) {
		std::cerr << "�ֽ� ���� ������ �� �� �����Ƿ�, " << company << " shares�� 0���� �����մϴ�\n";
		shares = 0;
	}
	else {
		shares = n;
		share_val = pr;
		set_tot();
	}
}

Stock::~Stock() {
	std::cout << "�ȳ�" << company;
}

void Stock::set_tot() {
	total_val = shares * share_val;
}

void Stock::acquire(const std::string &co, long n, double pr) {
	company = co;
	if (n < 0) {
		std::cout << "�ֽ� ���� ������ �� �� �����Ƿ�, " << company << " shares�� 0���� �����մϴ�.\n";
		shares = 0;
	}
	else {
		shares = n;
		share_val = pr;
		set_tot();
	}
}

void Stock::buy(long num, double price) {
	if (num < 0) {
		std::cout << "���� �ֽ� ���� ������ �� �� �����Ƿ�, " << "�ŷ��� ��ҵǾ����ϴ�.\n";
	}
	else {
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price) {
	if (num < 0) {
		std::cout << "�ŵ� �ֽ� ���� ������ �� �� �����Ƿ�, �ŷ��� ��ҵǾ����ϴ�.\n";
	}
	else if (num > shares) {
		std::cout << "���� �ֽĺ��� ���� �ֽ��� �ŵ��� �� �����Ƿ�, �ŷ��� ��ҵǾ����ϴ�.\n";
	}
	else {
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price) {
	share_val = price;
	set_tot();
}

void Stock::show() {
	std::cout << "ȸ��� : " << company
		<< " �ֽ� �� : " << shares << '\n' << " �ֽ� : $" << share_val << " �ֽ� �� ��ġ : $" << total_val << '\n';
}