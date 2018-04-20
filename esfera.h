#ifndef ESFERA_H
#define ESFERA_H

class Esfera
{
private:
	double raio;
public:
	Esfera();
	~Esfera();

	double area(double raio);
	double volume(double raio);

};

#endif