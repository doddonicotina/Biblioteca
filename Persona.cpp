#include "Persona.h"

Persona::Persona(string n, string c):nome(n),cognome(c)
{
	std::cout<<"parametric constructor \n";
}

string Persona:: getNome()
{
	return nome;
}

void Persona:: setNome(string n)
{	
	nome=n;
}

string Persona:: getCognome()
{
	return cognome;
}

void Persona:: setCognome(string c)
{
	cognome=c;
}

void Persona:: print(){
	std::cout<<"Nome: "<<nome<<" Cognome: "<<cognome;
}
