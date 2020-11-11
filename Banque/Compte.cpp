#include "Compte.h"
#include <iostream>
using namespace std;

Compte::Compte()
{
	this->numCompte = 0;
	this->nomProp = "";
	this->solde = 0.0;
}
Compte::Compte(int num, string nom, double solde)
{
	this->numCompte = num;
	this->nomProp = nom;
	this->solde = solde;
}
bool Compte::retirerArgent(double mt)
{
    if (this->solde <= 0) 
	{
        return false;
	}
	else
	{
		this->solde = this->solde - mt;
		return true;
	}
}

void Compte::deposerArgent(double mt)
{
	this->solde = this->solde + mt;
}

void Compte::consulterSolde()
{
	cout << "Le solde actuel est: " << this->solde << endl;
}

Compte Compte::transferArgent(Compte& c, double somme)
{
	this->retirerArgent(somme);
	c.deposerArgent(somme);
	return c;
}
