// JuegoCalzado.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Calzado.h"
#include "ManejadorCalzado.h"
using namespace std;

int main()
{
  Calzado a(40, 'D');
  Calzado b(40, 'I');
  ManejadorCalzado m;
  m.compararCalzado(a, b);
  while (true) {
	  a.randomizar();
	  b.randomizar();
	  cout<<"Indique si a es par de b"<<endl;
	  a.VerDatos();
	  b.VerDatos();
	  int resp;
	  cin >> resp;
	 if(a.esParDe(b) && resp==1 || (!a.esParDe(b) && resp==0))
	  {
		  cout<<"Adivinaste"<<endl;
	  }
	  else
		  cout<<"No adivinaste"<<endl;

		

  }
	
  return 0;
}
