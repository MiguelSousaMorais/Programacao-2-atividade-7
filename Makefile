all: clean intruso.o
	g++ intruso.o src/main.cpp -o main.out
	main
	make clean

intruso.o: include/intruso.hpp
	g++ -c src/intruso.cpp


clean: 
	del intruso.o