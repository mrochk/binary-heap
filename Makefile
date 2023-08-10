.RECIPEPREFIX = >

all: example

example:
> @mkdir -p bin
> @g++ -Wall -Werror -O1 -pedantic -std=c++17 binary_heap.hpp example.cc -o bin/example
> @./bin/example
