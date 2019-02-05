second: first.o second.o
	g++ -o second first.o second.o

fisrt.o: first.cc header.h
	g++ -c first.cc

second.o: second.cc header.h
	g++ -c second.cc