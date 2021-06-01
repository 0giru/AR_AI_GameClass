#include"tabtenn.h"
#include<iostream>

TableTennisPlayer::TableTennisPlayer(const string& fn,
	const string& ln, bool ht) : fName(fn),
	lName(ln), hasTable(ht){
	//std::cout << "TTP constructor!!!" << std::endl;
}

TableTennisPlayer::~TableTennisPlayer() {
	//std::cout << "TTP destructor!!!" << std::endl;
}

void TableTennisPlayer::Name() const {
	std::cout << lName << ", " << fName;
}

RatedPlayer::RatedPlayer(unsigned int r, const string & fn, const string& ln, bool ht)
: TableTennisPlayer(fn, ln, ht){
	rating = r;
	//std::cout << "RP constructor!!!" << std::endl;
}

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer & tp) : TableTennisPlayer(tp), rating(r) {
	//std::cout << "RP constructor!!!" << std::endl;
}
RatedPlayer::~RatedPlayer() {
	//std::cout << "RP destructor!!!" << std::endl;
}