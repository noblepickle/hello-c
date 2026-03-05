all: hello compare

hello: hello.c
	gcc hello.c -o hello

compare: compare.c
	gcc compare.c -lcs50 -o compare

agree: agree.c
	gcc agree.c -lcs50 -o agree

cat: cat.c
	gcc cat.c -lcs50 -o cat

mario: mario.c
	gcc mario.c -lcs50 -o mario

calc: calculator.c
	gcc calculator.c -lcs50 -o calc

clean:
	rm -f hello compare