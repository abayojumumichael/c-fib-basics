# Beginner C Project: Weighted Fibonacci

This is a small, beginner-friendly C project that prints the first `n` values of the **Weighted Fibonacci** sequence. It includes both recursive and iterative implementations and a simple `Makefile` to build two executables.

The sequence is defined as:

- `W(0) = 0`
- `W(1) = 1`
- `W(n) = W(n-1) + 2 * W(n-2)` for `n >= 2`

## Build

From the `src` directory:

```sh
make
```

This builds two executables:

- `stage1` (recursive version)
- `stage2` (iterative version)

To clean build artifacts:

```sh
make clean
```

## Run

From the `src` directory:

```sh
./stage1
```

or

```sh
./stage2
```

You will be prompted for the sequence length:

```
Length? 6
[0, 1, 1, 3, 5, 11]
```

## Project Layout

- `src/Makefile` build rules for `stage1` and `stage2`
- `src/run_fib.c` program entry point
- `src/print_fib.c` input + output logic
- `src/recursive_fib.c` recursive `fibcalc`
- `src/iterative_fib.c` iterative `fibcalc`
- `src/fib.h`, `src/print_fib.h` header files

## Notes

- `stage1` links against the recursive implementation.
- `stage2` links against the iterative implementation.
- The implementation is intentionally minimal.
