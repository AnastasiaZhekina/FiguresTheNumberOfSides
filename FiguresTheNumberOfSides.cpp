#include<iostream>
using namespace std;

class Figure {
	int side = 0;
public:
	int n;
	Figure(int n ) : side(n) {}
	Figure(){}
	int getx() { return side;}
};
class Triangle : public Figure {
public: 
	Triangle() :Figure(3) {}
};
class Quadrilateral:public Figure{
public:
	Quadrilateral ():Figure(4){}
};

int main() {

	setlocale(LC_ALL, "Russian");

	cout << "Количество сторон:" << endl;
	Figure fig;
	cout << "Фигура: " << fig.getx() << endl;

	Triangle tri;
	cout << "Треугольник: " << tri.getx() << endl;

	Quadrilateral qua;
	cout << "Четырёхугольник: " << qua.getx() << endl;
}