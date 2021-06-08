#pragma once
#ifndef _WORKER_H_
#define _WORKER_H_

#include<string>

class Worker {
private:
	std::string fullname;
	long id;
public:
	Worker() : fullname("noname"), id(0L) {}
	Worker(const std::string & s, long n) : fullname(s), id(n) {}
	virtual ~Worker() = 0;
	virtual void Set();
	virtual void Show() const;
};

class Waiter : public Worker {
private:
	int panache;
public:
	Waiter() : Worker(), panache(0){}
	Waiter(const std::string & s, long n, int p = 0) : Worker(s, n), panache(p) {}
	Waiter(const Worker &wk, int p = 0) : Worker(wk), panache(p) {}
	void Set();
	void Show() const;
};

class Singer : public Worker {
protected:
	enum {other, alto, contralto, sprano, bass, baritons, tenor};
	enum {Vtypes = 7};
private:
	int voice;
	const static char *pv[Vtypes];
public:
	Singer() : Worker(), voice(other) {}
	Singer(const std::string & s, long n, int v = other) : Worker(s, n), voice(v) {}
	Singer(const Worker &wk, int v = other) : Worker(wk), voice(v) {}
	void Set();
	void Show() const;
};
#endif