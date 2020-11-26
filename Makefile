all: sort
sort: main2.c text2.c
	gcc main2.c text2.c  -o sort
clean:
	rm sort

	

