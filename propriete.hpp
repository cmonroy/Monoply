#ifndef ProprieteHeader
#define ProprieteHeader
#include "case.hpp"


#include <iostream> //normalement � �viter (dans ce cas, il faudrait �viter l'inline)
#include <string> 
#include "joueur.hpp" //normalement � �viter (dans ce cas, il faudrait �viter l'inline)

class Propriete : public Case
{
	int prix;
	Joueur* proprio;
protected:
	virtual int getLoyer() = 0; // exemple de fonction membre virtuelle pure (du coup, Propriete devient une classe abstraite - qui ne peut pas �tre instanci�e)
public :
	Propriete(std::string n, int p) : Case(n), prix(p), proprio(nullptr) {}
	/*virtual */ void landOnBy(Joueur& arrivant){
		//logique d'achat/loyer
		if (proprio != nullptr){
			if (proprio != &arrivant){
				int l = getLoyer();
				arrivant.debit(l);
				proprio->credit(l);

				std::cout << " !!!!!! Achat !!!!! " << std::endl;
			}
			else { /*rien � faire, je suis chez moi!*/ }
		}
		else{
			proprio = &arrivant; //il ach�te
			arrivant.debit(prix);

			std::cout << " !!!!!! Paie loyer !!!!! " << std::endl;
		}
	
	}


};

#endif




