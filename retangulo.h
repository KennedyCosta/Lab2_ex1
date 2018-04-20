#ifndef RETANGULO_H
#define RETANGULO_H

class Retangulo
{
private:
	double base;
	double altura;
public:
	Retangulo();
	~Retangulo();

	double area(double base, double altura);	
	double perimetro(double base, double altura);	

};

#endif