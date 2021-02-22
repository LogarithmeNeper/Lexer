#pragma once
#include "State.h"
#include "symbole.h"
#include "lexer.h"
#include <stack>
#include <string>
using namespace std;

class State;

class Automaton {
    public:
        Automaton(string s);
        ~Automaton();
        void decalage(Symbole* s, State* state);
    protected:
        Lexer* lexer;
        stack<Symbole*> stackSymboles;
        stack<State*> stackStates;
};