#include <iostream>
using namespace std;

class Point{
private:
	int m_x;
	int m_y;
public:
	Point();
	~Point();
	Point(int x, int y);
	void setXY(int x, int y);
	void move(int delta);
	void draw() const;
	int getX() const { return m_x; }
	int getY() const { return m_y; }
};

Point::Point()
	:m_x(0), m_y(0)
{
	cout << "Point 디폴트 생성자" << endl;
	//m_x = 0;
	//m_y = 0;
}
Point::~Point()
{
	cout << "Point 소멸자" << endl;

}
Point::Point(int x, int y)
	:m_x(x), m_y(y)
{
	cout << "Point 인자 있는 생성자" << endl;
	//m_x = 0;
	//m_y = 0;
}
void Point::setXY(int x, int y){
	m_x = x;
	m_y = y;

}
void Point::move(int delta){
	m_x += delta;
	m_y += delta;

}
void Point::draw() const{
	cout << getX() << " : " << getY() << endl;

}

class Rectangle{
private:
	Point m_leftTop;
	Point m_rightBottom;
	const int m_ptNumber;
public:
	Rectangle();
	~Rectangle();
	Rectangle(int x1, int y1, int x2, int y2);
	void setRect(int x1, int y1, int x2, int y2);
	void draw() const;

};

void Rectangle::setRect(int x1, int y1, int x2, int y2){
	if (x1 < x2 && y1 < y2){
		m_leftTop.setXY(x1, y1);
		m_rightBottom.setXY(x2, y2);
	}
	else
		cout << "조건에 맞지 않는 값들입니다." << endl;
}
void Rectangle::draw() const{
	m_leftTop.draw();
	cout << m_rightBottom.getX() << " : " << m_leftTop.getY() << endl;
	cout << m_leftTop.getX() << " : " << m_rightBottom.getY() << endl;
	m_rightBottom.draw();
}
Rectangle::Rectangle(int x1, int y1, int x2, int y2)
	: m_leftTop(x1, y1), m_rightBottom(x2, y2), m_ptNumber(2)
{
	cout << "Rect 인자 있는 생성자" << endl;
	//m_leftTop.setXY(x1, y1);
	//m_rightBottom.setXY(x2, y2);
}
Rectangle::Rectangle()
	: m_leftTop(0, 0), m_rightBottom(10, 10), m_ptNumber(2)
{
	cout << "Rect 디폴트 생성자" << endl;
	//m_leftTop.setXY(x1, y1);
	//m_rightBottom.setXY(x2, y2);
}
Rectangle::~Rectangle()
{
	cout << "Rect 소멸자" << endl;

}
int main(){

	cout << "201511234 김윤상" << endl;

	Rectangle* rect = new Rectangle();
	rect->draw();

	delete rect;

	return 0;
}
