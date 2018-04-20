#ifndef QUADRADO_H
#define QUADRADO_H

class Quadrado
{
private:
	double base;
public:
	Quadrado();
	~Quadrado();

	double area(double base);	
	double perimetro(double base);	

};

#endif