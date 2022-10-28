all: clean intruso
	g++ intruso.o src/main.cpp -o main
	main
	make clean

intruso: include/intruso.hpp
	g++ -c src/intruso.cpp


clean: 
	del intruso.o