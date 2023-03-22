#include<iostream>
#include <string>
using namespace std;

class Figure {
	int side = 0;
	string name = "Фигура: ";
public:
	int n;
	Figure(int n, string f) : side(n), name(f) {}
	Figure(){}
	int getx() { return side;}
	string gets() { return name; }
};
class Triangle : public Figure {
public: 
	Triangle() :Figure(3, "Треугольник: ") {}
};
class Quadrilateral:public Figure{
public:
	Quadrilateral ():Figure(4, "Четырехугольник: ") {}
};

int main() {

	setlocale(LC_ALL, "Russian");

	cout << "Количество сторон:" << endl;
	Figure fig;
	cout <<  fig.gets() << fig.getx() << endl;

	Triangle tri;
	cout << tri.gets()  << tri.getx() << endl;

	Quadrilateral qua;
	cout << qua.gets()  << qua.getx() << endl;
}