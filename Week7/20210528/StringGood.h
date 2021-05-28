#pragma once
#ifndef _STRING_H_
#define _STRING_H_
#include<iostream>
using std::ostream;
using std::istream;

class StringGood {
private:
	char* str;
	int len;
	static int num_strings;
	static const int CINLIM = 80;
public:
	StringGood(const char* s);
	StringGood();
	StringGood(const StringGood& st);
	~StringGood();
	int length() const { return len; }

	StringGood& operator=(const StringGood& st);
	StringGood& operator=(const char* s);
	char& operator[](int i);
	const char& operator[](int i) const;

	friend bool operator<(const StringGood& st1, const StringGood& st2);
	friend bool operator>(const StringGood& st1, const StringGood& st2);
	friend bool operator==(const StringGood& st1, const StringGood& st2);
	friend ostream& operator<<(ostream& os, const StringGood& st);
	friend istream& operator>>(istream& os, StringGood& st);

	static int HowMany();
};

#endif