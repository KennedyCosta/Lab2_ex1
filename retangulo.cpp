#include <iostream>

#include "retangulo.h"

using namespace std;

Retangulo::Retangulo(){}

Retangulo::~Retangulo(){}

double Retangulo::area(double base, double altura){
	area = base*altura;
	cout << "Area do Retangulo: " << area << endl;
}

double Retangulo::perimetro(double base, double altura){
	perimetro = 2*(base+altura);
	cout << "Perimetro do Retangulo: " << perimetro << endl;
}