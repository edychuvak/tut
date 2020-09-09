main : main.o array.o
	g++ main.o array.o -o main
main.o : main.cpp array.h
	g++ -c main.cpp
array.o : array.cpp array.h
	g++ -c array.cpp
clean : 
	rm -fr *.o
