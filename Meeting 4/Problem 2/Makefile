

main: main.o
	g++ main.o -o main

main.o: main.cpp
	g++ -c main.cpp -o main.o

run: main
	./main

clean:
	rm main.o main.exe