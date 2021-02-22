#include "Automaton.h"

Automaton::Automaton(string s) {
    this->lexer = new Lexer(s);
    State* currState = new State0();
    this->stackStates.push(currState);
}