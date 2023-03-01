main: main.c
  gcc main.c LL.c -o a.out -g -Wall -Werror 
clean: 
  rm ./a.out
