all: sort search duilie
sort: main2.c text2.c
	gcc main2.c text2.c  -o sort
search: search20.c testsearch20.c
	g++ search20.c testsearch20.c -o search
duilie: duilie.c testduilie.c
	g++ duilie.c testduilie.c -o duilie
clean:
	rm sort
	rm search
	rm duilie

	

