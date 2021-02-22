#include "Automaton.h"

Automaton::Automaton(string s) {
    this->lexer = new Lexer(s);
    this->stackStates.push(new State0());
}