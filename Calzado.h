#pragma once
class Calzado
{
	//declaracion de la clase 
	//declaracion de los atributos
private:
	int talla;
	char LadoPie;
public:
	//declaracion de los metodos
	
	Calzado(int _tam, char _lado);

	bool esParDe(Calzado cal1);
	void VerDatos();
	void randomizar();
	

};

