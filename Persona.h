#ifndef __PERSONA_H__
#define	__PERSONA_H__
#include <iostream>
using namespace std;

class Persona{
	private:
		string nome;
		string cognome;
	public:
		Persona(string n, string c);
		
		string getNome();
		void setNome(string n);
		
		string getCognome();
		void setCognome(string c);
		
		
		virtual void print();
		

};


#endif
