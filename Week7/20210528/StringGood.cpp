#include"StringGood.h"
#include<cstring>
using std::cin;
using std::cout;

int StringGood::num_strings = 0;

int StringGood::HowMany() {
	return num_strings;
}

StringGood::StringGood(const char* s) {
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_strings++;
}

StringGood::StringGood() {
	len = 4;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}

StringGood::StringGood(const StringGood& st) {
	num_strings++;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
}

StringGood::~StringGood() {
	--num_strings;
	delete[] str;
}

//int length() const { return len; }

StringGood& StringGood::operator=(const StringGood& st) {
	if (this == &st) {
		return *this;
	}
	delete[] str;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
	return *this;
}

StringGood& StringGood::operator=(const char* s) {
	delete[] str;
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	return *this;
}

char& StringGood::operator[](int i) {
	return str[i];
}

const char& StringGood::operator[](int i) const {
	return str[i];
}

bool operator<(const StringGood& st1, const StringGood& st2) {
	return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const StringGood& st1, const StringGood& st2) {
	return st2 < st1;
}

bool operator==(const StringGood& st1, const StringGood& st2) {
	return (std::strcmp(st1.str, st2.str) == 0);
}
ostream& operator<<(ostream& os, const StringGood& st) {
	os << st.str;
	return os;
}
istream& operator>>(istream& is, StringGood& st) {
	char temp[StringGood::CINLIM];
	is.get(temp, StringGood::CINLIM);
	if (is) {
		st = temp;
	}
	while (is && is.get() != '\n') {
		continue;
	}
	return is;
}

