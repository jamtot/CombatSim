CC=g++
CFLAGS = -Wall -std=c++11 -g

all:
	$(CC) $(CFLAGS) CombatSim.cpp -o Sim

clean:
	rm -f *.o Sim
