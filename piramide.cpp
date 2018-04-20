#include <iostream>
#include <cmath>

#include "piramide.h"

using namespace std;

Piramide::Piramide(){}

Piramide::~Piramide(){}

double Piramide::area(double aresta_base, double altura){
	area = 3.1415*exp(raio);
	cout << "Area da Piramide: " << area << endl;
}

double Piramide::perimetro(double aresta_base, double altura)){
	volume = 2*3.1415*raio;
	cout << "Volume da Piramide: " << volume << endl;
}