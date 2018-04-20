#include <iostream>
#include <cmath>

#include "circulo.h"

using namespace std;

Circulo::Circulo(){}

Circulo::~Circulo(){}

double Circulo::area(double raio){
	area = 3.1415*exp(raio);
	cout << "Area do Circulo: " << area << endl;
}

double Circulo::perimetro(double raio){
	perimetro = 2*3.1415*raio;
	cout << "Perimetro do Circulo: " << perimetro << endl;
}