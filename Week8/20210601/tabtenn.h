#pragma once
#ifndef _TABTENN_H_
#define _TABTENN_H_

#include<string>
using std::string;

class TableTennisPlayer {
private:
	string fName;
	string lName;
	bool hasTable;

public:
	TableTennisPlayer(const string& fn = "None",
		const string& ln = "None", bool ht = false);
	~TableTennisPlayer();
	void Name() const;
	bool HasTable() const {
		return hasTable;
	};
	void ResetTable(bool v) {
		hasTable = v;
	};
};

class RatedPlayer : public TableTennisPlayer {
private:
	unsigned int rating;
public:
	RatedPlayer(unsigned int r = 0, const string& fn = "None",
		const string& ln = "None", bool ht = false);
	RatedPlayer(unsigned int r, const TableTennisPlayer & tp);
	~RatedPlayer();
	unsigned int Rating() {
		return rating;
	}
	void ResetRating(unsigned int r) {
		rating = r;
	}

};

#endif
