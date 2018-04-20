#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>

#include "funcoes.h"

using namespace std;


void Funcoes::Opcoes(string geometria){
	char figura;

 	do {
		cout << figura;
		cout << "1 - Triangulo\n";
		cout << "2 - Retangulo\n";
		cout << "3 - Quadrado\n";
		cout << "4 - Circulo\n";
		cout << "5 - Piramide\n";
		cout << "6 - Cubo\n";
		cout << "7 - Paralelepipedo\n";
		cout << "8 - Esfera\n";
		cout << "9 - Encerrar programa\n\n";
		cout << "Opcao: \n";
		
		cin>>figura;
		cin.ignore(); 
		 
		switch(figura)
		{
			case '1': Triangulo();
					break;
			case '2': Retangulo();
					break;
			case '3': Quadrado();
					break;
			case '4': Circulo();
					break;
			case '5': Piramide();
					break;
			case '6': Cubo();
					break;
			case '7': Paralelepipedo();
					break;
			case '8': Esfera();
					break;
			case '9':
					break;

			default : cout << "Opcao invalida!\n";
		}
		cout<<"\n";
	} while (figura!='9');
	return figura;
}

void
Funcoes::Triangulo (){

	double base, altura, area, perimetro;

	cout << "Digite a base e a altura: \n";
	cin >> base;
	cin >> altura;

	area = (base*altura)/2;
	perimetro = base*3;

	cout << "Area do Triangulo: " << area << endl;
	cout << "Perimetro do Triangulo: " << perimetro << endl;
}

void
Funcoes::Retangulo (){

	double base, altura, area, perimetro;

	cout << "Digite a base e a altura: \n";
	cin >> base;
	cin >> altura;

	area = base*altura;
	perimetro = 2*(base+altura);

	cout << "Area do Retangulo: " << area << endl;
	cout << "Perimetro do Retangulo: " << perimetro << endl;

}

void
Funcoes::Quadrado (){

	double base, area, perimetro;

	cout << "Digite a base: \n";
	cin >> base;

	area = exp(base);
	perimetro = 4*base;

	cout << "Area do Quadrado: " << area << endl;
	cout << "Perimetro do Quadrado: " << perimetro << endl;

}

void
Funcoes::Circulo (){

	double raio, area, perimetro;

	cout << "Digite o raio: \n";
	cin >> raio;

	area = 3.1415*exp(raio);
	perimetro = 2*3.1415*raio;

	cout << "Area do Circulo: " << area << endl;
	cout << "Perimetro do Circulo: " << perimetro << endl;

}

void
Funcoes::Piramide (){

	double aresta_base, altura, area, volume;

	cout << "Digite a aresta da base e a altura: \n";
	cin >> aresta_base;
	cin >> altura;

	area = exp(aresta_base) + (aresta_base*altura)/2;
	volume = (altura*exp(aresta_base))/3;

	cout << "Area da Piramide: " << area << endl;
	cout << "Volume da Piramide: " << volume << endl;

}

void
Funcoes::Cubo (){

	double aresta, area, volume;

	cout << "Digite a aresta: \n";
	cin >> aresta;

	area = 6*exp(aresta);
	volume = pow(aresta, 3);

	cout << "Area do Cubo: " << area << endl;
	cout << "Volume do Cubo: " << volume << endl;

}

void
Funcoes::Paralelepipedo (){

	double aresta1, aresta2, aresta3, area, volume;

	cout << "Digite as 3 arestas: \n";
	cin >> aresta1;
	cin >> aresta2;
	cin >> aresta3;

	area = 2*aresta1*aresta2 + 2*aresta1*aresta3 + 2*aresta3*aresta2;
	volume = aresta1*aresta2*aresta3;

	cout << "Area do Paralelepipedo: " << area << endl;
	cout << "Volume do Paralelepipedo: " << volume << endl;

}

void
Funcoes::Esfera (){

	double raio, area, volume;

	cout << "Digite o raio: \n";
	cin >> raio;

	area = 4*3.1415*exp(raio);
	volume = (4*3.1415*pow(raio,3))/3;

	cout << "Area da Esfera: " << area << endl;
	cout << "Volume da Esfera: " << volume << endl;

}