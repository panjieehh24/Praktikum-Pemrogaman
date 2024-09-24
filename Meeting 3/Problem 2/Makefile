main: main.o
	g++ main.o -o main

main.o: main.cpp
	g++ -c main.cpp -o main.o

run: main
	./main

clean:
	del main.o main.exe