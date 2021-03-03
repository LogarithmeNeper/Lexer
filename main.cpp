#include <iostream>
#include "automaton.h"
#include "lexer.h"


int main(void) {
   bool continueLoop = true;
   while(continueLoop) {
      string chaine;
      std::cout << "Insérer la chaîne à analyser (STOP pour arrêter le programme)" << endl;
      std::cin >> chaine;
      if(chaine == "STOP") {
         continueLoop = false;
      } else {
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
      
   }
   return 0;
}
