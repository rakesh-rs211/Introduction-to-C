all: Dynamic_1DArr Dynamic_2DArr Dynamic_2DArr_RowAccess Dynamic_2DArr_ColWiseAccess
%.o: %.c
        gcc -c -o $@ $<
%: %.o
        gcc -o $@ $<
