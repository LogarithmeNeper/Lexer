#include <iostream>
#include "automaton.h"
#include "lexer.h"


int main(void) {
   while(true) {
      string chaine;
      std::cout << "Insérer la chaîne à analyser" << endl;
      std::cin >> chaine;
      Automaton *a = new Automaton(chaine);
      a->run();
   }
   return 0;
}
