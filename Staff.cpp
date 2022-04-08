#include "Staff.h"

Staff::Staff(string n, string c, string b):Persona(n,c),badge(b)
{
	std::cout<<"derivated parametric constructor \n";
}

string Staff::getBadge()
{
	return badge;
}

void Staff::setBadge(string b)
{
	badge=b;
}

void Staff::print()
{
	Persona::print();
	std::cout<<" Badge: "<<badge<<" \n";
}
