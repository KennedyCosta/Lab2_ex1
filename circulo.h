#ifndef CIRCULO_H
#define CIRCULO_H

class Circulo
{
private:
	double raio;
public:
	Circulo();
	~Circulo();

	double area(double raio);
	double perimetro(double raio);	

};

#endif