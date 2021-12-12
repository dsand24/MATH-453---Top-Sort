CC=g++
all: topsort


topsort: topsort.cpp
	$(CC) -o topsort topsort.cpp