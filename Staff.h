#include "Persona.h"
class Staff: public Persona{
	private:
		string badge;
	public:
		Staff(string n, string c, string b);
		
		string getBadge();
		void setBadge(string b);
		void print();
};
