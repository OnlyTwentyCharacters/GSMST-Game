OBJ = GSMST\ Jokes

.PHONY: default
default: all

.PHONY: all
all: $(OBJ)

$(OBJ): main.o
	g++ main.o -w -o $(OBJ)

.PHONY: clean
clean:
	rm -f *.o
	rm -f $(OBJ)

main.o: main.cpp