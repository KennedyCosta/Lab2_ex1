#include <iostream>
#include <cmath>

#include "cubo.h"

using namespace std;

Cubo::Cubo(){}

Cubo::~Cubo(){}

double Cubo::area(double aresta_base, double altura)){
	area = 6*exp(aresta);
	cout << "Area do Cubo: " << area << endl;
}

double Cubo::volume(double aresta_base, double altura)){
	volume = pow(aresta, 3);
	cout << "Volume do Cubo: " << volume << endl;
}

