all:
	clang -O3 -lSDL src/*.c
	
debug:
	clang -g -lSDL src/*.c
