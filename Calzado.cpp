#include "Calzado.h"
#include <iostream>
using namespace std;


Calzado::Calzado(int _tam, char _lado)
{
	
	talla = _tam;
	LadoPie = _lado;
}

bool Calzado::esParDe(Calzado cal1)
{
	if (talla == cal1.talla && LadoPie != cal1.LadoPie)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void Calzado::VerDatos()
{
	cout << "Talla es " << talla << " lado es " << LadoPie << endl;
}
void Calzado::randomizar()
{
	talla = rand() % 6 + 40;
	LadoPie = rand() % 2 == 0 ? 'D' : 'I';
}