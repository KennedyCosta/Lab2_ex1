#include <iostream>
#include <cmath>

#include "esfera.h"

using namespace std;

Esfera::Esfera(){}

Esfera::~Esfera(){}

double Esfera::area(double raio){
	area = 4*3.1415*exp(raio);
	cout << "Area da Esfera: " << area << endl;
}

double Esfera::volume(double raio){
	volume = (4*3.1415*pow(raio,3))/3;
	cout << "Volume da Esfera: " << volume << endl;
}