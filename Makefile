.RECIPEPREFIX = >

example:
> @mkdir -p bin
> @g++ -Wall -Werror -O1 -std=c++17 heap.h example.cc -o bin/example
> @./bin/example
