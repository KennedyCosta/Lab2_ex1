#ifndef CUBO_H
#define CUBO_H

class Cubo
{
private:
	double aresta;
public:
	Cubo();
	~Cubo();

	double area(double aresta);
	double volume(double aresta);	

};

#endif