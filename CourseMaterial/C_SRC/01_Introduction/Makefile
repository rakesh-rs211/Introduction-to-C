CXX = gcc
CXXFLAGS = -O0 -Wall
all: HelloWorld SquareRoot
HelloWorld: HelloWorld.o
	${CXX}  ${CXXFLAGS} -o HelloWorld HelloWorld.o
HelloWorld.o: HelloWorld.c
	${CXX} ${CXXFLAGS} -c -o HelloWorld.o HelloWorld.c
SquareRoot: SquareRoot.o
	${CXX} ${CXXFLAGS} -o SquareRoot SquareRoot.o -lm
SquareRoot.o: SquareRoot.c
	${CXX} ${CXXFLAGS} -c -o SquareRoot.o SquareRoot.c
clean:
	rm -rf HelloWorld.o HelloWorld
