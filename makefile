main: main.o complex.o
	g++ main.o racional.o -o racional
	
main.o:	main.cpp racional.h
	g++ -c main.cpp 

complex.o:	racional.cpp racional.h
	g++ -c racional.cpp 
