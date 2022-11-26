all: main.o ClaseA.o ClaseB.o ClaseC.o
	g++ main.o ClaseA.o ClaseB.o ClaseC.o -o prueba
main.o: main.cc
	g++ -c main.cc
ClaseA.o: ClaseA.cc ClaseA.h
	g++ -c ClaseA.cc
ClaseB.o: ClaseB.cc ClaseB.h
	g++ -c ClaseB.cc
ClaseC.o: ClaseC.cc ClaseC.h
	g++ -c ClaseC.cc

