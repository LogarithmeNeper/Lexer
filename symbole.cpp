#include "symbole.h"
#include <iostream>

void Symbole::Affiche() {
   cout<<Etiquettes[ident];
}

void Entier::Affiche() {
   Symbole::Affiche();
   cout<<"("<<valeur<<")";
}

int Entier::getValue() {
   return valeur;
}

int Symbole::getValue() {
   return -1;
}

int Expression::getValue() {
   return valeur;
}

void Expression::Affiche() {
   Symbole::Affiche();
}
