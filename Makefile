CC=g++
CFLAGS = -Wall -std=c++11 -g

all: CombatSim.o Game.o
	$(CC) $(CFLAGS) CombatSim.o Game.o -o Sim

CombatSim.o: CombatSim.cpp Game.cpp Game.h Combatant.h
	$(CC) $(CFLAGS) -c CombatSim.cpp

Game.o: Game.cpp Game.h Combatant.h
	$(CC) $(CFLAGS) -c Game.cpp

clean:
	rm -f *.o Sim
