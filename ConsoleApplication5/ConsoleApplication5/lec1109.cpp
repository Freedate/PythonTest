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
	virtual int getSalary() = 0; // 순수가상함수가 된다. 함수 body가 없어도 error가 안난다.
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
	cout << "사원(Employee) 클래스의 디폴트 생성자" << endl;
	this->m_name = new char[strlen("noname") + 1];
	strcpy(m_name, "noname");
	this->m_address = new char[strlen("noaddress") + 1];
	strcpy(m_address, "noaddress");
	this->m_initDate = new char[strlen("noinitDate") + 1];
	strcpy(m_initDate, "noinitDate");
}
Employee::Employee(const char* name, const char* address, const char* initDate)
{
	cout << "사원(Employee) 클래스의 인자있는 생성자" << endl;
	this->m_name = new char[strlen(name) + 1];
	strcpy(m_name, name);
	this->m_address = new char[strlen(address) + 1];
	strcpy(m_address, address);
	this->m_initDate = new char[strlen(initDate) + 1];
	strcpy(m_initDate, initDate);
}
Employee::Employee(const Employee& emp)
{
	cout << "사원(Employee) 클래스의 복사 생성자" << endl;
	this->m_name = new char[strlen(emp.m_name) + 1];
	strcpy(m_name, emp.m_name);
	this->m_address = new char[strlen(emp.m_address) + 1];
	strcpy(m_address, emp.m_address);
	this->m_initDate = new char[strlen(emp.m_initDate) + 1];
	strcpy(m_initDate, emp.m_initDate);
}
Employee::~Employee()
{
	cout << "사원(Employee) 클래스의 소멸자" << endl;
	delete[] m_name;
	delete[] m_address;
	delete[] m_initDate;
}
void Employee::show() const
{
	cout << "이름 : " << m_name << endl;
	cout << "주소 : " << m_address << endl;
	cout << "입사일자 : " << m_initDate << endl;
}

R_Employee::R_Employee()
	:m_salary(0)
{
	cout << "일반사원(R_Employee) 클래스의 디폴트 생성자" << endl;
}
R_Employee::R_Employee(const char* name, const char* address, const char* initDate, const int& salary)
	: Employee(name, address, initDate), m_salary(salary)
{
	cout << "일반사원(R_Employee) 클래스의 인자있는 생성자" << endl;
}
R_Employee::R_Employee(const R_Employee& r_emp)
	: Employee(r_emp), m_salary(r_emp.m_salary)
 // 자식객체는 부모가 담을수 있음
{
	cout << "일반사원(R_Employee) 클래스의 복사 생성자" << endl;
}
R_Employee::~R_Employee()
{
	cout << "일반사원(R_Employee) 클래스의 소멸자" << endl;
}
void R_Employee::show() const
{
	cout << "직급 : 일반직" << endl;
	Employee::show();
	cout << "급여 : " << m_salary << endl;
}

S_Employee::S_Employee()
	:m_result(0), m_resultmoney(0)
{
	cout << "영업사원(S_Employee) 클래스의 디폴트 생성자" << endl;
}
S_Employee::S_Employee(const char* name, const char* address, const char* initDate, const int& salary, const float& resultmoney)
	: R_Employee(name, address, initDate, salary), m_result(0), m_resultmoney(resultmoney)
{
	cout << "영업사원(S_Employee) 클래스의 인자있는 생성자" << endl;
}
S_Employee::S_Employee(const S_Employee& s_emp)
	: R_Employee(s_emp), m_result(s_emp.m_result), m_resultmoney(s_emp.m_resultmoney)
	// 자식객체는 부모가 담을수 있음
{
	cout << "영업사원(S_Employee) 클래스의 복사 생성자" << endl;
}
S_Employee::~S_Employee()
{
	cout << "영업사원(S_Employee) 클래스의 소멸자" << endl;
}
void S_Employee::show() const
{
	cout << "직급 : 영업직" << endl;
	R_Employee::show();
	cout << "영업실적 : " << m_result << endl;
	cout << "영업수당 : " << m_resultmoney << endl;
}

T_Employee::T_Employee()
	:m_dmoney(0), m_wdate(0)
{
	cout << "임시사원(T_Employee) 클래스의 디폴트 생성자" << endl;
}
T_Employee::T_Employee(const char* name, const char* address, const char* initDate, const int& dmoney)
	: Employee(name, address, initDate), m_dmoney(dmoney), m_wdate(0)
{
	cout << "임시사원(T_Employee) 클래스의 인자있는 생성자" << endl;
}
T_Employee::T_Employee(const T_Employee& t_emp)
	: Employee(t_emp), m_dmoney(t_emp.m_dmoney), m_wdate(t_emp.m_wdate)
	// 자식객체는 부모가 담을수 있음
{
	cout << "임시사원(T_Employee) 클래스의 복사 생성자" << endl;
}
T_Employee::~T_Employee()
{
	cout << "임시사원(T_Employee) 클래스의 소멸자" << endl;
}
void T_Employee::show() const
{
	cout << "직급 : 임시직" << endl;
	Employee::show();
	cout << "근무일수 : " << m_wdate << endl;
	cout << "일당급여 : " << m_dmoney << endl;
}

int main()
{
	cout << "201111254 강명수" << endl;
	cout << endl;

	//결과화면 1
	/*Employee emp1;
	emp1.show();
	Employee emp2("강명수", "경남 김해시", "2011년");
	emp2.show();
	Employee emp3(emp1);
	emp3.show();*/

	//결과화면 2
	/*R_Employee r_emp1;
	r_emp1.show();
	R_Employee r_emp2("강명수", "경남 김해시", "2011년", 200);
	r_emp2.show();
	R_Employee r_emp3(r_emp2);
	r_emp3.show();*/

	//결과화면 3 : 부모것은 virtual이기때문에 R_Employee::show()함수가 출력된다.
	/*Employee* emp = new R_Employee();
	emp->show();*/

	//결과화면 4 : virtual 소멸자
	/*delete emp;*/

	//결과화면 5
	/*S_Employee s_emp1;
	s_emp1.show();
	S_Employee s_emp2("강명수", "경남 김해시", "2011년", 200, 400);
	s_emp2.show();
	S_Employee s_emp3(s_emp2);
	s_emp3.show();*/

	//결과화면 6
	/*T_Employee t_emp1;
	t_emp1.show();
	T_Employee t_emp2("강명수", "경남 김해시", "2011년", 2000000, 60000);
	t_emp2.show();
	T_Employee t_emp3(t_emp2);
	t_emp3.setwDate(3);
	t_emp3.show();*/


	//결과화면 7
	R_Employee r_emp2("강명수", "경남 김해시", "2011년", 2000000);
	R_Employee r_emp3(r_emp2);
	r_emp3.show();
	cout << "총 급여 : " << r_emp3.getSalary() << endl;
		
	S_Employee s_emp2("강명수", "경남 김해시", "2011년", 2000000, 40000);
	S_Employee s_emp3(s_emp2);
	s_emp3.setSales(2);
	s_emp3.show();
	cout << "총 급여 : " << s_emp3.getSalary() << endl;
		
	T_Employee t_emp2("강명수", "경남 김해시", "2011년", 60000);
	T_Employee t_emp3(t_emp2);
	t_emp3.setwDate(3);
	t_emp3.show();
	cout << "총 급여 : " << t_emp3.getSalary() << endl;
	return 0;
}