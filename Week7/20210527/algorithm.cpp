#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string>

void reverseDisplay(int value) {
	int temp1;
	int temp2;

	char buf;

	if ((value / 10) > 0) {
		printf("%d", value % 10);
		reverseDisplay(value / 10);
	}
	else {
		printf("%d", value);
	}
}

void reverseDisplay(const std::string& s) {
	std::string ss = s;
	int len = ss.size();
	if (len != 0) {
		std::cout << ss[len - 1];
		ss.erase(len - 1, 1);
		reverseDisplay(ss);
	}
}

void displayPermutation(const string& s) {

}

int main() {
	//문제 1
	reverseDisplay(123456789);

	//문제 2
	reverseDisplay("abcde");

	return 0;
}