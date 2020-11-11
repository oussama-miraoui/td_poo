#pragma once
#include <string>
using namespace std;
class Compte
{
public:
	Compte();
	Compte(int num, string nom , double solde);
	bool retirerArgent(double mt);
	void deposerArgent(double mt);
	void consulterSolde();
	Compte transferArgent(Compte& c, double somme);

private:
	 int numCompte;
	 string nomProp;
	 double solde;
};

