#ifndef PARALELEPIPEDO_H
#define PARALELEPIPEDO_H

class Paralelepipedo
{
private:
	double aresta1;
	double aresta2;
	double aresta3;
public:
	Paralelepipedo();
	~Paralelepipedo();

	double area(double aresta1, double aresta2, double aresta3);
	double volume(double aresta1, double aresta2, double aresta3);

};

#endif