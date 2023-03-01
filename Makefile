msh: main.c
	gcc main.c LLtest.c -o a.out -g -Wall -Werror

clean:
	rm ./a.out
