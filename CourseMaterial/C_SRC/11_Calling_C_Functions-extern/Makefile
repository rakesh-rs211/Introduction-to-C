all: addnum

addNum: main.o addNum.o
  g++ main.o addNum.o -o addNum
main.o: main.cpp
  g++ -c main.cpp
addNum.o: addNum.c
  gcc -c addNum.c

clean:
  rm -f *.o addNum
