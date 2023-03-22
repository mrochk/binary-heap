.RECIPEPREFIX = >

example:
> @mkdir -p bin
> @g++ -Wall -Werror -O1 -pedantic heap.h example.cc -o bin/example
> @./bin/example
