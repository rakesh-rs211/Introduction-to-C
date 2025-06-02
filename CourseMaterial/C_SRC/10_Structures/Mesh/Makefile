all: CreateMesh
%.o: %.c
        gcc -c -o $@ $<
%: %.o
        gcc -o $@ $<
