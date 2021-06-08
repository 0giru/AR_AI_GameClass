#pragma once
#ifndef _QUEUE_H_
#define _QUEUE_H_	

const int max = 10;

template <typename T>
class QueueTp {
private:
	T* items[max];
	int f_idx;
	int r_idx;
public:
	QueueTp();
	~QueueTp();
	bool enque(const T& item);
	bool deque();
	bool isEmpty();
	bool isFull();
};

template<typename T>
QueueTp<T>::QueueTp() {
	f_idx = 0;
	r_idx = 0;
}

template<typename T>
QueueTp<T>::~QueueTp() {
	cout << "\n\n�Ҹ��� ȣ��\n\n";
}

template<typename T>
bool QueueTp<T>::enque(const T& item) {
	if (isFull() == true) {
		cout << "ť�� ���� á���ϴ�";
		return false;
	}
	items[r_idx] = item;
	r_idx += 1;
	return true;
}

template<typename T>
bool QueueTp<T>::deque() {
	if (isEmpty() == true) {
		cout << "ť�� ����ֽ��ϴ�";
		return false;
	}
	f_idx += 1;
	return true;
}

template<typename T>
bool QueueTp<T>::isFull() {
	return 
}

template<typename T>
bool QueueTp<T>::isEmpty() {
	return f_idx == r_idx;
}
#endif
