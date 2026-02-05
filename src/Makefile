all: stage1 stage2

stage1: run_fib.o print_fib.o recursive_fib.o
	clang run_fib.o print_fib.o recursive_fib.o -o stage1 -Wall -Wextra -g

stage2: run_fib.o print_fib.o iterative_fib.o
	clang run_fib.o print_fib.o iterative_fib.o -o stage2 -Wall -Wextra -g

run_fib.o: run_fib.c print_fib.h
	clang run_fib.c -c -Wall -Wextra -g

print_fib.o: print_fib.c print_fib.h fib.h
	clang print_fib.c -c -Wall -Wextra -g

recursive_fib.o: recursive_fib.c fib.h
	clang recursive_fib.c -c -Wall -Wextra -g

iterative_fib.o: iterative_fib.c fib.h
	clang iterative_fib.c -c -Wall -Wextra -g

clean:
	rm -f *.o stage1 stage2
