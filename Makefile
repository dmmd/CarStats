CC=g++
CFLAGS=-g
all: cars
	
cars: main.cpp
	$(CC) $(CFLAGS) -o cars main.cpp car.cpp datafunctions.cpp
clean:
	rm cars
	rm -r cars.dSYM
install:
	cp cars ~/bin/cars