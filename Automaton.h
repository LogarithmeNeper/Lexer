#include "State.h"
#include "symbole.h"
#include <stack>
#include <string>
using namespace std;

class Automaton {
    public:
        Automaton(string s);
        ~Automaton();
        void decalage(State state, Symbole s);
    protected:
        stack<Symbole> stackSymboles;
        stack<State> stackStates;

};