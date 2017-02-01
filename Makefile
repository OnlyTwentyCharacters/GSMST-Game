OBJ = GSMST\ Jokes

.PHONY: default
default: all

.PHONY: all
all: $(OBJ)

$(OBJ): main.o Player.o
	g++ main.o Player.o -w -o $(OBJ)

.PHONY: clean
clean:
	rm -f *.o
	rm -f $(OBJ)

main.o: main.cpp
	g++ -c main.cpp

Player.o: lib/Player.cpp
	g++ -c lib/Player.cpp