
all: hello

hello:vectoradd.o jumpMenu.o
	# g++ vectoradd.o  jumpMenu.o -o hello

vectoradd.o: vectoradd.cpp
	g++ -c vectoradd.cpp

jumpMenu.o: jumpMenu.cpp
		g++ -c jumpMenu.cpp

clean:
	rm -rf *o hello
