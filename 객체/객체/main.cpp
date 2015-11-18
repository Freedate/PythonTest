// ���� //
#include "mytime.h"

time::time()
	:m_hours(0), m_minutes(0)
{
}
time::time(int hours, int minutes){
	m_hours = hours;
	m_minutes = minutes;
}
void time::addMin(int minutes){
	m_minutes += minutes;
	m_hours += m_minutes / 60;
	m_minutes %= 60;
}
void time::addHr(int hours){
	m_hours += hours;
}
void time::reset(int hours, int minutes){
	m_hours = hours;
	m_minutes = minutes;
}
time time::operator+(const time& t)const{
	time sum;
	sum.m_minutes = m_minutes + t.m_minutes;
	sum.m_hours = m_hours + t.m_hours + sum.m_minutes / 60;
	sum.m_minutes %= 60;
	return sum;
}
time time::operator*(double mult)const{
	time result;
	long totalminutes = m_hours*mult * 60 + m_minutes*mult;
	result.m_hours = totalminutes / 60;
	result.m_minutes = totalminutes % 60;
	return result;
}
time operator*(double mult, const time& t){
	time result;
	long totalminutes = t.m_hours*mult * 60 + t.m_minutes*mult;
	result.m_hours = totalminutes / 60;
	result.m_minutes = totalminutes % 60;
	return result;
}
void time::operator<<(ostream& out){
	out << endl;
	out <<m_hours << "�ð�, " <<m_minutes << "��" << endl;
}
void time::show()const{ 
	cout << endl;
	cout << m_hours << "�ð�, " << m_minutes << "��" << endl; 
}
ostream& operator<<(ostream& out, const time& t){
	out << endl;
	out << t.m_hours << "�ð�, " << t.m_minutes << "��" << endl;
	return out;
}
void main(){

	cout << "201211305 ������" << endl;
	time T1;
	T1.reset(4, 50);
	T1.show();
	T1.addMin(100);
	T1.show();

	time T2(1, 30);
	time T3 = T1.operator+(T2);
	T3.show();
	
	time T4 = 2.5 * T2;
	T4.show();
	//T1 = T2.operator*(T1);

	T4 << cout;
	cout << T4; // �����ڰ� �ڿ��´� �ذ����� friend �Լ�
}