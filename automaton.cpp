#include "automaton.h"
#include "state.h"
#include <iostream>

Automaton::Automaton(string s) {
    this->lexer = new Lexer(s);
    State* currState = new State0();
    this->stackStates.push(currState);
}

void Automaton::decalage(Symbole* s, State* state) {
    this->stackSymboles.push(s);
    this->stackStates.push(state);
}

void Automaton::reduction(int i, Symbole* s) {
    stack<Symbole*> pile;
    for(int j=0; j<i; ++j) {
        this->stackStates.pop();
        pile.push(this->stackSymboles.top()); // adds the top symbol to the stack...
        this->stackSymboles.pop();  // ...then deletes the top symbol
    }

    int val;

    // what to do next ?

    switch(i) {
        // reduction of rule 5 : E -> val 
        case 1:
            val = pile.top()->getValue();
            break;
        case 3:
            // Reduction of rule 4 : E -> (E), stores the EXPR E in val
            if(*pile.top() == OPENPAR) {
                pile.pop();
                val = pile.top()->getValue();
            } else {
                val = pile.top()->getValue(); // stores first value of the expression
                pile.pop();
                if(*pile.top() == MULT) { // Reduction of rule 3 : E -> E * E
                    pile.pop(); // Remove symbol
                    val = val * pile.top()->getValue(); // stores result of the multiplication in val
                } else if(*pile.top() == PLUS) {  // Reduction of rule 2 : E -> E + E
                    pile.pop(); // Remove symbol
                    val = val + pile.top()->getValue(); // stores result of the addition in val
                }
            }
            break;
    }
    // Transition with the new calculated Symbol
    cout<<"size fin : " << stackSymboles.size() <<endl;
    stackStates.top()->transition(*this, new Expression(val));
    lexer->addSymbol(s);
}

void Automaton::run() {
    bool recognized = false;
    while(!recognized) {
        Symbole *s = lexer->Consulter();
        s->Affiche();
        cout<<endl;
        lexer->Avancer();
        recognized = stackStates.top()->transition(*this,s);
    }
    if(*stackSymboles.top()!=ERREUR) {
        int resultat = stackSymboles.top()->getValue();
        cout << "Expression reconnue" << endl;
        cout << "Resultat : " << resultat << endl;
    }
    else {
        cout << "Expression non reconnue, erreur." << endl;
    }

    
    
}