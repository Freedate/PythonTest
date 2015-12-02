#include<iostream>
#include<conio.h>
using namespace std;
template<typename T>
class PFArrayD
{
protected:
	T* a;
	int capacity;
	int used;
public:
	PFArrayD();
	PFArrayD(const int& size);
	PFArrayD(const PFArrayD& arr);
	virtual ~PFArrayD(); //소멸자는 virtual 로 만들어줌
	void addElement(T element);
	bool full() const;
	int getCapacity() const;
	int getNumberUSed() const;
	void emptyArray();
	friend ostream& operator<<(ostream& out, const PFArrayD<T>& arr);
	T operator[](const int& index);
	void operator=(const PFArrayD<T>& arr);//앞에는 나고 뒤에도 똑같이 생긴 애가 들어옴
};
template<typename T>
class pfarraydbak : public PFArrayD<T>
{
private:
	T* b;
	int usedb;
public:
	pfarraydbak();
	pfarraydbak(const int& size);
	pfarraydbak(const pfarraydbak<T>& arr);
	~pfarraydbak();
	void backup();
	void restore();
	void operator=(const pfarraydbak<T>& arr);
};

template<typename T>
pfarraydbak<T>::pfarraydbak()
	:usedb(0)
{
	b = new  T[capacity]; //부모에서 초기화시킨 값 그대로
}
template<typename T>
pfarraydbak<T>::pfarraydbak(const int& size) //size는 내꺼 아니라서 부모한테 넘김
	: pfarrayd(size), usedb(0)
{
	b = new T[capacity];
}
template<typename T>
pfarraydbak<T>::pfarraydbak(const pfarraydbak<T>& arr)
	: pfarrayd(arr), usedb(arr.usedb)
{
	b = new T[capacity];
	for (int i = 0; i<usedb; i++)
		b[i] = arr.b[i];  //백업용
}
template<typename T>
pfarraydbak<T>::~pfarraydbak()
{
	delete[] b;
}
template<typename T>
void pfarraydbak<T>::backup()
{
	usedb = used;
	for (int i = 0; i<usedb; i++)
		b[i] = a[i];
}
template<typename T>
void pfarraydbak<T>::restore()
{
	used = usedb;
	for (int i = 0; i<used; i++)
		a[i] = b[i];
}
template<typename T>
void pfarraydbak<T>::operator=(const pfarraydbak<T>& arr)
{
	PFArrayD<T>::operator=(arr);
	if (capacity != arr.capacity)
	{
		delete[] b;
		b = new  T[capacity];
	}
	usedb = arr.usedb;
	for (int i = 0; i<usedb; i++)
		b[i] = arr.b[i];
}
template<typename T>
PFArrayD<T>::PFArrayD()
	:capacity(10), used(0)
{
	this->a = new T[this->capacity];
}
template<typename T>
PFArrayD<T>::PFArrayD(const int& size)
	: capacity(size), used(0)
{
	this->a = new T[this->capacity];
}
template<typename T>
PFArrayD<T>::PFArrayD(const PFArrayD& arr)
	: capacity(arr.capacity), used(arr.used)
{
	a = new T[capacity];
	for (int i = 0; i<used; i++)
	{
		a[i] = arr.a[i];
	}
}
template<typename T>
PFArrayD<T>::~PFArrayD()
{
	delete[] a;
}
template<typename T>
void PFArrayD<T>::addElement(T element)
{
	if (used < capacity)
		a[used++] = element;
	else
		cout << "빈 공간이 없음" << endl;
}

template<typename T>
 bool PFArrayD<T>::full() const
{
	if (used == capacity)
		return true;
	else
		return false;
}

 template<typename T>
int PFArrayD<T>::getCapacity() const
{
	return capacity;
}

template<typename T>
int PFArrayD<T>::getNumberUSed() const
{
	return used;
}

template<typename T>
void PFArrayD<T>::emptyArray()
{
	used = 0;
}

template<typename T>
ostream& PFArrayD<T>::operator<<(ostream& out, const PFArrayD<T>& arr)
{
	for (int i = 0; i<arr.getNumberUSed(); i++)
		out << arr.a[i] << endl;
	return out;
}

template<typename T>
T PFArrayD<T>::operator[](const int& index)
{
	if (index >= used)
	{
		cout << "배열을 잘 못 참조했습니다." << endl;
		exit(0);
	}
	return a[index];
}
template<typename T>
void PFArrayD<T>::operator=(const PFArrayD<T>& arr)
{
	used = arr.used;
	if (capacity != arr.capacity)
	{
		capacity = arr.capacity;
		delete[] a;
		a = new T[capacity];
	}
	for (int i = 0; i<used; i++)
		a[i] = arr.a[i];
}
int main()
{
	cout << "201511198 배진영" << endl;
	PFArrayD<int> arr1(10);
	PFArrayD<double> arr2(5);
	arr1.addElement(10);
	arr1.addElement(20);
	arr1.addElement(30);

	for (int i = 0; i < arr1.getNumberUSed(); i++)
	{
		cout << arr1[i] << endl;
	}


	return 0;
}
