#include "Studente.h"

Studente::Studente(string n, string c, string m):Persona(n,c),matricola(m)
{
	std::cout<<"derivated parametric constructor \n";
}

string Studente::getMatricola()
{
	return matricola;
}

void Studente::setMatricola(string m)
{
	matricola=m;
}

void Studente::print()
{
	Persona::print();
	std::cout<<" Matricola: "<<matricola<<" \n";
}
