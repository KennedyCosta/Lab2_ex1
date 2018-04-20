#include <iostream>
#include <cmath>

#include "quadrado.h"

using namespace std;

Quadrado::Quadrado(){}

Quadrado::~Quadrado(){}

double Quadrado::area(double base){
	area = exp(base);
	cout << "Area do Quadrado: " << area << endl;
}

double Quadrado::perimetro(double base){
	perimetro = 4*base;
	cout << "Perimetro do Quadrado: " << perimetro << endl;
}