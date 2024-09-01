#include "ManejadorCalzado.h"
#include <iostream>
using namespace std;

void ManejadorCalzado::compararCalzado(Calzado cal1, Calzado cal2)
{
	//Comparamos si los calzados son pares
	if (cal1.esParDe(cal2))
	{
		cout << "Es un par correcto" <<endl;
	}
	else
	{
		cout << "No es un par " << endl;
	}
}
