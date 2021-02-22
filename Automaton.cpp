#include "Automaton.h"

Automaton::Automaton(string s) {
    this->lexer = new Lexer(s);
    State* currState = new State0();
    this->stackStates.push(currState);
}

void Automaton::decalage(State* state, Symbole* s) {
    this->stackStates.push(state);
    this->stackSymboles.push(s);
}