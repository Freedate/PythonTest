// Çì´õ //
#include<iostream>
using namespace std;
#ifndef TIME_H_
#define TIME_H_

class time{

private:
	int m_hours;
	int m_minutes;
public:
	time();
	time(int hours, int minutes);
	void addMin(int minutes);
	void addHr(int hours);
	void reset(int hours, int minutes);
	time operator+(const time& t)const;
	time operator*(double mult)const;
	friend time operator*(double mult, const time&t);
	void operator<<(ostream& out);
	void show()const;
	friend ostream& operator<<(ostream& out, const time& t);
};
#endif