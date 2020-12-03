all: zhan
zhan: stack.c textstack.c
	g++ textstack.c stack.c -o zhan
clean:
	rm zhan
