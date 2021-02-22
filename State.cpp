#include "State.h"

bool State0::transition(Automaton &automaton, Symbole * s) {
    switch(*s) {
        case OPENPAR:
            automaton.decalage(s, new State2);
            break;
        case INT:
            automaton.decalage(s, new State3);
            break;
    }
    return false;
}

bool State1::transition(Automaton &automaton, Symbole * s) {
    switch(*s) {:
        case PLUS:
            automaton.decalage(s, new State4);
            break;
        case MULT:
            automaton.decalage(s, new State5);
            break;
        case FIN:
            return true;
    }
    return false;
}

bool State2::transition(Automaton &automaton, Symbole * s) {
    switch(*s) {
        case OPENPAR:
            automaton.decalage(s, new State2);
            break;
        case INT:
            automaton.decalage(s, new State3);
            break;
    }
    return false;
}

bool State3::transition(Automaton &automaton, Symbole * s) {
    switch(*s) {
        case CLOSEPAR:
            automaton.reduction(1, s);
            break;
        case PLUS:
            automaton.reduction(1, s);
            break;
        case MULT:
            automaton.reduction(1, s);
            break;
        case FIN:
            automaton.reduction(1, s);
            break; 
    }
    return false;
}

bool State4::transition(Automaton &automaton, Symbole * s) {
    switch(*s) {
        case OPENPAR:
            automaton.decalage(s, new State2);
            break;
        case INT:
            automaton.decalage(s, new State3);
            break;
    }
    return false;
}

bool State5::transition(Automaton &automaton, Symbole * s) {
    switch(*s) {
        case OPENPAR:
            automaton.decalage(s, new State2);
            break;
        case INT:
            automaton.decalage(s, new State3);
            break;
    }
    return false;
}

bool State6::transition(Automaton &automaton, Symbole * s) {
    switch(*s) {
        case CLOSEPAR:
            automaton.decalage(s, new State9);
            break;
        case PLUS:
            automaton.decalage(s, new State4);
            break;
        case MULT:
            automaton.decalage(s, new State5);
            break;
    }
    return false;
}

bool State7::transition(Automaton &automaton, Symbole * s) {
    switch(*s) {
        case CLOSEPAR:
            automaton.reduction(3, s);
            break;
        case PLUS:
            automaton.reduction(3, s);
            break;
        case MULT:
            automaton.decalage(s, new State5);
            break;
        case FIN:
            automaton.reduction(3, s);
            break; 
    }
    return false;
}

bool State8::transition(Automaton &automaton, Symbole * s) {
    switch(*s) {
        case CLOSEPAR:
            automaton.reduction(3, s);
            break;
        case PLUS:
            automaton.reduction(3, s);
            break;
        case MULT:
            automaton.reduction(3, s);
            break;
        case FIN:
            automaton.reduction(3, s);
            break;
    }
    return false;
}

bool State9::transition(Automaton &automaton, Symbole * s) {
    switch(*s) {
        case CLOSEPAR:
            automaton.reduction(3, s);
            break;
        case PLUS:
            automaton.reduction(3, s);
            break;
        case MULT:
            automaton.reduction(3, s);
            break;
        case FIN:
            automaton.reduction(3, s);
            break;
    }
    return false;
}

State0::State0() {
    name = "I0";
}

State1::State1() {
    name = "I1";
}

State2::State2() {
    name = "I2";
}

State3::State3() {
    name = "I3";
}

State4::State4() {
    name = "I4";
}

State5::State5() {
    name = "I5";
}

State6::State6() {
    name = "I6";
}

State7::State7() {
    name = "I7";
}

State8::State8() {
    name = "I8";
}

State9::State9() {
    name = "I9";
}
