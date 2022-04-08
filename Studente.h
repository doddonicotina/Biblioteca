#include "Persona.h"

class Studente : public Persona{
		private:
			string matricola;
		public:
			Studente(string n, string c, string m);
			
			string getMatricola();
			void setMatricola(string m);
			void print();
	
};



