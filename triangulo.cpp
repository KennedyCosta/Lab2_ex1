#include <iostream>

#include "triangulo.h"

using namespace std;

Triangulo::Triangulo(){}

Triangulo::~Triangulo(){}

double Triangulo::area(double base, double altura){
	area = (base*altura)/2;
	cout << "Area do Triangulo: " << area << endl;
}

double Triangulo::perimetro(double base, double altura){
	perimetro = base*3;
	cout << "Perimetro do Triangulo: " << perimetro << endl;
}