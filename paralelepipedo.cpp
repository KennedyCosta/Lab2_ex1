#include <iostream>
#include <cmath>

#include "paralelepipedo.h"

using namespace std;

Paralelepipedo::Paralelepipedo(){}

Paralelepipedo::~Paralelepipedo(){}

double Paralelepipedo::area(double aresta1, double aresta2, double aresta3){
	area = 2*aresta1*aresta2 + 2*aresta1*aresta3 + 2*aresta3*aresta2;
	cout << "Area do Paralelepipedo: " << area << endl;
}

double Paralelepipedo::volume(double aresta1, double aresta2, double aresta3){
	volume = aresta1*aresta2*aresta3;
	cout << "Volume do Paralelepipedo: " << volume << endl;
}