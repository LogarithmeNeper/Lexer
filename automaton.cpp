#include "automaton.h"

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
}