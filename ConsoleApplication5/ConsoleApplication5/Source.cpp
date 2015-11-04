#include<iostream>
using namespace std;

class Shape{
public:
	void Move(double x, double y);
	virtual void Draw()const;

	Shape();
	Shape(double x, double y);
protected:
	double _x, _y;
};
void Shape::Move(double x, double y){
	_x = x; 
	_y = y;
}
void Shape::Draw() const{
	cout << "[Shape] Position = (" << _x << "," << _y << ")\n";
}
Shape::Shape()
	:_x(100), _y(100)
{

}
Shape::Shape(double x, double y)
	:_x(x), _y(y)
{

}

class Rectangle : public Shape{
public:
	void Draw() const;
	void Resize(double width, double heightt);

	Rectangle();
	Rectangle(double x, double y, double width, double height);
protected:
	double _width;
	double _height;
};
void Rectangle::Draw()const{
	cout << "[Rectangle] Position = (" << _x << "," << _y << ")"
		"Size = (" << _width << "," << _height << ")\n";
}
void Rectangle::Resize(double width, double height){
	_width = width;
	_height = height;
}
Rectangle::Rectangle()
	:_width(10), _height(10)
{

}
Rectangle::Rectangle(double x, double y, double width, double height)
	: Shape(x, y), _width(width), _height(height)
{

}

class Circle :public Shape{
public:
	void Draw() const;
	void SetRadius(double radius);

	Circle();
	Circle(double x, double y, double radius);
protected:
	double _radius;
};
void Circle::Draw()const{
	cout << "[Circle] Position = (" << _x << "," << _y << ")"
		"Radius = " << _radius << "\n";
}
void Circle::SetRadius(double radius)
	
{
	_radius = radius;
}
Circle::Circle()
:_radius(10)
{

}
Circle::Circle(double x, double y, double radius)
	: Shape(x, y), _radius(radius)
{

}
int main(){

	/*Shape shape(100, 100);
	shape.Draw();
	shape.Move(200, 200);
	shape.Draw();*/

	/*Shape shape(100, 100);
	Rectangle rect(50, 50, 100, 100);
	rect.Draw();
	rect.Move(300, 300);
	rect.Resize(50, 50);
	rect.Draw();*/


	Shape shape1(100, 100);
	Shape shape2(200, 200);
	Rectangle rect1(50, 50, 100, 100);
	Rectangle rec2(100, 150, 50, 80);
	Circle circle1(100, 100, 100);
	Circle circle2(50, 250, 100);

	
	//포인팅으로 바꿨지만 원하는 형태의 값이 안나온다
	Shape* shape[3];
	shape[0] = &shape1;
	shape[1] = &rect1;
	shape[2] = &circle1;

	for (int i = 0; i < 3; i++)
		shape[i]->Draw();
	
	return 0;
}