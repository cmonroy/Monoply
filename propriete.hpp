#ifndef ProprieteHeader
#define ProprieteHeader
#include "case.hpp"


#include <iostream> //normalement à éviter (dans ce cas, il faudrait éviter l'inline)
#include <string> 
#include "joueur.hpp" //normalement à éviter (dans ce cas, il faudrait éviter l'inline)

class Propriete : public Case
{
	int prix;
	Joueur* proprio;
protected:
	virtual int getLoyer() = 0; // exemple de fonction membre virtuelle pure (du coup, Propriete devient une classe abstraite - qui ne peut pas être instanciée)
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
			else { /*rien à faire, je suis chez moi!*/ }
		}
		else{
			proprio = &arrivant; //il achète
			arrivant.debit(prix);

			std::cout << " !!!!!! Paie loyer !!!!! " << std::endl;
		}
	
	}


};

#endif




