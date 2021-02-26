#pragma once 

#include <string>
#include "automaton.h"
#include "symbole.h"
using namespace std;

class State {
    public:
        State() {};
        State(string s) {name=s;};
        ~State() {delete this;};
        virtual bool transition(Automaton &automaton, Symbole* symb) = 0;
    protected:
        string name;

};

class State0 : public State {
    public:
        State0();
        bool transition(Automaton &automaton, Symbole* symb);
    protected:
};

class State1 : public State {
    public:
        State1();
        bool transition(Automaton &automaton, Symbole* symb);
    protected:
};

class State2 : public State {
    public:
        State2();
        bool transition(Automaton &automaton, Symbole* symb);
    protected:
};

class State3 : public State {
    public:
        State3();
        bool transition(Automaton &automaton, Symbole* symb);
    protected:
};

class State4 : public State {
    public:
        State4();
        bool transition(Automaton &automaton, Symbole* symb);
    protected:
};

class State5 : public State {
    public:
        State5();
        bool transition(Automaton &automaton, Symbole* symb);
    protected:
};

class State6 : public State {
    public:
        State6();
        bool transition(Automaton &automaton, Symbole* symb);
    protected:
};

class State7 : public State {
    public:
        State7();
        bool transition(Automaton &automaton, Symbole* symb);
    protected:
};

class State8 : public State {
    public:
        State8();
        bool transition(Automaton &automaton, Symbole* symb);
    protected:
};

class State9 : public State {
    public:
        State9();
        bool transition(Automaton &automaton, Symbole* symb);
    protected:
};