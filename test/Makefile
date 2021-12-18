.PHONY: comp all run clean
all: comp
run: example
	./example
clean:
	rm example *.o
comp: test.o
	g++ test.o -o example
test.o: test.cpp
	g++ -c test.cpp -std=c++11

