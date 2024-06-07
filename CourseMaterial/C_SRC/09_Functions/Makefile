all: Func_StaticVariable func_PassingArgs 
%.o: %.c
        gcc -c -o $@ $<
%: %.o
        gcc -o $@ $<
