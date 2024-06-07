all: exe_complex

exe_complex: main.o complexNum.o
        gcc -o exe_complex main.o complexNum.o

%.o: %.c
        gcc -c -o $@ $<
