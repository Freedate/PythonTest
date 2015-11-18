#include <iostream>

using namespace std;

class Employee
{
protected:
	char* m_name;
	char* m_address;
	char* m_initDate;
public:
	Employee();
	Employee(const char* name, const char* address, const char* initDate);
	Employee(const Employee& emp);
	virtual ~Employee();
	virtual void show() const;
	virtual int getSalary() = 0; // ���������Լ��� �ȴ�. �Լ� body�� ��� error�� �ȳ���.
};

class R_Employee : public Employee
{
protected:
	int m_salary;
public:
	R_Employee();
	R_Employee(const char* name, const char* address, const char* initDate, const int& salary);
	R_Employee(const R_Employee& r_emp);
	~R_Employee();
	virtual void show() const;
	virtual int getSalary()
	{
		return m_salary;
	}
};

class S_Employee : public R_Employee
{
private:
	int m_result;
	float m_resultmoney;
public:
	S_Employee();
	S_Employee(const char* name, const char* address, const char* initDate, const int& salary, const float& resultmoney);
	S_Employee(const S_Employee& s_emp);
	~S_Employee();
	void show() const;
	void setSales(const int& num)
	{
		m_result += num;
	}
	virtual int getSalary()
	{
		return (m_result * m_resultmoney) + m_salary;
	}
};

class T_Employee : public Employee
{
private:
	int m_wdate;
	int m_dmoney;
public:
	T_Employee();
	T_Employee(const char* name, const char* address, const char* initDate, const int& dmoney);
	T_Employee(const T_Employee& t_emp);
	~T_Employee();
	void show() const;
	void setwDate(const int& num)
	{
		m_wdate += num;
	}
	virtual int getSalary()
	{
		return m_wdate * m_dmoney;
	}
};

Employee::Employee()
{
	cout << "���(Employee) Ŭ������ ����Ʈ ������" << endl;
	this->m_name = new char[strlen("noname") + 1];
	strcpy(m_name, "noname");
	this->m_address = new char[strlen("noaddress") + 1];
	strcpy(m_address, "noaddress");
	this->m_initDate = new char[strlen("noinitDate") + 1];
	strcpy(m_initDate, "noinitDate");
}
Employee::Employee(const char* name, const char* address, const char* initDate)
{
	cout << "���(Employee) Ŭ������ �����ִ� ������" << endl;
	this->m_name = new char[strlen(name) + 1];
	strcpy(m_name, name);
	this->m_address = new char[strlen(address) + 1];
	strcpy(m_address, address);
	this->m_initDate = new char[strlen(initDate) + 1];
	strcpy(m_initDate, initDate);
}
Employee::Employee(const Employee& emp)
{
	cout << "���(Employee) Ŭ������ ���� ������" << endl;
	this->m_name = new char[strlen(emp.m_name) + 1];
	strcpy(m_name, emp.m_name);
	this->m_address = new char[strlen(emp.m_address) + 1];
	strcpy(m_address, emp.m_address);
	this->m_initDate = new char[strlen(emp.m_initDate) + 1];
	strcpy(m_initDate, emp.m_initDate);
}
Employee::~Employee()
{
	cout << "���(Employee) Ŭ������ �Ҹ���" << endl;
	delete[] m_name;
	delete[] m_address;
	delete[] m_initDate;
}
void Employee::show() const
{
	cout << "�̸� : " << m_name << endl;
	cout << "�ּ� : " << m_address << endl;
	cout << "�Ի����� : " << m_initDate << endl;
}

R_Employee::R_Employee()
	:m_salary(0)
{
	cout << "�Ϲݻ��(R_Employee) Ŭ������ ����Ʈ ������" << endl;
}
R_Employee::R_Employee(const char* name, const char* address, const char* initDate, const int& salary)
	: Employee(name, address, initDate), m_salary(salary)
{
	cout << "�Ϲݻ��(R_Employee) Ŭ������ �����ִ� ������" << endl;
}
R_Employee::R_Employee(const R_Employee& r_emp)
	: Employee(r_emp), m_salary(r_emp.m_salary)
 // �ڽİ�ü�� �θ� ������ ����
{
	cout << "�Ϲݻ��(R_Employee) Ŭ������ ���� ������" << endl;
}
R_Employee::~R_Employee()
{
	cout << "�Ϲݻ��(R_Employee) Ŭ������ �Ҹ���" << endl;
}
void R_Employee::show() const
{
	cout << "���� : �Ϲ���" << endl;
	Employee::show();
	cout << "�޿� : " << m_salary << endl;
}

S_Employee::S_Employee()
	:m_result(0), m_resultmoney(0)
{
	cout << "�������(S_Employee) Ŭ������ ����Ʈ ������" << endl;
}
S_Employee::S_Employee(const char* name, const char* address, const char* initDate, const int& salary, const float& resultmoney)
	: R_Employee(name, address, initDate, salary), m_result(0), m_resultmoney(resultmoney)
{
	cout << "�������(S_Employee) Ŭ������ �����ִ� ������" << endl;
}
S_Employee::S_Employee(const S_Employee& s_emp)
	: R_Employee(s_emp), m_result(s_emp.m_result), m_resultmoney(s_emp.m_resultmoney)
	// �ڽİ�ü�� �θ� ������ ����
{
	cout << "�������(S_Employee) Ŭ������ ���� ������" << endl;
}
S_Employee::~S_Employee()
{
	cout << "�������(S_Employee) Ŭ������ �Ҹ���" << endl;
}
void S_Employee::show() const
{
	cout << "���� : ������" << endl;
	R_Employee::show();
	cout << "�������� : " << m_result << endl;
	cout << "�������� : " << m_resultmoney << endl;
}

T_Employee::T_Employee()
	:m_dmoney(0), m_wdate(0)
{
	cout << "�ӽû��(T_Employee) Ŭ������ ����Ʈ ������" << endl;
}
T_Employee::T_Employee(const char* name, const char* address, const char* initDate, const int& dmoney)
	: Employee(name, address, initDate), m_dmoney(dmoney), m_wdate(0)
{
	cout << "�ӽû��(T_Employee) Ŭ������ �����ִ� ������" << endl;
}
T_Employee::T_Employee(const T_Employee& t_emp)
	: Employee(t_emp), m_dmoney(t_emp.m_dmoney), m_wdate(t_emp.m_wdate)
	// �ڽİ�ü�� �θ� ������ ����
{
	cout << "�ӽû��(T_Employee) Ŭ������ ���� ������" << endl;
}
T_Employee::~T_Employee()
{
	cout << "�ӽû��(T_Employee) Ŭ������ �Ҹ���" << endl;
}
void T_Employee::show() const
{
	cout << "���� : �ӽ���" << endl;
	Employee::show();
	cout << "�ٹ��ϼ� : " << m_wdate << endl;
	cout << "�ϴ�޿� : " << m_dmoney << endl;
}

int main()
{
	cout << "201111254 �����" << endl;
	cout << endl;

	//���ȭ�� 1
	/*Employee emp1;
	emp1.show();
	Employee emp2("�����", "�泲 ���ؽ�", "2011��");
	emp2.show();
	Employee emp3(emp1);
	emp3.show();*/

	//���ȭ�� 2
	/*R_Employee r_emp1;
	r_emp1.show();
	R_Employee r_emp2("�����", "�泲 ���ؽ�", "2011��", 200);
	r_emp2.show();
	R_Employee r_emp3(r_emp2);
	r_emp3.show();*/

	//���ȭ�� 3 : �θ���� virtual�̱⶧���� R_Employee::show()�Լ��� ��µȴ�.
	/*Employee* emp = new R_Employee();
	emp->show();*/

	//���ȭ�� 4 : virtual �Ҹ���
	/*delete emp;*/

	//���ȭ�� 5
	/*S_Employee s_emp1;
	s_emp1.show();
	S_Employee s_emp2("�����", "�泲 ���ؽ�", "2011��", 200, 400);
	s_emp2.show();
	S_Employee s_emp3(s_emp2);
	s_emp3.show();*/

	//���ȭ�� 6
	/*T_Employee t_emp1;
	t_emp1.show();
	T_Employee t_emp2("�����", "�泲 ���ؽ�", "2011��", 2000000, 60000);
	t_emp2.show();
	T_Employee t_emp3(t_emp2);
	t_emp3.setwDate(3);
	t_emp3.show();*/


	//���ȭ�� 7
	R_Employee r_emp2("�����", "�泲 ���ؽ�", "2011��", 2000000);
	R_Employee r_emp3(r_emp2);
	r_emp3.show();
	cout << "�� �޿� : " << r_emp3.getSalary() << endl;
		
	S_Employee s_emp2("�����", "�泲 ���ؽ�", "2011��", 2000000, 40000);
	S_Employee s_emp3(s_emp2);
	s_emp3.setSales(2);
	s_emp3.show();
	cout << "�� �޿� : " << s_emp3.getSalary() << endl;
		
	T_Employee t_emp2("�����", "�泲 ���ؽ�", "2011��", 60000);
	T_Employee t_emp3(t_emp2);
	t_emp3.setwDate(3);
	t_emp3.show();
	cout << "�� �޿� : " << t_emp3.getSalary() << endl;
	return 0;
}