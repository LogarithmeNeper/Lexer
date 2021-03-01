#include <iostream>
#include <string>
#include "automaton.h"
using namespace std;

void display(int value, int expected) {
    if(value==expected) {
        cout << "OK."; 
        
    }
    else {
        cout << "ERROR";
    }
    cout << " res=" << value << endl;
    cout << "Expected res=" << expected << endl << endl;
}

int main() {
    cout << "This is the test environment." << endl << endl;

    string chaine;
    int res;

    // UT1 : test for a single value
    chaine="1";
    cout << "UT1 : " << chaine << endl;
    Automaton* a1 = new Automaton(chaine);
    res=a1->run();
    display(res, 1);

    // UT2 : test for an addition
    chaine="1+2";
    cout << "UT2 : " << chaine << endl;
    Automaton* a2 = new Automaton(chaine);
    res = a2->run();
    display(res, 3);

    // UT3 : Test for a multiplication
    chaine="7*5";
    cout << "UT3 : " << chaine << endl;
    Automaton* a3 = new Automaton(chaine);
    res = a3->run();
    display(res, 35);

    // UT4 : test for parenthesis
    chaine="(12)";
    cout << "UT4 : " << chaine << endl;
    Automaton* a4 = new Automaton(chaine);
    res = a4->run();
    display(res, 12);

    // UT5 : test for priority (* over +)
    chaine="2+5*3";
    cout << "UT5 : " << chaine << endl;
    Automaton* a5 = new Automaton(chaine);
    res = a5->run();
    display(res, 17);

    // UT6 : same, but other way
    chaine="5*3+2";
    cout << "UT6 : " << chaine << endl;
    Automaton* a6 = new Automaton(chaine);
    res = a6->run();
    display(res, 17);

    // UT7 : test if parenthesis work properly
    chaine="5*(3+2)";
    cout << "UT7 : " << chaine << endl;
    Automaton* a7 = new Automaton(chaine);
    res = a7->run();
    display(res, 25);

    // UT8 : test for bad opening parenthesis
    chaine = "((5+3)";
    cout << "UT8 : " << chaine << endl;
    Automaton* a8 = new Automaton(chaine);
    res = a8->run();
    display(res, -1);

    // UT9 : test for bad closing parenthesis
    chaine = "(5+3))";
    cout << "UT9 : " << chaine << endl;
    Automaton* a9 = new Automaton(chaine);
    res = a9->run();
    display(res, -1);

    // UT10 : test for random plus-parenthesis
    chaine = "3+(2";
    cout << "UT10 : " << chaine << endl;
    Automaton* a10 = new Automaton(chaine);
    res = a10->run();
    display(res, -1);

    // UT11 : test for random plus-parenthesis
    chaine = "3+)2";
    cout << "UT11 : " << chaine << endl;
    Automaton* a11 = new Automaton(chaine);
    res = a11->run();
    display(res, -1);

    // UT12 : test for random plus-parenthesis
    chaine = "3*(2";
    cout << "UT12 : " << chaine << endl;
    Automaton* a12 = new Automaton(chaine);
    res = a12->run();
    display(res, -1);

    // UT13 : test for random plus-parenthesis
    chaine = "3*)2";
    cout << "UT13 : " << chaine << endl;
    Automaton* a13 = new Automaton(chaine);
    res = a13->run();
    display(res, -1);

    // UT14 : test for random internal parenthesis
    chaine = "3+()2";
    cout << "UT14 : " << chaine << endl;
    Automaton* a14 = new Automaton(chaine);
    res = a14->run();
    display(res, -1);

    // UT15 : test for initial parenthesis
    chaine = "()5*2";
    cout << "UT15 : " << chaine << endl;
    Automaton* a15 = new Automaton(chaine);
    res = a15->run();
    display(res, -1);

    // UT16 : test for final parenthesis
    chaine = "2*5()";
    cout << "UT16 : " << chaine << endl;
    Automaton* a16 = new Automaton(chaine);
    res = a16->run();
    display(res, -1);

    // UT17 : negative values
    chaine = "-2";
    cout << "UT17 : " << chaine << endl;
    Automaton* a17 = new Automaton(chaine);
    res = a17->run();
    display(res, -1);

    // UT18 : minus sign
    chaine = "2-1";
    cout << "UT18 : " << chaine << endl;
    Automaton* a18 = new Automaton(chaine);
    res = a18->run();
    display(res, -1);

    // UT19 : divide sign
    chaine = "6/2";
    cout << "UT19 : " << chaine << endl;
    Automaton* a19 = new Automaton(chaine);
    res = a19->run();
    display(res, -1);
}