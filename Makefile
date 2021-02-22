all: compile

compile: lexer.o automaton.o state.o symbole.o main.o
	g++ -o main lexer.o automaton.o state.o symbole.o main.o

lexer.o: lexer.cpp lexer.h
	g++ -o lexer.o -c lexer.cpp

automaton.o: automaton.cpp automaton.h
	g++ -o automaton.o -c automaton.cpp

state.o: state.cpp state.h
	g++ -o state.o -c state.cpp

symbole.o: symbole.cpp symbole.h
	g++ -o symbole.o -c symbole.cpp

main.o: main.cpp
	g++ -o main.o -c main.cpp

clean:
	rm *.o