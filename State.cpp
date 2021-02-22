#include "State.h"

OPENPAR, CLOSEPAR, PLUS, MULT, INT, FIN, ERREUR

bool State0::transition(Automaton &automaton, Symbole * s) {
    switch(*s) {
        case OPENPAR:
            automaton.decalage(s, new State2);
            break;
        case CLOSEPAR:
        case PLUS:
        case MULT:
        case INT:
            automaton.decalage(s, new State3);
            break;
        case FIN:
        case ERREUR: 
    }
}

bool State1::transition(Automaton &automaton, Symbole * s) {
    switch(*s) {
        case OPENPAR:
        case CLOSEPAR:
        case PLUS:
            automaton.decalage(s, new State4);
            break;
        case MULT:
            automaton.decalage(s, new State5);
            break;
        case INT:
        case FIN: // TODO : Comment coder accepter ?
        case ERREUR: 
    }
}

bool State2::transition(Automaton &automaton, Symbole * s) {
    switch(*s) {
        case OPENPAR:
            automaton.decalage(s, new State2);
            break;
        case CLOSEPAR:
        case PLUS:
        case MULT:
        case INT:
            automaton.decalage(s, new State3);
            break;
        case FIN:
        case ERREUR: 
    }
}

bool State3::transition(Automaton &automaton, Symbole * s) {
    switch(*s) {
        case OPENPAR:
        case CLOSEPAR:
            automaton.reduction(1, s);
            break;
        case PLUS:
            automaton.reduction(1, s);
            break;
        case MULT:
            automaton.reduction(1, s);
            break;
        case INT:
        case FIN:
            automaton.reduction(1, s);
            break;
        case ERREUR: 
    }
}

bool State4::transition(Automaton &automaton, Symbole * s) {
    switch(*s) {
        case OPENPAR:
            automaton.decalage(s, new State2);
            break;
        case CLOSEPAR:
        case PLUS:
        case MULT:
        case INT:
            automaton.decalage(s, new State3);
            break;
        case FIN:
        case ERREUR: 
    }
}

bool State5::transition(Automaton &automaton, Symbole * s) {
    switch(*s) {
        case OPENPAR:
            automaton.decalage(s, new State2);
            break;
        case CLOSEPAR:
        case PLUS:
        case MULT:
        case INT:
            automaton.decalage(s, new State3);
            break;
        case FIN:
        case ERREUR: 
    }
}

bool State6::transition(Automaton &automaton, Symbole * s) {
    switch(*s) {
        case OPENPAR:
        case CLOSEPAR:
            automaton.decalage(s, new State9);
            break;
        case PLUS:
            automaton.decalage(s, new State4);
            break;
        case MULT:
            automaton.decalage(s, new State5);
            break;
        case INT:
        case FIN:
        case ERREUR: 
    }
}

bool State7::transition(Automaton &automaton, Symbole * s) {
    switch(*s) {
        case OPENPAR:
        case CLOSEPAR:
            automaton.reduction(3, s);
            break;
        case PLUS:
            automaton.reduction(3, s);
            break;
        case MULT:
            automaton.decalage(s, new State5);
            break;
        case INT:
        case FIN:
            automaton.reduction(3, s);
            break;
        case ERREUR: 
    }
}

bool State8::transition(Automaton &automaton, Symbole * s) {
    switch(*s) {
        case OPENPAR:
        case CLOSEPAR:
            automaton.reduction(3, s);
            break;
        case PLUS:
            automaton.reduction(3, s);
            break;
        case MULT:
            automaton.reduction(3, s);
            break;
        case INT:
        case FIN:
            automaton.reduction(3, s);
            break;
        case ERREUR: 
    }
}

bool State9::transition(Automaton &automaton, Symbole * s) {
    switch(*s) {
        case OPENPAR:
        case CLOSEPAR:
            automaton.reduction(3, s);
            break;
        case PLUS:
            automaton.reduction(3, s);
            break;
        case MULT:
            automaton.reduction(3, s);
            break;
        case INT:
        case FIN:
            automaton.reduction(3, s);
            break;
        case ERREUR: 
    }
}

