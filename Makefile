CXXFLAGS=-Wall --std=c++0x

sources=main.cpp monopoly.cpp joueur.cpp case.cpp caseDepart.cpp caseImpots.cpp caseTaxe.cpp plateau.cpp de.cpp gobelet.cpp
entetes=monopoly.hpp joueur.hpp case.hpp caseDepart.hpp caseImpots.hpp caseTaxe.hpp plateau.hpp de.hpp gobelet.hpp gare.hpp
objects=$(sources:.cpp=.o)

main: $(objects)
	g++ -o $@ $^

main.o: main.cpp


clean:
	rm -f *^ *.o

mrproper: clean
	rm -f main
