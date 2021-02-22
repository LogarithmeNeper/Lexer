#include "Automaton.h"

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
    
}