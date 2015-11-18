#include <iostream>
using namespace std;

class Employee{
protected:
	char* m_name;
	char* m_addr;
	char* m_data;
public:
	Employee();
	Employee(const char* name, const char* addr, const char* data);
	Employee(const Employee& emp);
	~Employee();
	void show() const;
};
Employee::Employee(){
	cout << "Employee ����Ʈ ������" << endl;
	m_name = new char[strlen("nolnfo") + 1];
	strcpy(m_name, "nolnfo");
	m_addr = new char[strlen("nolnfo") + 1];
	strcpy(m_addr, "nolnfo");
	m_data = new char[strlen("nolnfo") + 1];
	strcpy(m_data, "nolnfo");

}
Employee::Employee(const char* name, const char* addr, const char* data){
	cout << "Employee �����ִ� ������" << endl;
	m_name = new char[strlen(name) + 1];
	strcpy(m_name, name);
	m_addr = new char[strlen(addr) + 1];
	strcpy(m_addr, addr);
	m_data = new char[strlen(data) + 1];
	strcpy(m_data, data);

}
Employee::Employee(const Employee& emp){
	cout << "Employee ���� ������" << endl;
	m_name = new char[strlen(emp.m_name) + 1];
	strcpy(m_name, emp.m_name);
	m_addr = new char[strlen(emp.m_addr) + 1];
	strcpy(m_addr, emp.m_addr);
	m_data = new char[strlen(emp.m_data) + 1];
	strcpy(m_data, emp.m_data);
}
Employee::~Employee(){
	cout << "Employee �Ҹ���" << endl;
	delete[] m_name;
	delete[] m_addr;
	delete[] m_data;
}
void Employee::show() const{
	cout << "��    �� : " << m_name << endl;
	cout << "��    �� : " << m_addr << endl;
	cout << "�Ի����� : " << m_data << endl;
}
int main(){

	cout << "201511180 ����" << endl;
	
	return 0;

}