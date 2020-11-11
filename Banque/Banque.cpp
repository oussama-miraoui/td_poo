#include <iostream>
#include "Compte.h"
using namespace std;
int main()
{
	Compte c1(50003,"Ahmed Amine",8050.75);
	Compte c2;
	c1.deposerArgent(12000);
	c1.consulterSolde();

	//transfer de c1 a c2 
	c1.transferArgent(c2, 2000);
	//consulter solde de c1 et c2 après le transfert
	c1.consulterSolde();
	c2.consulterSolde();
}


