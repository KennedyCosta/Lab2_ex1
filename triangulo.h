#ifndef TRIANGULO_H
#define TRIANGULO_H

class Triangulo
{
private:
	double base;
	double altura;
public:
	Triangulo();
	~Triangulo();

	double area(double base, double altura);	
	double perimetro(double base, double altura);	

};

#endif