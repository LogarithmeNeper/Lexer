#include <iostream>
#include "automaton.h"
#include "lexer.h"


int main(void) {
   while(true) {
      string chaine;
      std::cout << "Insérer la chaîne à analyser" << endl;
      std::cin >> chaine;
      Automaton *a = new Automaton(chaine);
      int res=a->run();
      if(res!=-1) {
         cout << "Expression reconnue" << endl;
         cout << "Résultat : " << res << endl;
      }
      else {
         cout << "Expression non reconnue" << endl;
      }
   }
   return 0;
}
